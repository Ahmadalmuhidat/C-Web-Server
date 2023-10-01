#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
	class BindingSocket: public SimpleSocket
	{
	public:
		// constructor function
		BindingSocket(int domain, int service, int protocol, int port, u_long Interface);
		
		// start connection function
		int connect_to_network(int sock, struct sockaddr_in address);

		// getters
		int get_binding();

	private:
		int binding;
	};
}

#endif