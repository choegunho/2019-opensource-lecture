#include <stdio.h>

int main(void) {
	int arr[5] = { 11, 22, 33, 44 ,55};
	int *ptr1;
	int *ptr2;
	int *ptr3;

	ptr1 = arr;
	ptr2 = arr + 1;
	ptr3 = arr + 2;

	printf("%p\n", ptr1);
	printf("%p\n", ptr2);
	printf("%p\n", ptr3);

	return 0;
}
