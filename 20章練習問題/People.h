/* People.h */
#ifndef __PEOPLE_H__
#define __PEOPLE_H__

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[256];
	int age;
	int sex;
} People;

/* �l�f�[�^����͂��� */
extern void InputPeople(People *data);

/* �l�f�[�^��\������ */
extern void ShowPeople(People data);

#endif