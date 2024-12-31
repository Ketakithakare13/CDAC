#include <iostream>
using namespace std;

int main(){
	int num1=10;

//	int *ptr;
//
//	cout<<"The Value of wild pointer before initializing is "<<*ptr<<endl;
//

	int *ptr = &num1;
	printf("The Value of wild pointer after initializing is %d\n",*ptr);

	return 0;

}
