#include <stdio.h>

void my_strncpy(char * str2, char * str1);

int main()
{
	char str[50] = "����������";
	char cpystr[50] = { 0, };

	printf("�Լ� ȣ�� ��... \n");
	printf("ori : %s \n", str);
	printf("cpyori : %s \n", cpystr);

	my_strncpy(cpystr, str);

	printf("\n�Լ� ȣ�� ��...\n");
	printf("ori : %s \n", str);
	printf("cpyori : %s \n", cpystr);

	return 0;
}

void my_strncpy(char * str2, char * str1)
{
	int i;

	for (i = 0;*(str1 + i) != '\0'; i++)
	{
		*(str2 + i) = *(str1 + i);
	}
	return *str2;
}