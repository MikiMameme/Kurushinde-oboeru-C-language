#include <stdio.h>

int main(void)
{
	FILE *fp;
	
	fp = fopen("test.csv","w");
	
	fprintf(fp,"�ԍ�,���O,�e�X�g�̕��ϓ_\n");
	fprintf(fp,"1,���̂ё�,0\n");
	fprintf(fp,"2,���Í�,90\n");
	fprintf(fp,"3,���c��,40\n");
	fprintf(fp,"4,����X�l�v,70\n");
	
	fclose(fp);
	
	return 0;
}