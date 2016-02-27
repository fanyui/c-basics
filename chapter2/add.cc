//a programe to add two integers
//AUTHOR HARISU
#include <iostream> //preprocessor directive
using namespace std; //using directive to employ any name in the c++ standard library

int main()
{ //left curly brace
//variable declaration;
 int number1; //first integer 
	int number2; //second integer
	int sum;
 cout<<"enter first number"<< endl;//prompt user for first integer
 cin>>number1<<endl; //takes in first integer from the user
 cout<<"enter second number"<< endl;
 cin>>number2<<endl; //takes in second integer from the user
	if (number1==number2){
		cout<<"the sum is 2x"<<number1 "and is "<<2*number1<<endl;
		cout<<"the two numbers are equal"<<endl;
	}
 sum = number1 + number2; //carries out the addition
	cout<<"sum is "<<sum <<endl;//display the result

return 0;
}
