
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_terminal_event_e_HXX_
#define INCLUDE_vnx_terminal_event_e_HXX_

#include <vnx/Type.h>
#include <vnx/package.hxx>


namespace vnx {

struct VNX_EXPORT terminal_event_e {
	
	enum enum_t : uint32_t {
		KEY_ARROWDOWN = 119472263l,
		KEY_ARROWLEFT = 1701149083l,
		KEY_ARROWRIGHT = 29208993l,
		KEY_ARROWUP = 1010595927l,
		KEY_BACKSPACE = 4017267153l,
		KEY_CR = 1737651535l,
		KEY_DEL = 1927793921l,
		KEY_END = 4000818268l,
		KEY_LF = 3884396404l,
		KEY_POS1 = 1312647358l,
		KEY_TAB = 1321317380l,
	};
	
	::vnx::terminal_event_e::enum_t value = ::vnx::terminal_event_e::enum_t(0);
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x13b5a20b72babf0dull;
	
	terminal_event_e() {}
	
	terminal_event_e(const enum_t& _value) { value = _value; }
	terminal_event_e(const ::vnx::terminal_event_e& _other) { value = _other.value; }
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	operator enum_t() const { return value; }
	terminal_event_e& operator=(const enum_t& _value) { value = _value; return *this; }
	terminal_event_e& operator=(const ::vnx::terminal_event_e& _other) { value = _other.value; return *this; }
	
	static std::shared_ptr<terminal_event_e> create();
	std::shared_ptr<terminal_event_e> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::bool_t is_valid() const;
	std::string to_string() const;
	std::string to_string_value() const;
	std::string to_string_value_full() const;
	
	void from_string(const std::string& str);
	void from_string_value(const std::string& name);
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const terminal_event_e& _value);
	friend std::istream& operator>>(std::istream& _in, terminal_event_e& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void terminal_event_e::accept_generic(T& _visitor) const {
	_visitor.template type_begin<terminal_event_e>(1);
	_visitor.type_field("value", 0); _visitor.accept(value);
	_visitor.template type_end<terminal_event_e>(1);
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::terminal_event_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::vnx::terminal_event_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

template<>
std::string to_string(const ::vnx::terminal_event_e& _value); ///< \private

template<>
std::string to_string_value(const ::vnx::terminal_event_e& _value); ///< \private

template<>
std::string to_string_value_full(const ::vnx::terminal_event_e& _value); ///< \private

template<>
std::string to_string(const ::vnx::terminal_event_e::enum_t& _value); ///< \private

template<>
std::string to_string_value(const ::vnx::terminal_event_e::enum_t& _value); ///< \private

template<>
std::string to_string_value_full(const ::vnx::terminal_event_e::enum_t& _value); ///< \private

template<>
struct is_equivalent<::vnx::terminal_event_e> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_vnx_terminal_event_e_HXX_