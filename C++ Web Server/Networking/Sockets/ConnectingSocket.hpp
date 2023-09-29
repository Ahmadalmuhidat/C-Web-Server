#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace HDE
{
	class ConnectingSocket: public SimpleSocket
	{
	public:
		// constructor function
		ConnectingSocket(int domain, int service, int protocol, int port, u_long Interface);

		// start connection function
		int connect_to_network(int sock, struct sockaddr_in address) override;
	};
}

#endif