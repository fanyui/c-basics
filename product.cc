//a programe to calculate the product of three integers
//AUTHOR HARISU
#include <iostream> //preprocessor directives
//using namespace std;
int main()
{//left curly brace
//variable declaration
int x;
int y;
int z;
int result;//declares the variable result to store the answer
	std::cout<<"please enter three integers ";//prompt the user for three intergers
	std::cin>>x>>y>>z;//scans in three integers from the keyboard
	result=x*y*z;//calculate the product
	std::cout<<"the product is "<<result<<std::endl;// display the result to the monitor
return 0;
}//right curly brace

