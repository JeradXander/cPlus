#include <iostream>
#include<istream>
#include<string>
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

//Printing data
/*
std::cout << "Hello C++20" << std::endl;

int age{21};
std::cout << "Age: " << age<< std::endl;

//error message on terminal
std::cerr << "Error message: something is wrong" << std::endl;
//log message using clog
std::clog << "Log message: SOMETHING happened" << std::endl;

*/

/*
Data pulling 
int age1;
std::string name;

std::cout << "Please type your name and age : " << std::endl;


//std::cin >> name;
//std::cin >> age1;

//multiple pulds with cin
std::cin >> name >> age1;

std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
*/

int age3;
std::string full_name;

std::cout << "Please type your full name and age" << std::endl;

std::getline(std::cin,full_name);

std::cin >> age3;

std::cout << "Hello " << full_name << " you are " << age3 << " years old" << std::endl;

    return 0;
}
