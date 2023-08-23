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

    //1 byte: 256 possible char values

// ASC11 encoding table https://www.asciitable.com/

    char character1 {'1'};
    char character2{'2'};
    char character3= '3';
    char character4= '4';

    char vaule = 65; //ASC11 represents 'A'

    std::cout << "value: " << vaule << std::endl;
    //this prints out the char value associated with  the ASC11 table
    std::cout << "value(int): " << static_cast<int>(vaule) << std::endl;

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;

    /*
    auto lets the compiler deduce the type

    */

   auto var1 {12};
   auto var2 {13.0};
   auto var3 {14.0f};
   auto var4 {15.0l};
   auto var5 {'e'};

   //int modifier suffices
   auto var6 {123u}; //unsigned
   auto var7 {123ul};//unsigned long
   auto var8 {123ll};//long long

   std::cout << "var1 occupies bytes: " << sizeof(var1) << std::endl;
   std::cout << "var2 occupies bytes: " << sizeof(var2) << std::endl;
   std::cout << "var3 occupies bytes: " << sizeof(var3) << std::endl;
   std::cout << "var4 occupies bytes: " << sizeof(var4) << std::endl;
   std::cout << "var5 occupies bytes: " << sizeof(var5) << std::endl;
   std::cout << "var6 occupies bytes: " << sizeof(var6) << std::endl;
   std::cout << "var7 occupies bytes: " << sizeof(var7) << std::endl;
   std::cout << "var8 occupies bytes: " << sizeof(var8) << std::endl;


    return 0;
}
