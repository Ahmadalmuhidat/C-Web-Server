
#include "Networking/hdelibc-networking.hpp"
#include "Networking/Server/TestServer.hpp"

int main()
{
    try
    {
        std::cout << "Starting...." << std::endl;

        std::cout << "Binding Socket" << std::endl;
        // HDE::BindingSocket bs = HDE::BindingSocket(AF_INET, SOCK_STREAM, 0, 81, INADDR_ANY);

        std::cout << "Listening Socket" << std::endl;
        // HDE::ListeningSocket ls = HDE::ListeningSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 80);

        HDE::TestServer t;
        t.lunch();

        std::cout << "it is working fine" << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
}
