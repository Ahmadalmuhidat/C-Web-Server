#include "SimpleSocket.hpp"

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long Interface)
{
	// define address structure
	address.sin_family = domain;
	address.sin_family = AF_INET;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = htonl(Interface);

	// establish socket
	sock = socket(domain, service, protocol);
	test_connection(sock);
}

void HDE::SimpleSocket::test_connection(int item_To_test)
{
	if (item_To_test < 0)
	{
		perror("failed to connect...");
		exit(EXIT_FAILURE);
	}
}

struct sockaddr_in HDE::SimpleSocket::get_address()
{
	return address;
}

int HDE::SimpleSocket::get_sock()
{
	return sock;
}

int HDE::SimpleSocket::get_connection()
{
	return connection;
}

int HDE::SimpleSocket::set_connction(int new_connection)
{
	connection = new_connection;
	return connection;
}