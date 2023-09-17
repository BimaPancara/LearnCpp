#include <iostream>
#include <string>
int main()
{   
    // Ask for nickname and use it
    std::string nickName;
    std::cout << "Input your nickname : ";
    std::cin >> nickName;
    std::cout << "Hi, " << nickName << " It is good to meet you\n";

    // Ask for fullname and use it
    std::string fullName;
    std::cout << "Input Your fullname : ";
    std::getline(std::cin >> std::ws, fullName); // getline is use since full name need whitespace
    std::cout << "Hello, " << fullName << ", It is a pleasure to meet you.\n";

    return 0;
}