//checking if a number is even or not
//author harisu

#include<iostream>
using namespace std;
int main(){
int check,result;
cout <<"input an integer to check if it is even or odd "<<endl;
cin>>check<<endl;
result=check%2;
if (result==0)
cout<<"the value "<<check <<"is and even number"<<endl;
else
cout <<"the value "<<check <<"is not and even number"<<endl;

return 0;
}
