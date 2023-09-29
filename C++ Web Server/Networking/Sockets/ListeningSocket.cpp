#include "ListeningSocket.hpp"

HDE::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long Interface, int backlog)
	: BindingSocket(domain, service, protocol, port, Interface)
{
	this->backlog = backlog;
	start_listening();
	test_connection(this->listening);
}

void HDE::ListeningSocket::start_listening()
{
	this->listening = listen(get_connection(), this->backlog);
}