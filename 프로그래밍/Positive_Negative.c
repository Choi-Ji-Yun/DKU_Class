#include <stdio.h>
int main()
{
	int a[10]; // �迭����
	int negative=0, positive=0, zero=0; // ����,���,0 �� ���� �ʱ�ȭ
	
	printf("10���� ���Ҹ� �Է��ϼ���:\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	} //�迭 �Է�

	for (int i = 0; i < 10; i++) {
		if (a[i] < 0) {
			negative++; // �迭�� ���� 0���� ������ �������� +1
		}
		else if (a[i] > 0) {
			positive++; // �迭�� ���� 0���� ũ�� ������� +1
		}
		else {
			zero++; // �迭�� ���� 0�̸� 0�ǰ��� +1
		}
	} 

	printf("�Էµ� �迭: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]); // �Էµ� �迭 ���
	}
	printf("\n");
	printf("���=%d��, ����=%d��, 0=%d��\n",positive, negative, zero); // ���, ����, 0�� ���� ���
	return 0;
}