#include <stdio.h>

int main(void)
{
	
	int score = 0;
	
	do {
		if (score != 0) printf("�_���͂O�`�P�O�O�͈̔͂œ��͂��Ă��������B\n");
		scanf ("%d", &score);
	} while (score < 0 || score > 100);
	
	printf ("���͂��ꂽ�_�� %d\n", score);
	
	return 0;
	
}