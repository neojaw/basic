
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_basic_PACKAGE_HXX_
#define INCLUDE_basic_PACKAGE_HXX_

#include <vnx/Type.h>

#include <math/package.hxx>
#include <vnx/package.hxx>


namespace basic {


class DataPacket;
class Image16;
class Image32;
class Image8;
class ImageF16;
class ImageF32;
class ImageF64;
class ImageFrame;
class ImageFrame16;
class ImageFrame32;
class ImageFrame8;
class ImageFrameF16;
class ImageFrameF32;
class ImageFrameF64;
class MultiImageFrame;
class Scalar;
class Transform3D;
class Trigger;

} // namespace basic


namespace vnx {

void read(TypeInput& in, ::basic::DataPacket& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::Image16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::Image32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::Image8& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageF16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageF32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageF64& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageFrame32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::ImageFrameF64& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::Scalar& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::Transform3D& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::basic::Trigger& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::basic::DataPacket& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::Image16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::Image32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::Image8& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageF16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageF32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageF64& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageFrame32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::ImageFrameF64& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::Scalar& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::Transform3D& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::basic::Trigger& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void read(std::istream& in, ::basic::DataPacket& value); ///< \private
void read(std::istream& in, ::basic::Image16& value); ///< \private
void read(std::istream& in, ::basic::Image32& value); ///< \private
void read(std::istream& in, ::basic::Image8& value); ///< \private
void read(std::istream& in, ::basic::ImageF16& value); ///< \private
void read(std::istream& in, ::basic::ImageF32& value); ///< \private
void read(std::istream& in, ::basic::ImageF64& value); ///< \private
void read(std::istream& in, ::basic::ImageFrame& value); ///< \private
void read(std::istream& in, ::basic::ImageFrame16& value); ///< \private
void read(std::istream& in, ::basic::ImageFrame32& value); ///< \private
void read(std::istream& in, ::basic::ImageFrame8& value); ///< \private
void read(std::istream& in, ::basic::ImageFrameF16& value); ///< \private
void read(std::istream& in, ::basic::ImageFrameF32& value); ///< \private
void read(std::istream& in, ::basic::ImageFrameF64& value); ///< \private
void read(std::istream& in, ::basic::MultiImageFrame& value); ///< \private
void read(std::istream& in, ::basic::Scalar& value); ///< \private
void read(std::istream& in, ::basic::Transform3D& value); ///< \private
void read(std::istream& in, ::basic::Trigger& value); ///< \private

void write(std::ostream& out, const ::basic::DataPacket& value); ///< \private
void write(std::ostream& out, const ::basic::Image16& value); ///< \private
void write(std::ostream& out, const ::basic::Image32& value); ///< \private
void write(std::ostream& out, const ::basic::Image8& value); ///< \private
void write(std::ostream& out, const ::basic::ImageF16& value); ///< \private
void write(std::ostream& out, const ::basic::ImageF32& value); ///< \private
void write(std::ostream& out, const ::basic::ImageF64& value); ///< \private
void write(std::ostream& out, const ::basic::ImageFrame& value); ///< \private
void write(std::ostream& out, const ::basic::ImageFrame16& value); ///< \private
void write(std::ostream& out, const ::basic::ImageFrame32& value); ///< \private
void write(std::ostream& out, const ::basic::ImageFrame8& value); ///< \private
void write(std::ostream& out, const ::basic::ImageFrameF16& value); ///< \private
void write(std::ostream& out, const ::basic::ImageFrameF32& value); ///< \private
void write(std::ostream& out, const ::basic::ImageFrameF64& value); ///< \private
void write(std::ostream& out, const ::basic::MultiImageFrame& value); ///< \private
void write(std::ostream& out, const ::basic::Scalar& value); ///< \private
void write(std::ostream& out, const ::basic::Transform3D& value); ///< \private
void write(std::ostream& out, const ::basic::Trigger& value); ///< \private

void accept(Visitor& visitor, const ::basic::DataPacket& value); ///< \private
void accept(Visitor& visitor, const ::basic::Image16& value); ///< \private
void accept(Visitor& visitor, const ::basic::Image32& value); ///< \private
void accept(Visitor& visitor, const ::basic::Image8& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageF16& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageF32& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageF64& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageFrame& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageFrame16& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageFrame32& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageFrame8& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageFrameF16& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageFrameF32& value); ///< \private
void accept(Visitor& visitor, const ::basic::ImageFrameF64& value); ///< \private
void accept(Visitor& visitor, const ::basic::MultiImageFrame& value); ///< \private
void accept(Visitor& visitor, const ::basic::Scalar& value); ///< \private
void accept(Visitor& visitor, const ::basic::Transform3D& value); ///< \private
void accept(Visitor& visitor, const ::basic::Trigger& value); ///< \private

/// \private
template<>
struct type<::basic::DataPacket> {
	void read(TypeInput& in, ::basic::DataPacket& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::DataPacket& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::DataPacket& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::DataPacket& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::DataPacket& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::Image16> {
	void read(TypeInput& in, ::basic::Image16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::Image16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::Image16& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::Image16& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::Image16& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		const std::vector<int> tmp = {22, 3, 2};
		code.insert(code.end(), tmp.begin(), tmp.end());
	}
};

/// \private
template<>
struct type<::basic::Image32> {
	void read(TypeInput& in, ::basic::Image32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::Image32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::Image32& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::Image32& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::Image32& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		const std::vector<int> tmp = {22, 3, 3};
		code.insert(code.end(), tmp.begin(), tmp.end());
	}
};

/// \private
template<>
struct type<::basic::Image8> {
	void read(TypeInput& in, ::basic::Image8& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::Image8& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::Image8& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::Image8& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::Image8& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		const std::vector<int> tmp = {22, 3, 1};
		code.insert(code.end(), tmp.begin(), tmp.end());
	}
};

/// \private
template<>
struct type<::basic::ImageF16> {
	void read(TypeInput& in, ::basic::ImageF16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageF16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageF16& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageF16& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageF16& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		const std::vector<int> tmp = {22, 3, 6};
		code.insert(code.end(), tmp.begin(), tmp.end());
	}
};

/// \private
template<>
struct type<::basic::ImageF32> {
	void read(TypeInput& in, ::basic::ImageF32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageF32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageF32& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageF32& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageF32& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		const std::vector<int> tmp = {22, 3, 9};
		code.insert(code.end(), tmp.begin(), tmp.end());
	}
};

/// \private
template<>
struct type<::basic::ImageF64> {
	void read(TypeInput& in, ::basic::ImageF64& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageF64& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageF64& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageF64& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageF64& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		const std::vector<int> tmp = {22, 3, 10};
		code.insert(code.end(), tmp.begin(), tmp.end());
	}
};

/// \private
template<>
struct type<::basic::ImageFrame> {
	void read(TypeInput& in, ::basic::ImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageFrame& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageFrame& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageFrame& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::ImageFrame16> {
	void read(TypeInput& in, ::basic::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageFrame16& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageFrame16& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageFrame16& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::ImageFrame32> {
	void read(TypeInput& in, ::basic::ImageFrame32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageFrame32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageFrame32& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageFrame32& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageFrame32& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::ImageFrame8> {
	void read(TypeInput& in, ::basic::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageFrame8& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageFrame8& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageFrame8& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::ImageFrameF16> {
	void read(TypeInput& in, ::basic::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageFrameF16& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageFrameF16& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageFrameF16& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::ImageFrameF32> {
	void read(TypeInput& in, ::basic::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageFrameF32& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageFrameF32& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageFrameF32& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::ImageFrameF64> {
	void read(TypeInput& in, ::basic::ImageFrameF64& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::ImageFrameF64& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::ImageFrameF64& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::ImageFrameF64& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::ImageFrameF64& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::MultiImageFrame> {
	void read(TypeInput& in, ::basic::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::MultiImageFrame& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::MultiImageFrame& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::MultiImageFrame& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::Scalar> {
	void read(TypeInput& in, ::basic::Scalar& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::Scalar& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::Scalar& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::Scalar& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::Scalar& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::Transform3D> {
	void read(TypeInput& in, ::basic::Transform3D& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::Transform3D& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::Transform3D& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::Transform3D& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::Transform3D& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::basic::Trigger> {
	void read(TypeInput& in, ::basic::Trigger& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::basic::Trigger& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::basic::Trigger& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::basic::Trigger& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::basic::Trigger& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};


} // namespace vnx

#endif // INCLUDE_basic_PACKAGE_HXX_
