
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_automy_basic_TransformPublisher_ASYNC_CLIENT_HXX_
#define INCLUDE_automy_basic_TransformPublisher_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <automy/basic/Transform3D.hxx>
#include <vnx/Module.h>


namespace automy {
namespace basic {

class TransformPublisherAsyncClient : public vnx::AsyncClient {
public:
	TransformPublisherAsyncClient(const std::string& service_name);
	
	TransformPublisherAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t set_transform(const ::std::shared_ptr<const ::automy::basic::Transform3D>& new_transform, 
			const std::function<void()>& _callback = std::function<void()>());
	
	std::vector<uint64_t> vnx_get_pending_ids() const override;
	
protected:
	void vnx_purge_request(uint64_t _request_id) override;
	
	void vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Binary> _data) override;
	
private:
	std::map<uint64_t, std::function<void()>> vnx_queue_set_transform;
	
};


} // namespace automy
} // namespace basic

#endif // INCLUDE_automy_basic_TransformPublisher_ASYNC_CLIENT_HXX_