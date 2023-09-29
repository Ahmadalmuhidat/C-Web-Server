#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <winsock2.h>
#include <windows.h>

namespace HDE
{
	class SimpleSocket
	{
	public:
		// constructor function
		SimpleSocket(int domain, int service, int protocol, int port, u_long Interface);
		
		// test socket and network connection
		virtual void test_connection(int);

		// virtual functions
		virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
		
		// getter functions
		struct sockaddr_in get_address();
		virtual int get_sock();
		virtual int get_connection();

		// setter functions
		virtual int set_connction(int new_connection);

	private:
		int sock;
		int connection;
		struct sockaddr_in address;
	};
}

#endif