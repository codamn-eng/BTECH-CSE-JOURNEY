#include <iostream>
using namespace std;

int main(){
//Pointer -----> Holds address of other data types	
	int x=8;
    int* ptr=&x;
	//* ------>Dereference operator
	
	//& ------>(Address of) operator    
    
	cout<<"The address of x is "<<ptr<<endl;
	cout<<"the value of x is "<<*ptr<<endl;
	//* -----> (Value at) operator
	
	//Pointer to pointer 
	int** ptop=&ptr;
	cout<<"The address of *ptr is "<<ptop<<endl;
	cout<<"The value of *ptr is "<<**ptop; 
	return 0;
	}
	

