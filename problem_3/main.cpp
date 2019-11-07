/// Implement strlen function: count the length of a C-style string variable initialized with a string literal

#include <iostream>


size_t custom_strlen(const char* string)
{
    size_t length = 0;
    while (*string != '\0') {
        ++string;
        ++length;
    }
    return length;
}


int main()
{
    std::cout << custom_strlen("Hello World") << std::endl;

    /*
    std::string s;
    std::cin >> s;
    std::cout << custom_strlen(s.c_str()) << std::endl;
    */

    return 0;
}
