#include <stdio.h>

int olympic(int year); /* �v���g�^�C�v�錾 */

int main(void)
{
	int year, hold;
	
	scanf("%d", &year);
	hold = olympic(year);
	
	switch(hold) {
	case 0:
		printf("�J����Ȃ�\n");
		break;
	case 1:
		printf("�ċG�ܗ�\n");
		break;
	case 2:
		printf("�~�G�ܗ�\n");
		break;
	};
	
	return 0;
}

int olympic(int year)
{
	if (year % 2 == 0) {
		if (year % 4 == 0) {
			return 1;
		} else {
			return 2;
			
		}
	} else {
		return 0;
	}
	
}
