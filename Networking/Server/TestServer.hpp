#ifndef Testerver_hpp
#define TestServer_hpp

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "SimpleServer.hpp"

namespace HDE
{
	class TestServer: SimpleServer
	{
	public:
		TestServer();
		void accepter();
		void handler();
		void responder();
		void lunch();

	private:
		ListeningSocket* socket;
		char buffer[30000] = { 0 };
		int new_socket;
	};
}

#endif
