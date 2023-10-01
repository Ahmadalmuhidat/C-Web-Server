#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>

#pragma comment(lib, "Ws2_32.lib")

namespace HDE
{
	class SimpleSocket
	{
	public:
		// constructor function
		SimpleSocket(int domain, int service, int protocol, int port, u_long Interface);
		
		// test socket and network connection
		void test_connection(int);

		// virtual functions
		virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
		
		// getter functions
		struct sockaddr_in get_address();
		int get_sock();

	private:
		int sock;
		struct sockaddr_in address;
	};
}

#endif