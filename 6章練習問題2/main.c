/* �艿����͂���Ɗ����̒l�i��\������v���O���� */
#include <stdio.h>

int main(void)
{
	int price;
	
	printf("�艿����͂��Ă�������:");
	scanf("%d", &price);
	
	printf("1���� = %d�~\n", (int) (price * 0.9));
	printf("3���� = %d�~\n", (int) (price * 0.7));
	
	return 0;
}