#include <stdio.h>

int main(void)
{
	
	int month;
	
	printf("������͂��Ă�������");
	scanf("%d", &month);
	
	switch(month) {
	case 1:
		printf("�r��\n");
		break;
	case 2:
		printf("�����炬\n");
		break;
	case 3:
		printf("�퐶\n");
		break;
	case 4:
		printf("�K��\n");
		break;
	case 5:
		printf("�H��\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("����\n");
		break;
	case 8:
		printf("�t��\n");
		break;
	case 9:
		printf("����\n");
		break;
	case 10:
		printf("�_����\n");
		break;
	case 11:
		printf("����\n");
		break;
	case 12:
		printf("�t��\n");
		break;
	default:
		printf("����Ȍ��͂���܂���B\n");
		break;
	}
	
	return 0;
}