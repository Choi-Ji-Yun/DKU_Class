#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n, random;
	int min = 100, max = 1; // ���� min �� �ִ���, ���� max�� �ּڰ��� ����
	printf("�ϳ��� ���� �Է��ϼ���: "); 
	scanf_s("%d", &n); // �ϳ��� �� �Է�

	srand(time(NULL)); // ���带 �ð����� ����
	for (int i = 0; i < n; i++) {
		random = rand() % 100 + 1; // ���� ����
		printf("�������� ������ ��: %d\n", random); // ���� ���
		if (random > max) {
			max = random; // �߻��� ������ max�� ���� ũ�� max�� ���� �� ����
		}
		if (random < min) {
			min = random; // �߻��� ������ min�� ���� ������ min�� ���� �� ����
		}

	}
	printf("���� ū ��: %d\n", max); // ���� ū �� max ���
	printf("���� ���� ��: %d\n", min); // ���� ���� �� min ���
	return 0;
}