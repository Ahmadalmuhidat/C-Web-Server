#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include "BindingSocket.hpp"

namespace HDE
{
	class ListeningSocket : public BindingSocket
	{
	public:
		ListeningSocket(int domain, int service, int protocol, int port, u_long Interface, int backlog);
		void start_listening();

	private:
		int backlog;
		int listening;
	};
}

#endif
