#ifndef Testerver_hpp
#define TestServer_hpp

#include "SimpleServer.hpp"

#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <process.h>
#include <stdio.h>
#include <stdlib.h>

namespace HDE
{
	class TestServer: SimpleServer
	{
	public:
		TestServer();
		void lunch();

	private:
		ListeningSocket* socket;
		char buffer[30000] = { 0 };
		int new_socket;
		void accepter();
		void handler();
		void responder();
		
	};
}

#endif