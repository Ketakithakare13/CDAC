#include <iostream>
using namespace std;

int main(){
	int num1=10;
	int num2=20;

	int* ptr = &num1;

	printf("The Value Of num1 variable is %d\n",num1);
	printf("The Value Of num1 pointer is  %d\n",*ptr);

	ptr=&num2;

	printf("The Value Of num2 pointer is  %d\n",*ptr);

	return 0;

}
