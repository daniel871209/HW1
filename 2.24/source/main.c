#include <stdio.h>
#include <stdlib.h>

int main(void)

{   int a1,a2;
	printf("請輸入一個整數:");
	scanf_s("%d", &a1);
	a2=a1 % 2;
	if (a2 == 0)
		printf("%d是偶數\n", a1);
	if (a2 == 1)
		printf("%d是奇數\n", a1);

	system("pause");
	return 0;
		
}