#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;
	printf("8������ 16������ ������� �Է��ϼ��� :  ");
	scanf_s("%o" "%x", &x, &y);
	printf("\n%o(8) + %x(16) = %d(10)\n", x, y, x + y);

	system("pause");
	return 0;
}