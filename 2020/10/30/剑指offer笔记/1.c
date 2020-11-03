#include <stdio.h>


int StrtoInt(char *string);

int main()
{
	printf("%d\n",StrtoInt("123"));
}


int StrtoInt(char *string)
{
	int num = 0;
    while(*string != 0)
    {
        num = num*10 + *string - '\0';
        ++string;
    }
    return num;
}


