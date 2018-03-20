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
	printf("Введите номер задания: ");
	scanf("%d", &w);
	switch (w)
	{
	case 1:
	{
		//1.В одномерном массиве найти k - й максимальный элемент.
		//Предусмотреть случай, когда такого элемента не существует.
		int mas[10] = { 0 }, start = 20, end = 30, lenght = 10;
		creat(mas, lenght, start, end, positive);
		print_arr(mas, lenght);
		printf("Максимальный элемент = %d\n", MaxElement(mas, lenght));
	}
	break;
	case 2:
	{
		//2.Функция находит в строке символьные константы и заменяет 
		//их на десятичные коды, например, "aaa'6'xxx" на "aaa54xxx".
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
		//3.В одномерном массиве найти количество различных элементов
		int mas[10] = { 0 }, start = 10, end = 15, lenght = 10;
		creat(mas, lenght, start, end, positive);
		print_arr(mas, lenght);
		DifferentElements(mas, lenght);
	}
	break;
	case 4:
	{
		//4.Известно, что в массиве размерности N могут быть только целые числа из 
		//диапазона 1...31. Рассортировать эти числа по частоте встречаемости.
		int mas[20] = { 0 }, start = 1, end = 31, lenght = 20;
		creat(mas, lenght, start, end, positive);
		Meetings(mas, lenght);
	}
	break;

	case 5:
	{
		/*Функция находит в строке самое длинное слово и 
		возвращает указатель на него.

		С ее помощью реализовать размещение слов в
		выходной строке в порядке убывания их длины*/

		char str[] = "Функция находит в строке самое длинное слово";

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
		//11.	Напишите программу определения адресов целых чисел 
		//от 0 до 9 и строчных букв латинского алфавита
		char str[] = "0123456789ABCDEFG";
		for (int i = 0; i < strlen(str); i++)
		{
			printf("%c находится по адресу = %p\n", *(str+i), str+i);
		}
	}
	break;

	case 7:
	{
		/*10.	Функция находит в строке самое первое (по алфавиту)
		слово. С ее помощью реализовать размещение слов в 
		выходной строке в алфавитном порядке*/

		char str[] = "Функция находит в строке самое первое";
		SortByLetter(str);
	}
	}
}