#include <stdio.h>
#include <iostream>
#include <locale.h>
#include "MyFuncr.h"
#include <time.h>
using namespace std;
short int nz;

int i, j;

void main12(int args, char* argv[])
{
	srand(time(NULL));
	setlocale(LC_ALL, ".1251");


	int z[4][2] = { { 2,4 },{ 8,10 },{ 12,3 },{ 89,5 } };

	printf("%d\n", *(z+1));
	//printf("z = %p - z[0][0] = %p \n", &z, &z[0][0]);
	//printf("z = %p - &z[0] = %p \n", &z, &z[0]);

	return;



	if (args != 0)
	{
		cout << endl;
		for (int i = 0; i < args; i++)
		{
			cout << argv[i];
		}
		cout << endl;
	}

	while (true)
	{
		cout << "������� ����� ������� ";
		cin >> nz;
		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1. ������ ������������ �����. ������� �� ��� ������. ���������� ������ 
			������� �������������� �������� �������.*/
			int r,two=0;			
			cout << "������� ������ ������� "; cin >> r;
			float *m= (float*)calloc(r, sizeof(float));
			for (int i = 0;i < r;i++)
			{
				/*scanf("%lf", *m);*/
				//printf("%d", i);
				cin >> *m;
				m++;
			}		
			m=m - r;
			for (int i = 0;i < r;i++)
			{				
				/*cout << *m<<"\t";*/
				if (*m > 0)
				{
					two++;
					if (two == 2)
					{
						cout << *m<<endl;
						break;						
					}
				}
				m++;
			}
			m = m - r;
					
		}
		else if (nz == 2)
		{
			/*2.	������ ������������ �����.������� �� ��� ������. ����������� 
			�������� ������� � �������� �������.*/
			int r;
			float *m=NULL;
			cout << "������� ������ ������� ";
			cin >> r;
			m = (float*)calloc(r, sizeof(float));

			if (hFill(m, &r) == 0)
			{
				//print_arr(m, r);
				float prom;
				int a = 0, b = r-1;
				for (int i = 0;i < r/2;i++)
				{					
					prom = *(m + a);
					*(m + a) = *(m + b);
					*(m + b) = prom;
					a++;b--;					
				}
			}
			print_arr(m, r);
			
		}
		else if (nz == 3)
		{
			/*3.	������ ����� ����� N � ������ �� N ����� �����.
			���������� ������� �������������� ��������� �������, �� ������� 3.*/
			int r;
			int *m = NULL;
			cout << "������� ������ ������� ";
			cin >> r;
			m = (int*)calloc(r, sizeof(int));
			int sum = 0, sa,count=0;
			if (hFill(m, &r) == 0)
			{
				for (int i = 0;i < r;i++)
				{
					if (*m % 3 != 0)
					{
						sum += *m;
						count++;
					}
					m++;
				}
				sa = sum / count;
				cout << sa << endl;
			}
		}
		else if (nz == 4)
		{
			/*4.	������ ����� ����� N.������� ������ �� N ����� �����.
			�������� ������� ������ � ������������ �������� �������*/
			int r;
			int *m = NULL;
			cout << "������� ������ ������� ";
			cin >> r;
			m = (int*)calloc(r, sizeof(int));
			int maks = 0, im=NULL;
			if (hFill(m, &r) == 0)
			{
				for (int i = 0;i < r;i++)
				{
					if (*m> maks)
					{
						maks= *m;
						im = i;
					}
					m++;
				}
				m = m - r;
				int prom;
				prom = m[im];
				m[im] = m[0];
				m[0] = prom;
				print_arr(m, r);
			}
		}
		else if (nz == 5)
		{
			/*15.	������ ����� �����. ������� ������ �� �������� �����.
			��������� ������������ ������������� ��������� �������.*/
			int r;
			int *m = NULL;
			int *n = NULL;
			int count = 0;
			cout << "������� ������ ������� ";
			cin >> r;
			m = (int*)calloc(r, sizeof(int));
			creat(m, r, -50, 100, positive);
			print_arr(m, r);
			for (int i = 0;i < r;i++)
			{
				if (*m %2!= 0)count++;
				m++;
			}
			m = m - r;
			int a = 1;
			n = (int*)calloc(count, sizeof(int));
			for (int i = 0;i < r;i++)
			{
				if (*m % 2 != 0)
				{
					if (*m > 0)
					{
						a *= *m;
					}
					*n = *m;					
					n++;
				}	
				m++;
			}
			n = n - count;
			print_arr(n, count);
			cout << "������������ = " << a << endl;
		}
		else if (nz == 6)
		{
			/*1.	������� strncpy(s1, s2, n) �������� ����� n �������� �� ������ 
			s2 � ������ s1, ������ ��� ������������� ������ s2 ��� �������� 
			���������� ������� ��������������� �������� ���������.������� 
			������ ����� �� ��������� ������������ �������� �������, ���� ����� 
			������ s2 ����� ��� ������ n. ������� ���������� ������ s1. �������� 
			����������� ������ ���� �������. ������������� ��� ������� � ������ 
			����������� ���������, ������� ���������� ���� ��� �������� ������� 
			�������� ��������������� �������.*/
			int r;
			char s2[] = "������� strncpy(s1, s2, n) �������� ����� n �������� �� ������ s2 � ������ s1, ������ ��� ������������� ������ s2";		
			cout << "������� ���������� �������� ��� �����������";	cin >> r;
			char *s1 = NULL;
			printf("%s", s2);
			if (!(r > strlen(s2)))
			{
				r = strlen(s2);
				s1 = (char*)calloc(r, sizeof(char));
			}
			copyS(s2, s1, r);
			printf("%s", s1);
		}
		else
		{
			printf("Error \n");
			exit(EXIT_FAILURE);
		}
	}
}