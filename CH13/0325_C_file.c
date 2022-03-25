#include <stdio.h>

void Func(const char* msg)
{
	printf("%s \n", msg);
	printf("C Func() 함수 호출 됨 \n");
}

char* getName()
{
	static char name[20] = "park dong hyeok";
		return name;
}