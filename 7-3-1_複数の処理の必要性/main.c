#include <stdio.h>

int main(void)
{
	int score;
	printf("�_������͂��Ă��������B: ");
	scanf("2%d",&score);
	if (score > 100) score = 100;
	printf("�_���� %d �_�ł��B\n", score);
	return 0;
}