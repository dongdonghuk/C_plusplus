#include <stdio.h>

void Func(const char* msg)
{
	printf("%s \n", msg);
	printf("C Func() �Լ� ȣ�� �� \n");
}

char* getName()
{
	static char name[20] = "park dong hyeok";
		return name;
}