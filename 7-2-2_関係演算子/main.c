#include <stdio.h>

int main(void)
{
	int suuti;
	scanf("%d", &suuti);
	if(suuti == 10) printf("入力値は　１０　です。\n");
	if(suuti > 10) printf("入力値は　１０　より大きいです。\n");
	if(suuti < 10) printf("入力値は　１０　より小さいです。\n");
	return 0;
}