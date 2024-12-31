#include <iostream>
using namespace std;

int main(){
	const int num = 10;
	const int *ptr = &num;

	int *ptr1 = (int *)ptr;
	*ptr1 = 20;
	printf("Value of num : %d\n", num);
	return 0;

}
