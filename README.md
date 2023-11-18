# Simple C++ Web Server

## Overview
This project implements a simple web server in C++ capable of handling HTTP requests and serving static content.

## Features
- **HTTP Request Handling:** Processes incoming HTTP requests (GET, POST, etc.).
- **Static Content Serving:** Serves static files (HTML, CSS, JS, images, etc.) to clients.
- **Basic Routing:** Supports basic routing to different endpoints or URLs.
- **Multi-Threading (Optional):** Can be implemented with multi-threading to handle multiple requests concurrently.

## Usage
1. **Compilation:**
   - Compile the C++ source files using a C++ compiler (e.g., g++).

2. **Execution:**
   - Run the compiled executable to start the web server.

3. **Accessing the Server:**
   - Access the server through a web browser or HTTP client by navigating to `http://localhost:<port>`.

4. **Customization (Optional):**
   - Modify the source code to customize routing, add functionality, or change server configurations.

## Implementation Details
- **HTTP Protocol:** The server follows the HTTP protocol for request and response handling.
- **Socket Programming:** Uses socket programming to establish connections and handle data transmission.
- **File I/O:** Utilizes file I/O operations to read and serve static files requested by clients.
- **Threading (Optional):** Optionally employs threading for concurrent request handling.

## File Structure
- `server.cpp`: Contains the main implementation of the web server.
- Other necessary source files.

## Usage Notes
- Ensure proper firewall or network configurations to allow incoming connections to the server's designated port.
- Customize the server port, routing logic, or supported HTTP methods as needed in the source code.

## Dependencies
- Standard C++ libraries

## Contributors
- Ahmad Almuhidat

## Support
For any issues, suggestions, or inquiries, feel free to contact ahmada.almuhidat@gmail.com.
