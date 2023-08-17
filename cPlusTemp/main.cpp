#include <iostream>
#include<istream>
//comments

consteval int get_value(){
    return 3;
}

/*
multi-line 
comments
*/

//entry point of c++ program
int main()
{
std::string full_name;
std::cout << "Please enter your full name: " << std::endl;


std::getline (std::cin,full_name);
std::cout << "Thanks for inputing your full name: " << full_name << std::endl;

    return 0;
}
