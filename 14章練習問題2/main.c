#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[256],lname[256];
	
	printf("��������͂��Ă�������:");
	scanf("%s",fname);
	
	printf("���O����͂��Ă�������:");
	scanf("%s",lname);
	
	strcat(fname,lname);
	printf("�t���l-���� %s\n",fname);
	
	return 0;
}