#include <stdio.h>

void maxmin(int array[], int *max,int *min);

int main(void)
{
	int i = 0,array[10],max,min;
	do {
		printf("%d �Ԗڂ̐��F",i + 1);
		scanf("%d",&array[i]);
		i++;
	}while (array[i - 1] != -1);
	
	maxmin(array,&max,&min);
	
	printf("�ő�l %d : �ŏ��l %d\n",max,min);
	
	return 0;
}

void maxmin(int array[],int *max,int *min)
{
	int i = 0;
	
	*max = 0;
	*min = 100;
	
	while(array[i] != -1){
		if(array[i] > *max) *max = array[i];
		if(array[i] < *min) *min = array[i];
		i++;
	}
}