#include <boost/asio.hpp>
#include <iostream>
#include <string>

using boost::asio::ip::tcp;

const std::string response =
    "HTTP/1.1 200 OK\r\n"
    "Content-Length: 13\r\n"
    "Content-Type: text/plain\r\n"
    "\r\n"
    "Hello, World!";

void handle_request(tcp::socket& socket) {
    boost::system::error_code ec;
    boost::asio::streambuf buffer;
    boost::asio::read_until(socket, buffer, "\r\n", ec);
    
    if (!ec) {
        boost::asio::write(socket, boost::asio::buffer(response), ec);
    }

    socket.shutdown(tcp::socket::shutdown_both, ec);
    socket.close(ec);
}

int main() {
    try {
        boost::asio::io_context io_context;
        tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 8080));

        std::cout << "Server started at http://127.0.0.1:8080" << std::endl;

        while (true) {
            tcp::socket socket(io_context);
            acceptor.accept(socket);
            handle_request(socket);
        }
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
