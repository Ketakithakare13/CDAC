#include <iostream>
using namespace std;

int main(){

	const int num = 10;
	const int *ptr = &num;
	printf("Pointer to a const value %d\n",*ptr);


	int num1 = 20;
	int *const ptr1 = &num1;
	printf("Const Pointer to a value %d\n",*ptr1);


	const int num2 = 30;
	const int *const ptr2 = &num2;
	printf("Const Pointer to a const value %d\n",*ptr2);
	return 0;

}
