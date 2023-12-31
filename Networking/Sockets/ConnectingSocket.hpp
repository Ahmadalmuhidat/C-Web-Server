#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include "SimpleSocket.hpp"

namespace HDE
{
	class ConnectingSocket: public SimpleSocket
	{
	public:
		ConnectingSocket(int domain, int service, int protocol, int port, u_long Interface);
		int connect_to_network(int sock, struct sockaddr_in address);
	};
}

#endif