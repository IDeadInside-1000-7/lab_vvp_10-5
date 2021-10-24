#include <stdio.h>
int main()
{
	int num;
	printf("Enter four-digit number: ");
	scanf("%i", &num);
	if ((num < 1000) || (num > 9999))
	{
		printf("You should enter three-digit number!!!");
	}
	else
	{
		int n1, n2, n3, n4;
		n1 = num / 1000;
		n2 = num % 1000;
		n2 = n2 / 100;
		n3 = num % 100;
		n3 = n3 / 10;
		n4 = num % 10;
		if ((n1 == n4) && (n2 == n3))
			printf("True");
		else
			printf("False");
	}

}