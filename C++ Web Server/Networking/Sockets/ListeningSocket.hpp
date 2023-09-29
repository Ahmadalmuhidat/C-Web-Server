#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include<stdio.h>
#include "BindingSocket.hpp"

namespace HDE
{
	class ListeningSocket : public BindingSocket
	{
	public:
		// constructor function
		ListeningSocket(int domain, int service, int protocol, int port, u_long Interface, int backlog);
		// start listening
		void start_listening();

	private:
		int backlog;
		int listening;
	};
}

#endif
