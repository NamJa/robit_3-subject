#include <stdio.h>

int myStrLenCmp(const char * str1, const char * str2);

int main()
{
	char str1[] = "kim";
	char str2[] = "123";
	int res;

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	res = myStrLenCmp(str1, str2);

	if (res == -1)
		printf("\n str1�� ������ ������");
	else if (res == 1)
		printf("\n str2�� ������ ������ \n");
	else
		printf("\n����\n");
}

int myStrLenCmp(const char * str1, const char * str2)
{
	int i;

	if (str1[0] == str2[0])
	{
		for (i = 1; *(str1 + i) != '\0'; i++)
		{
			if (str1[i] < str2[i]) {
				return -1;
			}
			else if (str1[i] > str2[i]) {
				return 1;
			}
		}
	}
	else {
		if (str1[0] < str2[0]) {
			return -1;
		}
		else if (str1[0] > str2[0]) {
			return 1;
		}
	}


	return 0;
}
