#include <stdio.h>
int NWD (int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
			
	}
	printf("NWD podanych liczb wynosi: %d", a );
}

int main()
{
	int a, b, temp;
	printf("Podaj liczbe a: \n");
	scanf("%d", &a);
	printf("Podaj liczbe b: \n");
	scanf("%d", &b);
	NWD(a,b);
	
	return 0;
}
