#include <stdio.h>
int main() {
	int a=5, b=7, temp;
	printf("sebelum di temporary \n");
	printf("nilai a = %d \n", a);
	printf("nilai b = %d \n", b);
	temp = a;
	a = b;
	b = temp;
	printf("sesudah di temporary \n");
	printf("nilai a =  %d \n", a);
	printf("nilai b =  %d", b);
}