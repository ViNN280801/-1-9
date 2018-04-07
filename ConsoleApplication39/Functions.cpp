#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
void fillMatrix(int *mass, int row, int column)
{
	for (short int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			*(mass + i * column + j) = -40 + rand() % 90;
}
void printMatrix(int *mass, int row, int column)
{
	for (short int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%d\t", *(mass + i * column + j));
		}
		printf("\n");
	}
}
void SortOpredStolbca(int *mass, int column, int row)
{
	int ROW, temp = 0, length = column;
	printf("Введите столбец массива, который хотите отсортировать: ");
	scanf("%d", &ROW);
	for (int i = 0; i < column; i++)
	{
		for (int j = row - 1; j > i; j--)
		{
			int k = j - 1;
			if (*(mass + j * column + ROW) > *(mass + k * column + ROW))
			{
				temp = *(mass + j * column + ROW);
				*(mass + j * column + ROW) = *(mass + k * column + ROW);
				*(mass + k * column + ROW) = temp;
			}
		}
	}
	printMatrix(mass, length, row);
}
void fillMatrixOnlyChetn(int *mass, int length, int row)
{
	for (short int i = 0; i < length; i++)
		for (int j = 0; j < row; j++)
		{
			*(mass + i * length + j) = -40 + rand() % 90;
			if (*(mass + i * length + j) % 2 == 0)
			{
				printf("%d\t", *(mass + i * length + j));
			}
			else
				*(mass + i * length + j) = 0;
		}
	printf("\n");
}
void fillMatrixOnlyNEChetn(int *mass, int length, int row)
{
	for (short int i = 0; i < length; i++)
		for (int j = 0; j < row; j++)
		{
			*(mass + i * length + j) = -40 + rand() % 90;
			if (*(mass + i * length + j) % 2 != 0)
			{
				printf("%d\t", *(mass + i * length + j));
			}
			else
				*(mass + i * length + j) = 0;
		}
	printf("\n");
}
void SumROW(int *mass, int row, int length)
{
	int ROW;
	printf("Введите строку массива, в которой хотите найти сумму элементов: ");
	scanf("%d", &ROW);
	int sum = 0;
	for (short int i = 0; i < length; i++)
		for (short int j = row - 1; j > i; j--)
		{
			sum += *(mass + j * row + ROW);
		}
	printf("Сумма в %d строке = %d.\n", ROW, sum);
}
void Krat3(int *mass, int row, int column)
{
	printf("Элементы массива, кратные 3: \n");
	for (short int i = 0; i < row; i++)
	{
		for (short int j = 0; j < column; j++)
		{
			if (*(mass + i * column + j) % 3 == 0)
			{
				printf("%d\t", *(mass + i * column + j));
			}
		}
	}
}
void fillArray(int *mass, int length)
{
	for (short int i = 0; i < length; i++)
		*(mass + i) = -50 + rand() % 100;
}
void printArray(int *mass, int length)
{
	for (short int i = 0; i < length; i++)
		printf("%d\t", *(mass + i));
	printf("\n");
}
void searchOtriz(int *mass, int length)
{
	int count = 0;
	for (short int i = 0; i < length; i++)
	{
		if (*(mass + i) < 0)
		{
			count++;
		}
	}
	printf("Количество отрицательных элементов в данном массиве = %d.\n", count);
}
void absMen7(int *mass, int length)
{
	int proizv = 1;
	for (short int i = 0; i < length; i++)
	{
		if (abs(*(mass + i)) < 7)
		{
			proizv *= *(mass + i);
		}
	}
	printf("Произведение элементов, модуль которых меньше 7 = %d.\n", abs(proizv));
}
void SearchMaxElement(int *mas, int length)
{
	int max = 0;
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) > max)
		{
			max = *(mas + i);
		}
	}
	printf("Максимальный элемент массива = %d.\n", max);
}
void SearchMinElement(int *mas, int length)
{
	int min = 100;
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) < min)
		{
			min = *(mas + i);
		}
	}
	printf("Минимальный элемент массива = %d.\n", min);
}
void SrArifmOfArray(int *mas, int length)
{
	float sum = 0, SrArifm;
	for (short int i = 0; i < length; i++)
	{
		sum += *(mas + i);
	}
	SrArifm = sum / length;
	printf("Среднее арифметическое данного массива = %d.\n", SrArifm);
}
void searchNEotriz(int *mass, int length)
{
	int count = 0;
	for (short int i = 0; i < length; i++)
	{
		if (*(mass + i) >= 0)
		{
			count++;
		}
	}
	printf("Количество положительных элементов в данном массиве = %d.\n", count);
}
void SearchIndexOfOtrizElementa(int *mass, int length)
{
	int count = 0, temp;
	for (short int i = 0; i < length; i++)
	{
		if (*(mass + i) < 0)
		{
			count++;
			temp = i;
		}
	}
	printf("Количество отрицательных элементов в данном массиве = %d.\n", count);
	printf("Индекс последнего отрицательного элемента в массиве = %d.\n", temp);
}
void SumOfMinANDmAx(int *mas, int length)
{
	int max = 0, min = 100, sum = 0;
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) > max)
		{
			max = *(mas + i);
		}
	}
	printf("Максимальный элемент массива = %d.\n", max);
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) < min)
		{
			min = *(mas + i);
		}
	}
	printf("Минимальный элемент массива = %d.\n", min);
	sum = min + max;
	printf("Сумма минимального и максимального элементов составляет %d.\n", sum);
}
void ProizvOfMinANDmAx(int *mas, int length)
{
	int max = 0, min = 100, proizv = 0;
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) > max)
		{
			max = *(mas + i);
		}
	}
	printf("Максимальный элемент массива = %d.\n", max);
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) < min)
		{
			min = *(mas + i);
		}
	}
	printf("Минимальный элемент массива = %d.\n", min);
	proizv = min * max;
	printf("Произведение минимального и максимального элементов составляет %d.\n", proizv);
}