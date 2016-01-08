#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define SIZE 10
#define ESC 27

typedef struct student {
	int number;
	char name[10];
	char address[50];
	double grade;
}student;

typedef struct test {
	int number;
	char name[10];
	char address[50];
	double grade;
}test;

void printStudent(student *s,test *t);
void findStudent(student *s);
void addStudent(student *s, test *t);
void deleteStudent(student *s);
int bubble_number(student *s, test *t, int size);
int bubble_name(student *s, test *t, int size);
int bubble_address(student *s, test *t, int size);
double bubble_grade(student *s, test *t, int size);

int size_number = 10;
int size_name = 10;
int size_address = 10;
int size_grade = 10;
	student s[SIZE + 1] = { { 2015726002, "�迹��", "�����", 3.5 },{ 2015726001, "�Ա��", "����", 4.5 },
	{ 2015726003, "����", "��õ��", 3.4 },{ 2015726005, "�����", "â����", 2.5 },
	{ 2015726004, "���μ�", "�����", 4.3 } };

	test t[SIZE + 1] = { { 2015726002, "�迹��", "�����", 3.5 },{ 2015726001, "�Ա��", "����", 4.5 },
	{ 2015726003, "����", "��õ��", 3.4 },{ 2015726005, "�����", "â����", 2.5 },
	{ 2015726004, "���μ�", "�����", 4.3 } };
int main()
{

	int key = 0;

	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("						         �л�����   \n                          ");
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	puts("");
	puts("");
	printf("						         ��� ����\n");
	printf("\n	1. �л� ������ ���\n");
	printf("\n	2. �л� ã��\n");
	printf("\n	3. �л� �߰�\n");
	printf("\n	4. �л� ����\n");
	puts("");
	printf("����� �������ּ���(����): ");
	scanf("%d", &key);
	fflush(stdin);

	switch (key)
	{
	case 1:

		printStudent(s, t);

		Sleep(5000);
		main();
		break;
	case 2:

		findStudent(s);
		Sleep(5000);
		
		system("cls");
		main();
		break;
	case 3:

		addStudent(s, t);
		Sleep(5000);
		main();
		break;
	case 4:

		deleteStudent(s, t);
		Sleep(5000);
		main();
		break;
	case 27:
		return 0;
	default:
		printf("�� ����");
		break;
	}
}

void printStudent(student *s, test *t)
{
	int i;
	int key = 0;

	printf("\n------------1. �й���---------\n\n");
	printf("------------2. �̸���---------\n\n");
	printf("------------3. �ּҼ�---------\n\n");
	printf("------------4. ������---------\n\n");
	scanf("%d", &key);

	switch (key)
	{
	case 1:
		bubble_number(s, t, size_number);
		for (i = 0; i < SIZE; i++)
		{
			if (s[i].number == 0)
				continue;
			printf("\n �й�: %d  �̸�: %s  �ּ�: %s  ����: %0.1lf\n\n", s[i].number, s[i].name, s[i].address, s[i].grade);
		}
		break;
	case 2:
		bubble_name(s, t, size_name);
		for (i = 0; i < SIZE; i++)
		{
			if (s[i].number == 0)
				continue;
			printf("\n �й�: %d  �̸�: %s  �ּ�: %s  ����: %0.1lf\n\n", s[i].number, s[i].name, s[i].address, s[i].grade);
		}
		break;
	case 3:
		bubble_address(s, t, size_address);
		for (i = 0; i < SIZE; i++)
		{
			if (s[i].number == 0)
				continue;
			printf("\n �й�: %d  �̸�: %s  �ּ�: %s  ����: %0.1lf\n\n", s[i].number, s[i].name, s[i].address, s[i].grade);
		}
		break;
	case 4:
		bubble_grade(s, t, size_grade);
		for (i = 0; i < SIZE; i++)
		{
			if (s[i].number == 0)
				continue;
			printf("\n �й�: %d  �̸�: %s  �ּ�: %s  ����: %0.1lf\n\n", s[i].number, s[i].name, s[i].address, s[i].grade);
		}
	}

}

void findStudent(student *s)
{
	int studentNumber;
	double studentGrade;
	char studentaddress[50];
	int i;
	int key = 0;
	int res = 0;

	printf("				            ã���� �ϴ� Ű���� ���� \n");
	printf("\n	1. �й�\n");
	printf("\n	2. �ּ�\n");
	printf("\n	3. ����\n");
	scanf("%d", &key);

	switch (key)
	{
	case 1:
		printf("�й� �Է�: ");
		scanf("%d", &studentNumber);

		for (i = 0; i < SIZE; i++)
		{
			if (s[i].number == studentNumber)
			{
				printf("\n\n'%s' �Դϴ�\n\n", s[i].name);
				break;
			}
		}
		break;
	case 2:
		printf("�ּ� �Է�: ");
		scanf("\n%s", studentaddress);
		fflush(stdin);
		for (i = 0; i < SIZE; i++)
		{
			res = strstr(s[i].address, studentaddress);
			if (res == 0)
			{
				printf("\n\n'%s' �Դϴ�\n\n", s[i].name);
				break;
			}
		}
		break;
	case 3:
		printf("���� �Է�: ");
		scanf("%lf", &studentGrade);

		for (i = 0; i < SIZE; i++)
		{
			if (s[i].grade == studentGrade)
			{
				printf("\n\n'%s' �Դϴ�\n\n", s[i].name);
				break;
			}
		}
		break;
	default:
		return 0;
	}
}

void addStudent(student *s, test *t)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (s[i].number == 0)
		{
			printf("\n�й� �Է�: "); scanf("%d", &s[i].number);
			t[i].number = s[i].number;
			printf("\n�̸� �Է�: "); scanf("%s", s[i].name);
			strcpy(t[i].name, s[i].name);
			printf("\n�ּ� �Է�: "); scanf("%s", s[i].address);
			strcpy(t[i].address, s[i].address);
			printf("\n���� �Է�: "); scanf("%lf", &s[i].grade);
			t[i].grade = s[i].grade;
			break;
		}
	}
	printf("\n�л� ���\n\n");
	for (i = 0; i < SIZE; i++)
	{
		if (s[i].number == 0)
			continue;
		printf("\n �й�: %d  �̸�: %s  �ּ�: %s  ����: %0.1lf\n\n", s[i].number, s[i].name, s[i].address, s[i].grade);
	}
}

void deleteStudent(student *s, test *t)
{
	int i, j;

	printf("\n�й� �Է�: "); scanf("%d", &s[SIZE + 1].number);
	printf("\n�̸� �Է�: "); scanf("%s", s[SIZE + 1].name);
	printf("\n�ּ� �Է�: "); scanf("%s", s[SIZE + 1].address);
	printf("\n���� �Է�: "); scanf("%lf", &s[SIZE + 1].grade);

	for (i = 0; i < SIZE; i++)
	{
		if (s[i].number == s[SIZE + 1].number)
		{
			for (j = 0; j < SIZE; j++)
			{
				s[i + j].number = s[i + j + 1].number;;
				strcpy(s[i + j].name, s[i + j + 1].name);
				strcpy(s[i + j].address, s[i + j + 1].address);
				s[i + j].grade = s[i + j + 1].grade;
			}
		}
	}
	printStudent(s, t);
}

int bubble_number(student *s, test *t, int size_number)
{
	int i, j, temp = 0;

	for (i = 0; i < size_number - 1; i++)
	{
		for (j = 0; j < (size_number - i) -1  ; j++)
		{
			if (s[j].number > s[j + 1].number)
			{
				temp = s[j].number;
				s[j].number = s[j + 1].number;
				s[j + 1].number = temp;
			}
		}
	}
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (s[i].number == t[j].number)
			{
				strcpy(s[i].name, t[j].name);
				strcpy(s[i].address, t[j].address);
				s[i].grade = t[j].grade;
			}
		}
	}
}
int bubble_name(student *s, test *t, int size_name)
{
	char temp[20] = { 0, };
	int i, j;
	int n;

	for (i = 0; i < size_name - 1; i++)
	{
		for (j = 0; j < (size_name - i) - 1; j++)
		{
			if (strcmp(s[j].name, s[j + 1].name) == 1)
			{
				strcpy(temp, s[j].name);
				strcpy(s[j].name, s[j + 1].name);
				strcpy(s[j + 1].name, temp);
			}
		}
	}
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (strcmp(s[i].name, t[j].name) == 0)
			{
				s[i].number = t[j].number;
				strcpy(s[i].address, t[j].address);
				s[i].grade = t[j].grade;
			}
		}
	}
}

int bubble_address(student *s, test *t, int size_address)
{
	char temp[20] = { 0, };
	int i, j;

	for (i = 0; i < size_address - 1; i++)
	{
		for (j = 0; j < (size_address - i) - 1; j++)
		{
			if (strcmp(s[j].address, s[j + 1].address) == 1)
			{
				strcpy(temp, s[j].address);
				strcpy(s[j].address, s[j + 1].address);
				strcpy(s[j + 1].address, temp);
			}
		}
	}
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (strcmp(s[i].address, t[j].address) == 0)
			{
				s[i].number = t[j].number;
				strcpy(s[i].name, t[j].name);
				s[i].grade = t[j].grade;
			}
		}
	}
}

double bubble_grade(student *s, test *t, int size_grade)
{
	int i, j;
	double temp = 0.0;

	for (i = 0; i < size_address - 1; i++)
	{
		for (j = 0; j < (size_address - i) - 1; j++)
		{
			if (s[j].grade < s[j + 1].grade)
			{
				temp = s[j].grade;
				s[j].grade = s[j + 1].grade;
				s[j + 1].grade = temp;
			}
		}
	}
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (s[i].grade == t[j].grade)
			{
				s[i].number = t[j].number;
				strcpy(s[i].name, t[j].name);
				strcpy(s[i].address, t[j].address);
			}
		}
	}
}