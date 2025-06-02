#include <stdio.h>

int main(void)
{
	int age;
	printf("”N—î");
	scanf("%d",&age);
	if (age <= 3) {
		printf("—cŽ™F–³—¿\n");
	} else if (age <= 12) {
		printf("Žq‹ŸF‚Q‚T‚O‰~\n");
	} else {
		printf("‘ålF‚S‚O‚O‰~\n");
	}
	return 0;
}