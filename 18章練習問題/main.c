#include <stdio.h>

int olympic(int year);

enum {
	OLYMPIC_NON,
	OLYMPIC_SUMMER,
	OLYMPIC_WINTER,
};

int main(void)
{
	int year,hold;
	
	scanf("%d",&year);
	hold = olympic(year);
	
	switch(hold) {
	case OLYMPIC_NON:
		printf("ŠJ‚©‚ê‚È‚¢\n");
		break;
	case OLYMPIC_SUMMER:
		printf("‰Ä‹GŒÜ—Ö\n");
		break;
	case OLYMPIC_WINTER:
		printf("“~‹GŒÜ—Ö\n");
		break;
	};
	
	return 0;
}

int olympic(int year)
{
	if(year % 2 == 0){
		if(year % 4 == 0){
			return OLYMPIC_SUMMER;
		}else{
			return OLYMPIC_WINTER;
		}
	}else{
		return OLYMPIC_NON;
	}
	
}