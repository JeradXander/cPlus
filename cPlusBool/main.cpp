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

    //bool take up 8 bits of memory



bool red_light {true};
bool green_light {false};
bool yellow_light = false;

//makes std print out true false instead of 0/1
std::cout << std::boolalpha;

if(red_light == true){
    std::cout << "Stop! "<< red_light << std::endl;

}else if(green_light== false){
    std::cout << "GO!!" << green_light << std::endl;
}else{
    std::cerr << "error occered" << std::endl;
};

std::cout << "size of bool: " << sizeof(bool) << std::endl;
    return 0;
}
