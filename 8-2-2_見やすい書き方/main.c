#include <stdio.h>

int main(void)
{
	int age;
	printf("�N��");
	scanf("%d",&age);
	if (age <= 3) {
		printf("�c���F����\n");
	} else if (age <= 12) {
		printf("�q���F�Q�T�O�~\n");
	} else {
		printf("��l�F�S�O�O�~\n");
	}
	return 0;
}