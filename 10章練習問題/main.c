#include <stdio.h>

int main(void)
{
	
	int score = 0;
	
	do {
		if (score != 0) printf("点数は０〜１００の範囲で入力してください。\n");
		printf ("点数を入力してください");
		scanf ("%d", &score);
	} while (score < 0 || score > 100);
	
	printf ("入力された点数 %d\n", score);
	
	return 0;
	
}