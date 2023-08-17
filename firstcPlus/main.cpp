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
int addNumbers(int firstNum, int secondNum){
    int sum = firstNum + secondNum;

    return sum;

}
//entry point of c++ program
int main()
{
    int value =  20;
    int age;
    std::string name;
    std:: string full_name;

//single line output and input 
    std::cout << "Please type in your Last Name: " << std::endl;
    std::cin >> name;

//single line output and input 
    std::cout << "Please type in your Age: " << std::endl;
    std::cin >> age;
//single line output and input 
    std::cout << "Your last name is: " << name << std::endl;
    std::cout << "Your Age is: " << age << std::endl;


//chain input from spaces

std::cout << "Please type in your last name and age, seperated by spaces: " << std::endl;
std::cin >> name >> age; //input name and age seperated by space

std:: cout << "Hello " << name << "!" << "You are " << age << " years old " << std::endl;



//reading data data with spaces
std::cout << "Please enter your full name: " << std::endl;
std::cin.ignore(256,'/n');

std::getline (std::cin,full_name);
std::cout << "Thanks for inputing your full name: " << full_name << std::endl;
    //std::cout outputs 
    //std::clog
    std::cout << "Hello World!";
    std::cout << "Number 2" << std::endl;
    std::cout << "Number 3 =  " << value << std::endl;
    std::cout << "Number 4" << std::endl;

    int firstNumber = 12;
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;
    std::cout << "the sum of the two numbers is : " << sum << std::endl;


    sum = addNumbers(sum,secondNumber);

    std::cout << "the sum using the addNumbers function is :" << sum << std::endl;
 
    return 0;
}
