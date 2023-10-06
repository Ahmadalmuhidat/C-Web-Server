#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <iostream>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

namespace HDE
{
	class SimpleSocket
	{
	public:
		SimpleSocket(int domain, int service, int protocol, int port, u_long Interface);		
		virtual void test_connection(int);
		virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;		
		virtual struct sockaddr_in get_address();
		virtual int get_sock();

	private:
		int sock;
		struct sockaddr_in address;
	};
}

#endif