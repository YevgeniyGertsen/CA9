#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <stdarg.h>

using namespace std;


unsigned i, j;

enum type_number { positive, negative, all };

int happy(char* arr)
{
	int f, s;
	f = (int)arr[0] + (int)arr[1];
	s = (int)arr[2] + (int)arr[3];
	if (f == s)
		return 1;
	else return 0;
}

void sort_u(int*arr, int j)
{
	int prom;
	if (arr[j] > arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}
}

void sort_d(int*arr, int j)
{
	int prom;
	if (arr[j] < arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}
}

void sort(int*arr, int r, int n)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < r - 1; j++)
		{
			if (n == 1)
				sort_u(arr, j);
			else
				sort_d(arr, j);
		}
	}
}

int numb(type_number tn, int start, int end)
{
	switch (tn)
	{
	case positive:
		return start + rand() % end;
		break;
	case negative:
		return start*(-1) + rand() % end;
		break;
	case all:
		return rand();
		break;
	}
}
double numb(type_number tn, double start, int end)
{
	switch (tn)
	{
	case positive:
		return (start + rand() % end) / (start + rand() % end);
		break;
	case negative:
		return (start*(-1) + rand() % end) / (start*(-1) + rand() % end);
		break;
	case all:
		return rand();
		break;
	}
}
void creat(int*arr, int r, int start, int end, type_number tn)
{
	for (i = 0; i < r; i++)
		arr[i] = numb(tn, start, end);
}
#define colCount 5
void creatMatrix(int(*a)[colCount], int r, int start, int end, type_number tn)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			a[i][j] = numb(tn, start, end);
		}
	}
}

void creatMatrix(int*a, int row, int coll)
{
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < coll; j++)
		{
			*(a + i*coll + j) = 1 + rand() % 100;//��������� ��������� 2-������� �������

		}
	}
}

void creatMatrix(double(*a)[colCount], int r, double start, int end, type_number tn)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			a[i][j] = round(numb(tn, start, end) * 100) / 100;
			/*round(a[i][j] = numb(tn, start, end));*/
		}
	}
}


void print_arr(int*arr, int r)
{
	for (i = 0; i < r; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void print_arr(float*arr, int r)
{
	for (i = 0; i < r; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void printMatrix(double(*a)[colCount], int r)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void printMatrix(int(*a)[colCount], int r)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}


void printMatrix(int*a, int row, int coll)
{
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < coll; j++)
		{
			printf("%d\t", *(a + i*coll + j));//��������� ��������� 2-������� �������

		}
		printf("\n");
	}
}
void arr_d(int*arr, int arr1[][4], int r)
{
	int m = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			//*(*(arr1+i)+j) = *(arr+m);
			arr1[i][j] = arr[m];
			m++;
		}
	}
}

int sum(int num, ...)
{
	int arr = 0;
	va_list r;
	va_start(r, num);
	for (; num; num--)
	{
		arr += va_arg(r, int);
	}
	va_end(r);
	return arr;
}
//2.	������� ��������� Smooth(A,N), ���������� ������ ������� ������������� 
//������� A ������� N �� ��� ������� �������������� �� ������ ��������
//("����������� �������"). ������ A � ������� � �������� ��������,
//N � ������� ��������. � ������� ���� ��������� ��������� ����������� 
//����������� ������� ������� A ������� N, ������ �� ����� ���������� ������� �����������.

void Smooth(int *a, int r, const int *k)
{
	for (int l = 0; l < *k; l++)
	{
		a++; //����������� ���-�� ���
		for (j = 1; j < r - 1; j++)
		{
			/*a[j] = (a[j - 1] + a[j] + a[j + 1]) / 3;*/

			*a = (*(a - 1) + *a + *(a + 1)) / 3;
			a++;
		}
		a = a - 9;
		print_arr(a, r);
	}
}


int sum_ind(int(*a)[4], int r, int &col, int &row, int &max) //������� ���������� ����� 1 ��������
{
	int s;
	max = *(*a);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				col = j;
				row = i;
				s = i + j;
			}
		}
	}
	return s;
}

double sr_arif(double(*a)[colCount], int r)
{
	float s = 0, sr;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			s += a[i][j];
			//s += *(*a);
			//a++;
		}
	}
	return round((s / (colCount * r)) * 100) / 100;
}

void twoInOne(int(*a)[colCount], int r, int *b)
{
	for (int j = 0; j < colCount; j++)
	{
		for (int i = 0; i < r; i++)
		{
			b[j] += a[i][j];
		}
	}
}
int hFill(float* arr, int *r)
{
	/*cout << "������� ������ ������� ";
	cin >> *r;
	arr = (float*)calloc(*r, sizeof(float));*/

	if (arr != NULL)
	{
		for (int i = 0;i < *r;i++)
		{
			/*scanf("%lf", *m);*/
			//printf("%d", i);
			cin >> *arr;
			arr++;
		}
		arr = arr - *r;
		print_arr(arr, *r);
		return 0;
	}
	else
		return 1;

}
int hFill(int* arr, int *r)
{

	if (arr != NULL)
	{
		for (int i = 0;i < *r;i++)
		{
			cin >> *arr;
			arr++;
		}
		arr = arr - *r;
		print_arr(arr, *r);
		return 0;
	}
	else
		return 1;
}

int copyS(char *arr, char *arr1, int r)
{
	//if (r > strlen(arr))
	//{
	//	r = strlen(arr);
	//	strcpy(arr1, arr);
	//	//arr = arr1;
	//}
	//else
	/*{*/
	for (int i = 0;i < r;i++)
	{
		*arr1 = *arr;
		arr++;
		arr1++;
	}
	*arr = '\0';
	/*}*/
	return 0;
}

void f()
{
	int z[4][2] = { {2,4},{8,10},{12,3},{89,5} };

	printf("z = %p - z[0][0] = %p", z, z[0][0]);


}
int MaxElement(int *mas, int lenght)
{
	int max = *mas;
	for (short int i = 0; i < lenght; i++)
	{
		if (max < *(mas + i))
			max = *(mas + i);
	}
	return max;
}
void DifferentElements(int *mas, int lenght)
{
	int counter = 0;
	for (int i = 0; i < lenght; i++)
		for (int j = 0; j < lenght; j++)
			if (i != j)
				if (*(mas + i) == *(mas + j))
					counter++;
	printf("���������� �������� ��������� = %d\n", lenght - counter);
}

int isExists(int *mas, int length, int key)
{
	for (int i = 0; i < length; i++)
	{
		if (key == *(mas + i*2+1))
			return 1;
	}
	return 0;
}

void printMatrix2(int *mas, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", *(mas + i*col + j));
		}
		printf("\n");
	}
}

void Meetings(int *mas, int length)
{
	int matrix[20][2];

	for (int i = 0; i < length; i++)
	{
		/*if (isExists(&matrix[0][0], length, *(mas + i)) == 0)
		{

		}*/
		matrix[i][0] = *(mas + i);
		matrix[i][1] = 0;
	}

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (matrix[i][0] == *(mas +j))
				matrix[i][1]++;
		}
	}

	printMatrix2(&matrix[0][0], 20, 2);

	/*for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}*/
}

char * GetMaxString(char * str, int * max)
{
	int start = 0;
	char * pt=NULL;

	for (int i = 0; i < strlen(str); i++)
	{
		if (*(str) == ' ')
		{
			i--;

			if (*max < (i - start))
			{
				*max = (i - start);
				pt = str- (i - start)-1;
			}				

			i++;
			start = i + 1;
		}
		str++;
	}

	return pt;
}

void SortByLetter(char * str)
{
	char splitStr[10][15];
	int start = 0;
	int j = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (*str == ' ')
		{
			str = str - (i - start) -1;

			i--;	

			for (int k = 0; k <= (i - start); k++)
			{
				splitStr[j][k] = *(str+k);
			}
			
			j++;
			i++;
			start = i + 1;
			str = str + start;
		}
		str++;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			printf("%c", splitStr[i][j]);
		}
		printf("\n");
	}
}