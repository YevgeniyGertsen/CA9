//#include <stdio.h>
//#include <iostream>
//#include <locale.h>
//#include "MyFuncr.h"
//#include <time.h>
//using namespace std;
//short int nz;
//
//int i, j;
//
//void main(int args, char* argv[])
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, ".1251");
//
//	if (args != 0)
//	{
//		cout << endl;
//		for (int i = 0; i < args; i++)
//		{
//			cout << argv[i];
//		}
//		cout << endl;
//	}
//
//	while (true)
//	{
//		cout << "Введите номер задания ";
//		cin >> nz;
//		if (nz == 0)
//		{
//			break;
//			system("exit");
//		}
//		if (nz == 1)
//		{
//			/*1.	Получить все четырехзначные счастливые номера.Счастливым называется номер,
//				у которого сумма первых двух цифр номера равна сумме последних двух цифр.
//				Использовать функцию для расчета суммы цифр двухзначного числа*/
//			char mas[4];
//			int h;
//			cout << "Введите четырехзначное число "; cin >> mas;
//			//mas[5] = '\0';
//			h = happy(mas);
//			if (h == 1)
//				cout << "Это счастливое число\n";
//			else cout << "Данное число не счастливое\n";
//		}
//		else if (nz == 2)
//		{
//			/*2.	Отсортировать по убыванию заданный массив чисел, используя функцию сортировки.*/
//			int mas[10];
//			creat(mas, 10, 15, 50, positive);
//			//creat(mas, 10, 20, 80, negative);
//			print_arr(mas, 10);
//			sort(mas, 10);
//			cout << "Отсортированный массив\n";
//			print_arr(mas, 10);
//		}
//		else if (nz == 3)
//		{
//			/*3.	Отсортировать по возрастанию заданный массив чисел, исключив отрицательные
//				числа. Использовать функцию сортировки.*/
//			int mas[10];
//			creat(mas, 10, 20, 80, negative);
//			print_arr(mas, 10);
//			sort(mas, 10, 2);
//			cout << "Отсортированный массив\n";
//			for (i = 0; i < 10; i++)
//			{
//				if (mas[i] > 0)cout << mas[i] << "\t";
//			}
//			cout << endl;
//		}
//		else if (nz == 4)
//		{
//			/*4.	Задан одномерный массив из 16 элементов.Сформировать двухмерный массив 4×4,
//				используя функцию преобразования любого одномерного массива в двухмерный
//				массив размерностью n×n с добавлением нулевых элементов.*/
//			int mas[16], mas1[4][4];
//			creat(mas, 16, 10, 80, positive);
//			print_arr(mas, 16);
//			cout << endl << endl;
//			arr_d(mas, mas1, 16);
//			for (i = 0; i < 4; i++)
//			{
//				for (j = 0; j < 4; j++)
//				{
//					cout << mas1[i][j] << "\t";
//				}
//				cout << endl;
//			}
//		}
//		else if (nz == 5)
//		{
//			/*5.	С помощью функции random(n) сгенерировать 3 массива чисел от 0 до 50 и
//				определить сумму элементов каждого массива. Для определения суммы использовать
//				функцию(использовать метод не ограниченного количества оргуметов)*/
//			int mas[5], s;
//			creat(mas, 5, 0, 50, positive);
//			print_arr(mas, 5);
//			s = sum(5, *(mas), *(mas + 1), *(mas + 2), *(mas + 3), *(mas + 4));
//			cout << s << endl;
//		}
//
//		else if (nz == 6)
//		{
//			int m[10];
//			int n = 5;
//			creat(m, 10, 10, 90, positive);
//			print_arr(m, 10);
//			Smooth(m, 10, &n);
//		}
//		else if (nz == 7)
//		{
//			int m[4][4], col = 0, row = 0, max = 0, s = 0;
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					m[i][j] = 10 + rand() % 60;
//					cout << m[i][j] << "\t";
//				}
//				cout << endl;
//			}
//			sum_ind(m, 4, col, row, max);
//			cout << "col=" << col << endl;
//			cout << "row= " << row << endl;
//			cout << "max= " << max << endl;
//
//			cout << "Сумма индексов макс элемента: " << s << endl;
//		}
//		else if (nz == 8)
//		{
//			cout.precision(2);
//			double m[8][colCount], sr;
//			creatMatrix(m, 8, 10.0, 60, positive);
//			printMatrix(m, 8);
//
//			sr = sr_arif(m, 8);
//			cout << "среднее арифметическое элементов матрицы: " << sr << endl;
//
//		}
//		else if (nz == 9)
//		{
//			int m[4][5], b[colCount] = { 0 };
//			creatMatrix(m, 4, 10, 50, positive);
//			printMatrix(m, 4);
//
//			cout << endl;
//			twoInOne(m, 4, b);
//			print_arr(b, colCount);
//
//		}
//
//		//ДИНАМИЧЕСКИЕ МАССИВЫ
//		//1.	Дан двумерный массив целых чисел:
//		//a.	Сформировать одномерный массив, каждый элемент которого равен сумме четных 
//		//положительных элементов соответствующего столбца двумерного массива
//		else if (nz == 10)
//		{
//			//int *(m)[6];
//			int *m = NULL, *newM = NULL;
//			int coll, row, sum = 0;
//			printf("Введите кол-во столбцов: \n");
//			scanf("%d", &coll);
//			printf("Введите кол-во строк: \n");
//			scanf("%d", &row);
//			//typedef mm (int*)calloc((coll*row), sizeof(int));
//
//			m = (int*)calloc((coll*row), sizeof(int));//запросили у ОС сколько ячеек нам необходимо
//			newM = (int*)calloc((coll), sizeof(int));
//			if (m != NULL&&newM != NULL)
//			{
//				creatMatrix(m, row, coll);
//				printMatrix(m, row, coll);
//
//				for (j = 0; j < coll; j++)
//				{
//					for (i = 0; i < row; i++)
//					{
//						if (*(m + i*coll + j) % 2 == 0 && *(m + i*coll + j) > 0)
//							sum += *(m + i*coll + j);
//						else
//							sum = 0;
//					}
//					*newM = sum;
//					//printf("%d \n", *newM);
//					sum = 0;
//					newM++;
//				}
//
//				print_arr(newM-coll, coll);
//			}
//			else
//			{
//				printf("Error \n");
//				exit(EXIT_FAILURE);
//			}
//		}
//	}
//}
