/* 三角形の面積を計算するプログラム */
#include <stdio.h>

int main(void)
{
	int base, height, area;
	
	scanf("%d, %d", &base, &height);
	area = base * height / 2;
	printf("%d\n", area);
	
	return 0;
}