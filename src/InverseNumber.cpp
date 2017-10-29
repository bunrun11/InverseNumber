//============================================================================
// Name        : InverseNumber.cpp
// Author      : Job
// Date        : 10/29/2017
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void InverseRecursivePrint(int);

int main() {

	int num;
	cout<<"Enter a number: ";
	cin>>num;
	InverseRecursivePrint(num);

	return 0;
}

//prints a number backwards to the console
void InverseRecursivePrint(int number){
	if(number > 0){
		cout<<(number%10);
		InverseRecursivePrint(number/10);
	}
}
