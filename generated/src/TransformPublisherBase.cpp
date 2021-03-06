
// AUTO GENERATED by vnxcppcodegen

#include <automy/basic/package.hxx>
#include <automy/basic/TransformPublisherBase.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <automy/basic/Transform3D.hxx>
#include <automy/basic/TransformPublisher_set_transform.hxx>
#include <automy/basic/TransformPublisher_set_transform_return.hxx>
#include <vnx/Module.h>
#include <vnx/ModuleInterface_vnx_close.hxx>
#include <vnx/ModuleInterface_vnx_close_return.hxx>
#include <vnx/ModuleInterface_vnx_get_config.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_get_config_return.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/ModuleInterface_vnx_restart.hxx>
#include <vnx/ModuleInterface_vnx_restart_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config_return.hxx>
#include <vnx/Object.hpp>

#include <vnx/vnx.h>


namespace automy {
namespace basic {


const vnx::Hash64 TransformPublisherBase::VNX_TYPE_HASH(0x88d77b971994875dull);
const vnx::Hash64 TransformPublisherBase::VNX_CODE_HASH(0x9a442e8c134cf17bull);

TransformPublisherBase::TransformPublisherBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".both_ways", both_ways);
	vnx::read_config(vnx_name + ".config", config);
	vnx::read_config(vnx_name + ".domain", domain);
	vnx::read_config(vnx_name + ".interval_ms", interval_ms);
	vnx::read_config(vnx_name + ".transforms", transforms);
}

vnx::Hash64 TransformPublisherBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* TransformPublisherBase::get_type_name() const {
	return "automy.basic.TransformPublisher";
}

const vnx::TypeCode* TransformPublisherBase::get_type_code() const {
	return automy::basic::vnx_native_type_code_TransformPublisherBase;
}

void TransformPublisherBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = automy::basic::vnx_native_type_code_TransformPublisherBase;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, domain);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, interval_ms);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, both_ways);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, config);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, transforms);
	_visitor.type_end(*_type_code);
}

void TransformPublisherBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"domain\": "; vnx::write(_out, domain);
	_out << ", \"interval_ms\": "; vnx::write(_out, interval_ms);
	_out << ", \"both_ways\": "; vnx::write(_out, both_ways);
	_out << ", \"config\": "; vnx::write(_out, config);
	_out << ", \"transforms\": "; vnx::write(_out, transforms);
	_out << "}";
}

void TransformPublisherBase::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "both_ways") {
			vnx::from_string(_entry.second, both_ways);
		} else if(_entry.first == "config") {
			vnx::from_string(_entry.second, config);
		} else if(_entry.first == "domain") {
			vnx::from_string(_entry.second, domain);
		} else if(_entry.first == "interval_ms") {
			vnx::from_string(_entry.second, interval_ms);
		} else if(_entry.first == "transforms") {
			vnx::from_string(_entry.second, transforms);
		}
	}
}

vnx::Object TransformPublisherBase::to_object() const {
	vnx::Object _object;
	_object["domain"] = domain;
	_object["interval_ms"] = interval_ms;
	_object["both_ways"] = both_ways;
	_object["config"] = config;
	_object["transforms"] = transforms;
	return _object;
}

void TransformPublisherBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "both_ways") {
			_entry.second.to(both_ways);
		} else if(_entry.first == "config") {
			_entry.second.to(config);
		} else if(_entry.first == "domain") {
			_entry.second.to(domain);
		} else if(_entry.first == "interval_ms") {
			_entry.second.to(interval_ms);
		} else if(_entry.first == "transforms") {
			_entry.second.to(transforms);
		}
	}
}

vnx::Variant TransformPublisherBase::get_field(const std::string& _name) const {
	if(_name == "domain") {
		return vnx::Variant(domain);
	}
	if(_name == "interval_ms") {
		return vnx::Variant(interval_ms);
	}
	if(_name == "both_ways") {
		return vnx::Variant(both_ways);
	}
	if(_name == "config") {
		return vnx::Variant(config);
	}
	if(_name == "transforms") {
		return vnx::Variant(transforms);
	}
	return vnx::Variant();
}

void TransformPublisherBase::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "domain") {
		_value.to(domain);
	} else if(_name == "interval_ms") {
		_value.to(interval_ms);
	} else if(_name == "both_ways") {
		_value.to(both_ways);
	} else if(_name == "config") {
		_value.to(config);
	} else if(_name == "transforms") {
		_value.to(transforms);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const TransformPublisherBase& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, TransformPublisherBase& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* TransformPublisherBase::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> TransformPublisherBase::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "automy.basic.TransformPublisher";
	type_code->type_hash = vnx::Hash64(0x88d77b971994875dull);
	type_code->code_hash = vnx::Hash64(0x9a442e8c134cf17bull);
	type_code->is_native = true;
	type_code->methods.resize(8);
	type_code->methods[0] = ::vnx::ModuleInterface_vnx_get_config_object::static_get_type_code();
	type_code->methods[1] = ::vnx::ModuleInterface_vnx_get_config::static_get_type_code();
	type_code->methods[2] = ::vnx::ModuleInterface_vnx_set_config_object::static_get_type_code();
	type_code->methods[3] = ::vnx::ModuleInterface_vnx_set_config::static_get_type_code();
	type_code->methods[4] = ::vnx::ModuleInterface_vnx_get_type_code::static_get_type_code();
	type_code->methods[5] = ::vnx::ModuleInterface_vnx_restart::static_get_type_code();
	type_code->methods[6] = ::vnx::ModuleInterface_vnx_close::static_get_type_code();
	type_code->methods[7] = ::automy::basic::TransformPublisher_set_transform::static_get_type_code();
	type_code->fields.resize(5);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "domain";
		field.value = vnx::to_string("tf");
		field.code = {32};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.name = "interval_ms";
		field.value = vnx::to_string(500);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.name = "both_ways";
		field.value = vnx::to_string(true);
		field.code = {31};
	}
	{
		vnx::TypeField& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "config";
		field.code = {12, 24};
	}
	{
		vnx::TypeField& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "transforms";
		field.code = {12, 16};
	}
	type_code->build();
	return type_code;
}

void TransformPublisherBase::vnx_handle_switch(std::shared_ptr<const vnx::Sample> _sample) {
}

std::shared_ptr<vnx::Value> TransformPublisherBase::vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) {
	const auto _type_hash = _method->get_type_hash();
	if(_type_hash == vnx::Hash64(0x17f58f68bf83abc0ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_get_config_object_return::create();
		_return_value->_ret_0 = vnx_get_config_object();
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0xbbc7f1a01044d294ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_get_config_return::create();
		_return_value->_ret_0 = vnx_get_config(_args->name);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0xca30f814f17f322full)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config_object>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_set_config_object_return::create();
		vnx_set_config_object(_args->config);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x362aac91373958b7ull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_set_config_return::create();
		vnx_set_config(_args->name, _args->value);
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x305ec4d628960e5dull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_get_type_code_return::create();
		_return_value->_ret_0 = vnx_get_type_code();
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x9e95dc280cecca1bull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_restart>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_restart_return::create();
		vnx_restart();
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x9e165e2b50bad84bull)) {
		auto _args = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_close>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::vnx::ModuleInterface_vnx_close_return::create();
		vnx_close();
		return _return_value;
	} else if(_type_hash == vnx::Hash64(0x4b8ec99ea30fd92cull)) {
		auto _args = std::dynamic_pointer_cast<const ::automy::basic::TransformPublisher_set_transform>(_method);
		if(!_args) {
			throw std::logic_error("vnx_call_switch(): !_args");
		}
		auto _return_value = ::automy::basic::TransformPublisher_set_transform_return::create();
		set_transform(_args->new_transform);
		return _return_value;
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : 0;
	_ex->method = _method->get_type_name();
	return _ex;
}


} // namespace automy
} // namespace basic


namespace vnx {

void read(TypeInput& in, ::automy::basic::TransformPublisherBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		throw std::logic_error("read(): type_code == 0");
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: vnx::skip(in, type_code, code); return;
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		{
			const vnx::TypeField* const _field = type_code->field_map[1];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.interval_ms, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[2];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.both_ways, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.domain, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.config, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.transforms, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::basic::TransformPublisherBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = automy::basic::vnx_native_type_code_TransformPublisherBase;
		out.write_type_code(type_code);
		vnx::write_class_header<::automy::basic::TransformPublisherBase>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(5);
	vnx::write_value(_buf + 0, value.interval_ms);
	vnx::write_value(_buf + 4, value.both_ways);
	vnx::write(out, value.domain, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.config, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.transforms, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::automy::basic::TransformPublisherBase& value) {
	value.read(in);
}

void write(std::ostream& out, const ::automy::basic::TransformPublisherBase& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::automy::basic::TransformPublisherBase& value) {
	value.accept(visitor);
}

} // vnx
