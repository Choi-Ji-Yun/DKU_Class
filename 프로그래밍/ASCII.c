#include <stdio.h>

int main(void)
{
   char ch1, ch2;

   printf("���ڸ� �Է��ϼ��� : ");
   scanf("%c", &ch1);
   getchar();
   scanf("%c", &ch2);
   printf("%c�� ASCII �ڵ� ���� %d�̰� %c�� ASCII �ڵ� ���� %d�Դϴ�.\n", ch1, ch1, ch2, ch2);

   printf("=====================================================");
   printf("\n");

   rewind(stdin); 

   printf("���ڸ� �Է��ϼ��� : ");
   scanf("%c", &ch1);
   getchar();
   scanf("%c", &ch2);
   printf("%c�� ASCII �ڵ� ���� %d�̰� %c�� ASCII �ڵ� ���� %d�Դϴ�.\n", ch1, ch1, ch2, ch2);

   return 0;

}