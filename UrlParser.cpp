#include <iostream>
#include <string>

/*
Fabian Hernandez-Angel
URL Parser Program

Micheal Landes CSCI 151 Fall
*/

int main(){
    // URL input
    std::cout << "Enter a full URL: ";
    std::string url;
    std::cin >> url;

    // Getting the scheme
    std::string scheme;

    // gets the first instance of the last character in a scheme
    int endPointOne = url.find(':') + 1;
    scheme = url.substr(0, endPointOne);

    // Getting the authority
    int endPointTwo = url.find('/', 8);
    std::string authority = url.substr(scheme.length(), endPointTwo - scheme.length());

    // Getting the path
    std::string path = url.substr(scheme.length() + authority.length(), url.length() - authority.length());

    std::cout << "Scheme:" << scheme << "\n";
    std::cout << "Authority:" << authority << "\n";
    std::cout << "Path:" << path;

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "URL Parser program by Fabian Hernandez-Angel \n";

    std::cout << "Hit enter after typing something when you're ready to close \n";
    char c;
    std::cin >> c;

    return 0;
}