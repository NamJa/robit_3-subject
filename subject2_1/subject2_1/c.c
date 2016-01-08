#include <stdio.h>

int myStrLenCmp(const char * str1, const char * str2);
int myStrLen(char *str);

int main()
{
	char str1[] = "sadfasdf";
	char str2[] = "sadsdfsfddd";
	int res;

	printf("%s\n\n", str1);
	printf("%s\n\n", str2);

	res = myStrLenCmp(str1, str2);

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	if (res == 0)
		printf("\n 같다!!!");
	else if (res == -1)
		printf("\nstr1이 더 길다 \n");
	else if (res == 1)
		printf("\nstr2가 더 길다 \n");

	return 0;
}

int myStrLenCmp(const char * str1, const char * str2)
{
	int i;
	int str_1 = 0;
	int str_2 = 0;

	str_1 = myStrLen(str1);
	str_2 = myStrLen(str2);

	if (str_1 > str_2)
		return -1;
	else if (str_1 < str_2)
		return 1;
	else 
		return 0;
}

int myStrLen(char *str)
{
	int i, cnt = 0;
	int *size;
	size = &cnt;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		cnt = i;
	}
	return *size = cnt + 1;
}