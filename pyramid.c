#include <stdio.h>
int main() {
	int a, b = 1, c, i, j;
	printf("input: ");
	scanf("%d", &a);
	if(a>=1){
		for (i = 0; i < a; i++) {
			for (b = 1; b <= a - i; b++)
				printf("  ");
			for (j = 0; j <= i; j++) {
				if (j == 0 || i == 0)
					c = 1;
				else
					c = c * (i - j + 1) / j;
					printf("%4d", c);
			}
			printf("\n");
		}
	}
	else{
	    a = abs(a);
		for (i = 0; i < a; i++) {
			for (b = 0; b < i; b++)
				printf("  ");
			for (j = 0; j < a - i; j++) {
				if (j == 0 )
					c = 1;
				else
					c = c * (a - j - i) / j;
					printf("%4d", c);
			}
			printf("\n");
		}
	}
   return 0;
}
