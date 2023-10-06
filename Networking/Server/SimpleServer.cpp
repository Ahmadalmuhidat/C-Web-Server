#include "SimpleServer.hpp"

HDE::SimpleServer::SimpleServer(int domain, int service, int protocol, int port, u_long Interface, int backlog)
{
	socket = new ListeningSocket(domain, service, protocol, port, Interface, backlog);
}

HDE::ListeningSocket* HDE::SimpleServer::get_socket()
{
	return socket;
}