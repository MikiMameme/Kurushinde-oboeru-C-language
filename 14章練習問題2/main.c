#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[256],lname[256];
	
	printf("名字を入力してください:");
	scanf("%s",fname);
	
	printf("名前を入力してください:");
	scanf("%s",lname);
	
	strcat(fname,lname);
	printf("フルネ-ムは %s\n",fname);
	
	return 0;
}