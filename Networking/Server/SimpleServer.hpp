#ifndef SimpleServer_hpp
#define SimpleServer_hpp

#include "../hdelibc-networking.hpp"

namespace HDE
{
	class SimpleServer
	{
	public:
		SimpleServer(int domain, int service, int protocol, int port, u_long Interface, int backlog);
		ListeningSocket* get_socket();
		virtual void accepter() = 0;
		virtual void handler() = 0;
		virtual void responder() = 0;
		virtual void lunch() = 0;

	private:
		ListeningSocket* socket;
	};
}

#endif
