#include <stdio.h>
int main(void)
{
	int no;
	scanf("%d", &no);
	switch (no) {
	case 1:
		printf("���̂ё�\n");
		break;
	case 2:
		printf("���Í�\n");
		break;
	case 3:
		printf("���c��\n");
		break;
	case 4:
		printf("����X�l�v\n");
		break;
	default:
		printf("����Ȕԍ��̐l�͂��Ȃ�\n");
		break;
	}
	return 0;
}