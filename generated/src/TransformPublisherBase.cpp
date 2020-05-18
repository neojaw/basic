
// AUTO GENERATED by vnxcppcodegen

#include <automy/basic/package.hxx>
#include <automy/basic/TransformPublisherBase.hxx>
#include <vnx/Input.h>
#include <vnx/Output.h>
#include <vnx/Visitor.h>
#include <vnx/Object.h>
#include <vnx/Struct.h>
#include <vnx/Config.h>
#include <vnx/Binary.h>
#include <vnx/NoSuchMethod.hxx>


namespace automy {
namespace basic {


const vnx::Hash64 TransformPublisherBase::VNX_TYPE_HASH(0x88d77b971994875dull);
const vnx::Hash64 TransformPublisherBase::VNX_CODE_HASH(0x168e14e1df7b67d7ull);

TransformPublisherBase::TransformPublisherBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".interval_ms", interval_ms);
	vnx::read_config(vnx_name + ".output", output);
	vnx::read_config(vnx_name + ".transform", transform);
}

vnx::Hash64 TransformPublisherBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* TransformPublisherBase::get_type_name() const {
	return "automy.basic.TransformPublisher";
}
const vnx::TypeCode* TransformPublisherBase::get_type_code() const {
	return automy::basic::vnx_native_type_code_TransformPublisher;
}

void TransformPublisherBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = automy::basic::vnx_native_type_code_TransformPublisher;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, output);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, interval_ms);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, transform);
	_visitor.type_end(*_type_code);
}

void TransformPublisherBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"output\": "; vnx::write(_out, output);
	_out << ", \"interval_ms\": "; vnx::write(_out, interval_ms);
	_out << ", \"transform\": "; vnx::write(_out, transform);
	_out << "}";
}

void TransformPublisherBase::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "interval_ms") {
			vnx::from_string(_entry.second, interval_ms);
		} else if(_entry.first == "output") {
			vnx::from_string(_entry.second, output);
		} else if(_entry.first == "transform") {
			vnx::from_string(_entry.second, transform);
		}
	}
}

vnx::Object TransformPublisherBase::to_object() const {
	vnx::Object _object;
	_object["output"] = output;
	_object["interval_ms"] = interval_ms;
	_object["transform"] = transform;
	return _object;
}

void TransformPublisherBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "interval_ms") {
			_entry.second.to(interval_ms);
		} else if(_entry.first == "output") {
			_entry.second.to(output);
		} else if(_entry.first == "transform") {
			_entry.second.to(transform);
		}
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
	const vnx::TypeCode* type_code = vnx::get_type_code(vnx::Hash64(0x88d77b971994875dull));
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> TransformPublisherBase::static_create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>(true);
	type_code->name = "automy.basic.TransformPublisher";
	type_code->type_hash = vnx::Hash64(0x88d77b971994875dull);
	type_code->code_hash = vnx::Hash64(0x168e14e1df7b67d7ull);
	type_code->depends.resize(1);
	type_code->depends[0] = ::automy::basic::Transform3D::static_get_type_code();
	type_code->methods.resize(1);
	{
		std::shared_ptr<vnx::TypeCode> call_type = std::make_shared<vnx::TypeCode>(true);
		call_type->name = "automy.basic.TransformPublisher.set_transform";
		call_type->type_hash = vnx::Hash64(0x4b8ec99ea30fd92cull);
		call_type->code_hash = vnx::Hash64(0xf805023e049aa2f6ull);
		call_type->is_method = true;
		{
			std::shared_ptr<vnx::TypeCode> return_type = std::make_shared<vnx::TypeCode>(true);
			return_type->name = "automy.basic.TransformPublisher.set_transform.return";
			return_type->type_hash = vnx::Hash64(0x2798b4f2ee70b0a4ull);
			return_type->code_hash = vnx::Hash64(0xc7fb9f1d25983068ull);
			return_type->is_return = true;
			return_type->build();
			call_type->return_type = vnx::register_type_code(return_type);
		}
		call_type->fields.resize(1);
		{
			vnx::TypeField& field = call_type->fields[0];
			field.is_extended = true;
			field.name = "new_transform";
			field.code = {16};
		}
		call_type->build();
		type_code->methods[0] = vnx::register_type_code(call_type);
	}
	type_code->fields.resize(3);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "output";
		field.code = {12, 5};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.name = "interval_ms";
		field.value = vnx::to_string(500);
		field.code = {7};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "transform";
		field.code = {19, 0};
	}
	type_code->build();
	return type_code;
}

void TransformPublisherBase::vnx_handle_switch(std::shared_ptr<const ::vnx::Sample> _sample) {
	const uint64_t _type_hash = _sample->value->get_type_hash();
}

std::shared_ptr<vnx::Value> TransformPublisherBase::vnx_call_switch(vnx::TypeInput& _in, const vnx::TypeCode* _call_type, const vnx::request_id_t& _request_id) {
	if(_call_type->type_hash == vnx::Hash64(0x4b8ec99ea30fd92cull)) {
		::std::shared_ptr<const ::automy::basic::Transform3D> new_transform;
		{
			const char* const _buf = _in.read(_call_type->total_field_size);
			if(_call_type->is_matched) {
			}
			for(const vnx::TypeField* _field : _call_type->ext_fields) {
				switch(_field->native_index) {
					case 0: vnx::read(_in, new_transform, _call_type, _field->code.data()); break;
					default: vnx::skip(_in, _call_type, _field->code.data());
				}
			}
		}
		set_transform(new_transform);
		std::shared_ptr<vnx::Binary> _return_value;
		{
			const vnx::TypeCode* _return_type = automy::basic::vnx_native_type_code_TransformPublisher_set_transform_return;
			_return_value = vnx::Binary::create();
			_return_value->type_code = _return_type;
		}
		return _return_value;
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : 0;
	_ex->method = _call_type->name;
	return _ex;
}


} // namespace automy
} // namespace basic


namespace vnx {

void read(TypeInput& in, ::automy::basic::TransformPublisherBase& value, const TypeCode* type_code, const uint16_t* code) {
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
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.output, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.transform, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::basic::TransformPublisherBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = automy::basic::vnx_native_type_code_TransformPublisher;
		out.write_type_code(type_code);
		vnx::write_class_header<::automy::basic::TransformPublisherBase>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.interval_ms);
	vnx::write(out, value.output, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.transform, type_code, type_code->fields[2].code.data());
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
