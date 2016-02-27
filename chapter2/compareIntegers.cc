//comparing two integers
//author harisu
#include<iostream>
using namespace std;
int main(){ 
int number1,number2;
cout<<"please input two integers ";
cin>>number1>>number2<<endl;
if (number1>number2)
cout<<number1<<"is larger than "<<number2;
elseif (number1==number2)
cout<<"these numbers are equal";
else 
cout<<number2<<"is larger";
return 0;
}
