#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <time.h>
#include "MyFuncr.h"
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int w;
	printf("������� ����� �������: ");
	scanf("%d", &w);
	switch (w)
	{
	case 1:
	{
		//1.� ���������� ������� ����� k - � ������������ �������.
		//������������� ������, ����� ������ �������� �� ����������.
		int mas[10] = { 0 }, start = 20, end = 30, lenght = 10;
		creat(mas, lenght, start, end, positive);
		print_arr(mas, lenght);
		printf("������������ ������� = %d\n", MaxElement(mas, lenght));
	}
	break;
	case 2:
	{
		//2.������� ������� � ������ ���������� ��������� � �������� 
		//�� �� ���������� ����, ��������, "aaa'6'xxx" �� "aaa54xxx".
		char R[20] = "aaa6xxx";
		int h[20];
		//for (int i = 1; i <= 255; i++)
		//	printf("%d - %c\n", i, i);
		for (int i = 0; i <= 20; i++)
			if ((int)*(R + i) >= 48 && (int)*(R + i) <= 57)
			{
				printf("%d - %c\n", *(R + i), *(R + i));
				//*(R + i) = (char)((int)*(R + i));
			}
		printf("%s\n", R);
	}
	break;
	case 3:
	{
		//3.� ���������� ������� ����� ���������� ��������� ���������
		int mas[10] = { 0 }, start = 10, end = 15, lenght = 10;
		creat(mas, lenght, start, end, positive);
		print_arr(mas, lenght);
		DifferentElements(mas, lenght);
	}
	break;
	case 4:
	{
		//4.��������, ��� � ������� ����������� N ����� ���� ������ ����� ����� �� 
		//��������� 1...31. �������������� ��� ����� �� ������� �������������.
		int mas[20] = { 0 }, start = 1, end = 31, lenght = 20;
		creat(mas, lenght, start, end, positive);
		Meetings(mas, lenght);
	}
	break;

	case 5:
	{
		/*������� ������� � ������ ����� ������� ����� � 
		���������� ��������� �� ����.

		� �� ������� ����������� ���������� ���� �
		�������� ������ � ������� �������� �� �����*/

		char str[] = "������� ������� � ������ ����� ������� �����";

		int max = 0;
		char * pt = GetMaxString(str, &max);
		if (pt != NULL)
		{
			for (int i = 0; i <= max; i++)
			{
				printf("%c", *(pt + i));
			}
			printf("\n");
		}
		

	}
	break;

	case 6:
	{
		//11.	�������� ��������� ����������� ������� ����� ����� 
		//�� 0 �� 9 � �������� ���� ���������� ��������
		char str[] = "0123456789ABCDEFG";
		for (int i = 0; i < strlen(str); i++)
		{
			printf("%c ��������� �� ������ = %p\n", *(str+i), str+i);
		}
	}
	break;

	case 7:
	{
		/*10.	������� ������� � ������ ����� ������ (�� ��������)
		�����. � �� ������� ����������� ���������� ���� � 
		�������� ������ � ���������� �������*/

		char str[] = "������� ������� � ������ ����� ������";
		SortByLetter(str);
	}
	}
}