
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ProxyInterface_CLIENT_HXX_
#define INCLUDE_vnx_ProxyInterface_CLIENT_HXX_

#include <vnx/Client.h>
#include <vnx/Hash64.hpp>
#include <vnx/Session.hxx>


namespace vnx {

class ProxyInterfaceClient : public vnx::Client {
public:
	ProxyInterfaceClient(const std::string& service_name);
	
	ProxyInterfaceClient(vnx::Hash64 service_addr);
	
	std::shared_ptr<const ::vnx::Session> login(const std::string& name = "", const std::string& password = "");
	
	void enable_import(const std::string& topic_name = "");
	
	void enable_import_async(const std::string& topic_name = "");
	
	void disable_import(const std::string& topic_name = "");
	
	void disable_import_async(const std::string& topic_name = "");
	
	void enable_export(const std::string& topic_name = "");
	
	void enable_export_async(const std::string& topic_name = "");
	
	void disable_export(const std::string& topic_name = "");
	
	void disable_export_async(const std::string& topic_name = "");
	
	void enable_forward(const std::string& service_name = "", const int32_t& max_queue_ms = 0, const int32_t& max_queue_size = 0);
	
	void enable_forward_async(const std::string& service_name = "", const int32_t& max_queue_ms = 0, const int32_t& max_queue_size = 0);
	
	void disable_forward(const std::string& service_name = "");
	
	void disable_forward_async(const std::string& service_name = "");
	
	void enable_tunnel(const ::vnx::Hash64& tunnel_addr = ::vnx::Hash64(), const int32_t& max_queue_ms = 0, const int32_t& max_queue_size = 0);
	
	void enable_tunnel_async(const ::vnx::Hash64& tunnel_addr = ::vnx::Hash64(), const int32_t& max_queue_ms = 0, const int32_t& max_queue_size = 0);
	
	void disable_tunnel(const ::vnx::Hash64& tunnel_addr = ::vnx::Hash64());
	
	void disable_tunnel_async(const ::vnx::Hash64& tunnel_addr = ::vnx::Hash64());
	
	std::shared_ptr<const ::vnx::Session> get_session();
	
	::vnx::Hash64 wait_on_connect();
	
	::vnx::Hash64 wait_on_disconnect();
	
	void on_connect();
	
	void on_connect_async();
	
	void on_disconnect();
	
	void on_disconnect_async();
	
	void on_remote_connect(const ::vnx::Hash64& process_id = ::vnx::Hash64());
	
	void on_remote_connect_async(const ::vnx::Hash64& process_id = ::vnx::Hash64());
	
	void on_login(const std::string& name = "", const std::string& password = "");
	
	void on_login_async(const std::string& name = "", const std::string& password = "");
	
	void on_remote_login(std::shared_ptr<const ::vnx::Session> remote_session = nullptr);
	
	void on_remote_login_async(std::shared_ptr<const ::vnx::Session> remote_session = nullptr);
	
};


} // namespace vnx

#endif // INCLUDE_vnx_ProxyInterface_CLIENT_HXX_