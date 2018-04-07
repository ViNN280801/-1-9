#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int w;
	printf("Введите номер задания: ");
	scanf("%hu", &w);
	switch (w)
	{
	case 1:
	{
		//1.	Дан двумерный массив целых чисел
		//	a.Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующего столбца двумерного массива
		//	b.Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующей строки двумерного массива
		int *matrix = NULL, row, column;
		printf("Введите кол-во строк массива: ");
		scanf("%d", &row);
		printf("Введите кол-во столбцов в массиве: ");
		scanf("%d", &column);
		int length = column * row;
		matrix = (int*)malloc(10 * sizeof(int));
		fillMatrix(matrix, column, row);
		printMatrix(matrix, column, row);
		SortOpredStolbca(matrix, column, row);
		free(matrix);
	}
	break;
	case 2:
	{
		//2.Дан двумерный массив целых чисел
		//a.Сформировать одномерный массив, каждый элемент которого равен первому четному элементу соответствующего столбца двумерного массива(если такого элемента в столбце нет, то он равен нулю).
		//b.Сформировать одномерный массив, каждый элемент которого равен последнему нечетному элементу соответствующей строки двумерного массива(если такого элемента в строке нет, то он равен нулю).
		int *matrix = NULL, column, row;
		printf("Введите кол-во строк массива: ");
		scanf("%d", &row);
		printf("Введите кол-во столбцов в массиве: ");
		scanf("%d", &column);
		int length = column * row;
		matrix = (int*)calloc(10, sizeof(int));
		int *mass = NULL;
		mass = (int*)calloc(10, sizeof(int));
		fillMatrix(matrix, column, row);
		printMatrix(matrix, column, row);
		printf("\n");
		printf("Новый массив, сформированный только из чётных элементов, нечётные заменены на 0.\n ");
		fillMatrixOnlyChetn(matrix, column, row);
		printf("Новый массив, сформированный только из нечётных элементов, нечётные заменены на 0.\n ");
		fillMatrixOnlyNEChetn(matrix, column, row);
		free(matrix);
		free(mass);
	}
	break;
	case 3:
	{
		//3.	Дан двумерный массив.
		//	a.Сформировать одномерный массив, каждый элемент которого равен количеству элементов соответствующего столбца двумерного массива, больших данного числа
		//	b.Сформировать одномерный массив, каждый элемент которого равен сумме элементов соответствующей строки двумерного массива, меньших данного числа.
		int column, row, *mas = NULL;
		printf("Введите кол-во строк массива: ");
		scanf("%d", &row);
		printf("Введите кол-во столбцов в массиве: ");
		scanf("%d", &column);
		int length = column * row;
		mas = (int*)malloc(length * sizeof(int));
		SumROW(mas, row, length);
		free(mas);
	}
	break;
	case 4:
	{
		//4.	Дан двумерный массив размером N x M, заполненный целыми числами
		//	a.Все его элементы, кратные трем, записать в одномерный массив.
		//	b.Все его положительные элементы записать в один одномерный массив, а остальные — в другой
		int column, row, *mas = NULL;
		printf("Введите кол-во строк массива: ");
		scanf("%d", &row);
		printf("Введите кол-во столбцов в массиве: ");
		scanf("%d", &column);
		int length = column * row;
		mas = (int*)malloc(length * sizeof(int));
		fillMatrix(mas, row, column);
		printMatrix(mas, row, column);
		Krat3(mas, length, row);
		free(mas);
	}
	break;
	case 5:
	{
		//5.Ввести целые числа. Создать из них массив. Вычислить сумму чётных элементов массива.
		int num, count = 0, temp;
		printf("Вводите числа, чтобы прекратить, введите 0: \n ");
		do
		{
			scanf("%d", &num);
			count++;
			temp = num;
		} while (num != 0);
		int *mass = NULL;
		mass = (int*)malloc(count * sizeof(int));
		printArray(mass, count);
		free(mass);
		//Не очень понятно задание, мы же должны запоминать в какую-то переменную число, вводимое юзером, а т.к. мы не знаем сколько он будет вводить, мы не можем зарание создать массив.
	}
	break;
	case 6:
	{
		//6.Ввести целое число N и массив из N вещественных чисел. Определить количество отрицательных элементов массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		searchOtriz(mas, length);
		free(mas);
	}
	break;
	case 7:
	{
		//7.Ввести целое число N. Создать массив из N вещественных чисел. Вычислить произведение элементов, модуль которых меньше 7.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		absMen7(mas, length);
		free(mas);
	}
	break;
	case 8:
	{
		//8.Ввести вещественные числа. Создать из них массив определить наибольший элемент массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		SearchMaxElement(mas, length);
		free(mas);
	}
	break;
	case 9:
	{
		//9.Ввести целое число N и массив из N целых чисел.Определить наименьший элемент массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		SearchMinElement(mas, length);
		free(mas);
	}
	break;
	case 10:
	{
		//10.Ввести вещественные числа. Создать из них массив. Определить среднее арифметическое элементов массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		SrArifmOfArray(mas, length);
		free(mas);
		//Легко, но почему-то неправильно выдаёт среднее арифметическое, то есть в debug'е всё нормально показывает, а в самой програме выдаёт непонятно откуда взятое число.
	//	¯\_(ツ)_ / ¯
	}
	break;
	case 11:
	{
		//11.Ввести вещественные числа. Создать из них массив. Определить количество неотрицательных элементов массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		searchNEotriz(mas, length);
		free(mas);
	}
	break;
	case 12:
	{
		//12.Ввести целое число N и массив из N вещественных чисел. Определить индекс последнего отрицательного элемента массива.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		SearchIndexOfOtrizElementa(mas, length);
		free(mas);
	}
	break;
	case 13:
	{
		//13.Ввести целое число N. Создать массив из N вещественных чисел. Вычислить сумму минимального и максимального элементов.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		SumOfMinANDmAx(mas, length);
		free(mas);
	}
	break;
	case 14:
	{
		//14.Ввести вещественные числа.Создать из них массив.Вычислить произведение минимального и максимального элементов.
		int *mas = NULL, length;
		printf("Введите длину массива: ");
		scanf("%d", &length);
		mas = (int*)calloc(length, sizeof(int));
		fillArray(mas, length);
		printArray(mas, length);
		ProizvOfMinANDmAx(mas, length);
		free(mas);
	}
	break;
	}
}