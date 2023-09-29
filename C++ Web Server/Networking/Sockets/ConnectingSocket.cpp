#include "ConnectingSocket.hpp"

HDE::ConnectingSocket::ConnectingSocket(int domain, int service, int protocol, int port, u_long Interface)
	: SimpleSocket(domain, service, protocol, port, Interface)
{
	set_connction(connect_to_network(get_sock(), get_address()));
	test_connection(get_connection());
}

int HDE::ConnectingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
	return connect(sock, (struct sockaddr*)&address, sizeof(address));
}