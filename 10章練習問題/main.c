#include <stdio.h>

int main(void)
{
	
	int score = 0;
	
	do {
		if (score != 0) printf("“_”‚Í‚O`‚P‚O‚O‚Ì”ÍˆÍ‚Å“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
		scanf ("%d", &score);
	} while (score < 0 || score > 100);
	
	printf ("“ü—Í‚³‚ê‚½“_” %d\n", score);
	
	return 0;
	
}