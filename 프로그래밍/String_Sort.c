#include <stdio.h>
#include <string.h>

int main()
{
	char str[7][8] = { "seoul","daejeon","daegu", "kwangju","inchon","jeju","busan" }; //������ �迭 ����
	char temp[8];

	printf("=== �����ϱ� �� ===\n");
	for (int i = 0; i < 7; i++) {
		printf("%s  ", str[i]); // ���� �� ���ڿ� �迭 ���
	}
	printf("\n\n");

	for (int i = 0; i < 6; i++) {
		int index = i;  // ���� ���� ������ ��ġ�� �����ϴ�index �� i�� �ʱ�ȭ

		for (int j = i + 1; j < 7; j++) {
			if (strcmp(str[index], str[j]) > 0) {

				index = j;  // str[j]�� str[index]���� ������ index�� j�� ���� 
			}
		}
		strcpy(temp, str[i]);
		strcpy(str[i], str[index]);
		strcpy(str[index], temp);

	} // ���� ������ �̿��Ͽ� ���ڿ��� ������������ ����

	printf("=== ������ ���� ===\n");
	for (int i = 0; i < 7; i++) {
		printf("%s  ", str[i]); // ���� �� ���ڿ� �迭 ���
	}
	return 0;
}

