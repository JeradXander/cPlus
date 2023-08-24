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

int number1 = 3;
int number2 = 4;
    //Operators

    //addition
    int sum {number1 + number2};
    //subtaction 
    int sub {number1 - number2};
    //multiplication
    int mult {number1 * number2};
    //division 
    int div {number1 / number2};
    // modulos the left over of division
    int modulos {number1 % number2};

std::cout << "the sum of num1 and num2 is: " << sum << std::endl;
std::cout << "the sub of num1 and num2 is: " << sub << std::endl;
std::cout << "the div of num1 and num2 is: " << div << std::endl;
std::cout << "the mult of num1 and num2 is: " << mult << std::endl;
std::cout << "the moduls of num1 and num2 is: " << modulos << std::endl;


/*Presedence and Associativity

set of rules that we follow when we have multiple operators in the same expression

multiplation and divison must be done first

associative is which direction or which order
c++ precedence table https://en.cppreference.com/w/cpp/language/operator_precedence
*/

int a {6};
int b {3};
int c {8};
int d {9};
int e {3};
int f {2};
int g {5};

int result = a+b * c - d/e -f+g;
//gues 42

//() sets the inside parens first in presedent
int result2 = (a+b) * c - d/e -f+g;

std::cout << "result: " << result << std::endl;
std::cout << "result2: " << result2 << std::endl;

//post increment/decrement post increment conducts the increment after running
g++;
f--;

//prefix increment/decrement increments before it runs
++g;
--f;

//compound operators
int comp_operators {45};

std::cout << "the value os: " << comp_operators << std::endl;

comp_operators +=5; //value plus 5
std::cout << "the value is (after +=5): " << comp_operators << std::endl;

comp_operators -=5; //value minus 5
std::cout << "the value is (after -=5): " << comp_operators << std::endl;

comp_operators *=5; //value multiple 5
std::cout << "the value is (after *=5): " << comp_operators << std::endl;

comp_operators /=5; //value divide 5
std::cout << "the value is (after /=5): " << comp_operators << std::endl;

//RLATIONAL OPERATORS

int num1 {45};
int num2 {60};

std::cout << "number1 : " << num1 << std::endl;
std::cout << "number2 : " << num2 << std::endl;

//creating space
std::cout << std::endl;

//setting to true or false instead of 0 or 1
std::cout << std::boolalpha;
std::cout << "Comparing variable" <<std::endl;

//adding the relational operators in parenthesis makes sure they run befor the << because opf C++ presedence
std::cout << "num1 < num2 : " << (num1 < num2) << std::endl;
std::cout << "num1 > num2 : " << (num1 > num2) << std::endl;
std::cout << "num1 >= num2 : " << (num1 >= num2) << std::endl;
std::cout << "num1 <= num2 : " << (num1 <= num2) << std::endl;
//equal to 
std::cout << "num1 == num2 : " << (num1 == num2) << std::endl;
//not equal to 
std::cout << "num1 != num2 : " << (num1 != num2) << std::endl;

//logical operators

bool aBool {true};
bool bBool {false};
bool cBool {true};

std::cout << std::boolalpha;
std::cout << "a: " << aBool << std::endl;
std::cout << "b: " << bBool << std::endl;
std::cout << "c: " << cBool << std::endl;

//AND evalutes if all are true

std::cout << "Basic && AND operators: " << std::endl;
std::cout << "a && b " << (aBool &&bBool )<< std::endl;
std::cout << "a && c " << (aBool && cBool)<< std::endl;
std::cout << "a && b &&c " << (aBool && bBool && cBool)<< std::endl;

//OR || evalutes if all are true

std::cout << "Basic || OR operators: " << std::endl;
std::cout << "a || b " << (aBool || bBool )<< std::endl;
std::cout << "a || c " << (aBool || cBool)<< std::endl;
std::cout << "a || b  || c " << (aBool || bBool || cBool)<< std::endl;








    return 0;
}
