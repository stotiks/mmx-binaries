
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_addons_MsgServerBase_HXX_
#define INCLUDE_vnx_addons_MsgServerBase_HXX_

#include <vnx/addons/package.hxx>
#include <vnx/addons/TcpServer.h>


namespace vnx {
namespace addons {

class VNX_ADDONS_EXPORT MsgServerBase : public ::vnx::addons::TcpServer {
public:
	
	int32_t compress_level = 0;
	uint32_t max_msg_size = 67108864;
	uint32_t max_list_size = 67108864;
	uint64_t max_write_queue = -1;
	
	typedef ::vnx::addons::TcpServer Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x869f9aab4c662096ull;
	
	MsgServerBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const MsgServerBase& _value);
	friend std::istream& operator>>(std::istream& _in, MsgServerBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	using Super::handle;
	
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};

template<typename T>
void MsgServerBase::accept_generic(T& _visitor) const {
	_visitor.template type_begin<MsgServerBase>(15);
	_visitor.type_field("port", 0); _visitor.accept(port);
	_visitor.type_field("host", 1); _visitor.accept(host);
	_visitor.type_field("max_connections", 2); _visitor.accept(max_connections);
	_visitor.type_field("listen_queue_size", 3); _visitor.accept(listen_queue_size);
	_visitor.type_field("stats_interval_ms", 4); _visitor.accept(stats_interval_ms);
	_visitor.type_field("connection_timeout_ms", 5); _visitor.accept(connection_timeout_ms);
	_visitor.type_field("send_buffer_size", 6); _visitor.accept(send_buffer_size);
	_visitor.type_field("receive_buffer_size", 7); _visitor.accept(receive_buffer_size);
	_visitor.type_field("tcp_no_delay", 8); _visitor.accept(tcp_no_delay);
	_visitor.type_field("tcp_keepalive", 9); _visitor.accept(tcp_keepalive);
	_visitor.type_field("show_warnings", 10); _visitor.accept(show_warnings);
	_visitor.type_field("compress_level", 11); _visitor.accept(compress_level);
	_visitor.type_field("max_msg_size", 12); _visitor.accept(max_msg_size);
	_visitor.type_field("max_list_size", 13); _visitor.accept(max_list_size);
	_visitor.type_field("max_write_queue", 14); _visitor.accept(max_write_queue);
	_visitor.template type_end<MsgServerBase>(15);
}


} // namespace vnx
} // namespace addons


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_addons_MsgServerBase_HXX_