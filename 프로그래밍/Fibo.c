#include <stdio.h>

int fibonacci(int a)
{
	if (a == 0) {
		return 0;
	}
	else if (a == 1) {
		return 1;
	}
	else {
		return fibonacci(a - 1) + fibonacci(a - 2);
	}
}

int main()
{
	int i = 0,n;
	scanf_s("%d", &n);
	for (;;) {
		fibonacci(i);
		if (i+1==n) {
			break;
		}
		i++;
	}
	printf("%d", fibonacci(i+1)); //1�� ù��° �����϶�. 0�� ù��° �����϶� fibonacci(i)���

}