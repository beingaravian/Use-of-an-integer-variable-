#include <iostream>
using namespace std;
main(){
	
	int a , b ;      //int stands for integer wre can store any of number in int function 
	
	//input user
	cout<<"====================================================================\n";
	cout<<"In this program we will check addition , multiplication , division , square of two numbers :\n";
	cout<<"====================================================================\n";
	cout <<"Enter the two numbers below :"<<endl;
	cout <<"\nEnter the first number : ";
	cin>>a;
    cout <<"\nEnter the second number : ";
	cin>>b;
	
	int sum=a+b;
	int multiply =a*b;
	int divide=a/b;
	//Outputs
	//---------------------------------------------------------------
	cout <<"\nThe sum of "<< a <<" and " << b <<" is :"<<sum<<endl;
	cout <<"The mutiple of "<< a <<" and " << b <<" is :"<<multiply<<endl;
	cout <<"The division of "<< a <<" by " << b <<" is :"<<divide<<endl;
	cout <<"The square  of "<< a <<" is :"<<a*a<<endl;
	cout <<"The square of "<< b <<" is :"<<b*b<<endl;
    //----------------------------------------------------------------
    //Thanks for watching 
    //Termination
	return 0;
}
