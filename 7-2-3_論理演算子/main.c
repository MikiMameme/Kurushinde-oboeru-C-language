#include <stdio.h>

int main(void)
{
	int suuti;
	scanf("%d", &suuti);
	if (suuti >= 0 && suuti <= 10) printf("０〜１０の間です。\n");
	if (!(suuti >= 0 && suuti <=10))printf("０〜１０の間ではありません。\n");
	return 0;
}