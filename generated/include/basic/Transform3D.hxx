
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_basic_Transform3D_HXX_
#define INCLUDE_basic_Transform3D_HXX_

#include <basic/package.hxx>
#include <math/Matrix4d.h>
#include <vnx/Value.h>


namespace basic {

class Transform3D : public ::vnx::Value {
public:
	
	::int64_t time = 0;
	::math::Matrix4d matrix;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	
	static std::shared_ptr<Transform3D> create();
	std::shared_ptr<vnx::Value> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const Transform3D& _value);
	friend std::istream& operator>>(std::istream& _in, Transform3D& _value);
	
	static const vnx::TypeCode* get_type_code();
	static std::shared_ptr<vnx::TypeCode> create_type_code();
	
};


} // namespace basic

#endif // INCLUDE_basic_Transform3D_HXX_