#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int lotto[6];
	srand(time(NULL));

	printf("** �ζ� ��÷�� �����մϴ�. **\n\n");
	printf("��÷�� �ζ� ��ȣ ==> ");

	for (int i = 0; i < 6; i++) {
		lotto[i] = rand() % 45 + 1; // 1~45 ������ �����Ͽ� �迭�� ����

		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--; // ������ ������ ������ ����� ������ �ߺ��� ��� �ݺ� �ǵ���.
			}
		}

	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto[i]); // �迭�� ����� ���� ���
	}
	return 0;
}