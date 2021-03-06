
#include <automy/basic/TransformPublisher.h>


namespace automy {
namespace basic {

TransformPublisher::TransformPublisher(const std::string& _vnx_name)
	:	TransformPublisherBase(_vnx_name)
{
	for(const auto& obj : config) {
		transforms.push_back(Transform3D::from_config(obj));
	}
}

void TransformPublisher::main()
{
	for(auto value : transforms) {
		log(INFO).out << "Publishing transform: \"" << value->parent << "\" -> \"" << value->frame << "\"";
	}
	set_timer_millis(interval_ms, std::bind(&TransformPublisher::update, this));

	Super::main();
}

void TransformPublisher::set_transform(std::shared_ptr<const Transform3D> new_transform)
{
	for(auto& value : transforms) {
		if(value->frame == new_transform->frame && value->parent == new_transform->parent) {
			value = new_transform;
			return;
		}
	}
	transforms.push_back(new_transform);
	log(INFO).out << "Added new transform: \"" << new_transform->parent << "\" -> \"" << new_transform->frame << "\"";
}

void TransformPublisher::update()
{
	for(auto value : transforms) {
		auto copy = vnx::clone(value);
		copy->time = vnx::get_time_micros();
		publish(copy, value->get_topic(domain));
		if(both_ways) {
			auto inverse = copy->get_inverse();
			publish(inverse, inverse->get_topic(domain));
		}
	}
}


} // basic
} // automy
