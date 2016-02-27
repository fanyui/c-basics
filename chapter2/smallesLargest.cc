//calculating the smallest and largest of five input numbers

#include <iostream>
using namespace std;
int main(){
int smallest,largest;
int numb1,numb2,numb3,numb4,numb5;
cout<<"please input 5 numbers "<<endl;
cin>>numb1>>numb2>>numb3>>numb4>>numb5<<endl;
//calculating for smallest;
	if (numb1<numb2)
		smallest=numb1;
	else smallest=numb2;
	if (numb3<smallest)
	smallest=numb3;
	if (numb4<smallest)
	smallest=numb4;
	if (numb5<smallest)
	smallest=numb5;
cout<<"the smallest of the numbers is "<<smallest<<endl;
//calculating for largest
	if (numb1>numb2)
		largest=numb1;
	else largest=numb2;
	if (numb3>largest)
	largest=numb3;
	if (numb4>largest)
	largest=numb4;
	if (numb5>largest)
	largest=numb5;
	cout<<"the largest of the numbers is "<<largest<<endl;
	return 0;

}
