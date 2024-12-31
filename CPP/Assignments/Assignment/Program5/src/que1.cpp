#include <iostream>
using namespace std;

int main(){
	int a = 10, b = 20;

	    const int *ptr1 = &a;
	    int *const ptr2 = &a;
	    const int *const ptr3 = &a;

	    *ptr2 = 30;
	        printf("Value pointed by ptr2: %d\n", *ptr2);


	        printf("Value pointed by ptr3: %d\n", *ptr3);
	return 0;

}
