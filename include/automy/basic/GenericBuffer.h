
#ifndef INCLUDE_AUTOMY_BASIC_GENERICBUFFER_H_
#define INCLUDE_AUTOMY_BASIC_GENERICBUFFER_H_

#include <vnx/Value.h>


namespace automy {
namespace basic {

class GenericBuffer {
public:
	template<typename T>
	std::shared_ptr<T> get() {
		std::shared_ptr<T> result;
		for(const std::shared_ptr<vnx::Value>& sample : buffer) {
			if(sample.use_count() == 1) {
				result = std::dynamic_pointer_cast<T>(sample);
			}
			if(result) {
				break;
			}
		}
		if(!result) {
			result = std::make_shared<T>();
			buffer.push_back(result);
		}
		return result;
	}
	
private:
	std::vector<std::shared_ptr<vnx::Value>> buffer;
	
};


} // basic
} // automy

#endif /* INCLUDE_AUTOMY_BASIC_GENERICBUFFER_H_ */
