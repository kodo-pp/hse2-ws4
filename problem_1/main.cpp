/// Create a program that gets the name of the user and then outputs
/// "Hello, <user>" where <user> is the name the user.

#include <iostream>
#include <string>


int main()
{
    std::string username;
    std::cin >> username;
    std::cout << "Hello, " << username << std::endl;
}
