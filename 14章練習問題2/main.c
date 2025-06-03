#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[256],lname[256];
	
	printf("–¼Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s",fname);
	
	printf("–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s",lname);
	
	strcat(fname,lname);
	printf("ƒtƒ‹ƒl-ƒ€‚Í %s\n",fname);
	
	return 0;
}