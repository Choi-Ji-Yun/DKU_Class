#include <stdio.h>
int main()
{
	char text[100];
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets(text); // �迭�� ���ڿ� �Է�

	for (int i = 0; text[i] ; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = text[i] - 32; // �ƽ�Ű�ڵ� ���� �̿��� �ҹ��ڸ� �빮�ڷ� ��ȯ
		}
	} // ���ڿ��� ���� ������ �ݺ�

	printf("�빮�� ���: %s",text) // ��ȯ�� ���ڿ� ���
	return 0;

}