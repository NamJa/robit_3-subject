#include <stdio.h>
int myStrEqual(const char * str1, const char * str2);
int myStrLen(char *str);

int main()
{
	char str1[] = "abc";
	char str2[] = "drh";
	int res;

	res = myStrEqual(str1, str2);

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	if (res == 0)
		printf("\n 불일치\n\n");
	else if (res == 1)
		printf("\n 일치 \n\n");
}

int myStrEqual(char * str1, char * str2)
{
	int i;
	int cnt1 = 0, cnt2 = 0;

	cnt1 = myStrLen(str1);
	cnt2 = myStrLen(str2);

	if (cnt1 > cnt2)
	{
		return 0;
	}
	else if (cnt1 < cnt2)
	{
		return 0;
	}
	else if (cnt1 == cnt2) 
	{
		for (i = 0; i < cnt1; i++)  //같으므로 아무거나 할당
		{
			if (str1[i] != str2[i]) {
				return 0;
			}
		}
		return 1;
	}
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
