#include"stdafx.h"
#include"FillRand.h"
#include"PrintRand.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"

#define HOME_WORK

void main()

{
	setlocale(LC_ALL, "Russian");
#ifdef HOME_WORK
	int move = 0;

	cout << "Short" << endl << line;
	cout << endl;
	const int n_1 = 5;
	short arr_1[n_1];
	FillRand(arr_1, n_1);
	PrintRand(arr_1, n_1);
	PrintRand(arr_1, n_1);
	cout << "Сумма элементов массива: " << Sum(arr_1, n_1) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr_1, n_1) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(arr_1, n_1) << endl;
	cout << "Максимальное значение элементов массива: " << maxValue(arr_1, n_1) << endl;
	cout << "Введите на сколько позиций необходимо осуществить сдвиг влево: "; cin >> move;
	ShiftLeft(arr_1, n_1, move);
	PrintRand(arr_1, n_1);
	cout << "Введите на сколько позиций необходимо осуществить сдвиг вправо: "; cin >> move;
	ShiftRight(arr_1, n_1, move);
	PrintRand(arr_1, n_1);
	cout << endl;

	cout << "Integer" << endl << line;
	cout << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	PrintRand(arr, n);
	PrintRand(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(arr, n) << endl;
	cout << "Максимальное значение элементов массива: " << maxValue(arr, n) << endl;
	cout << "Введите на сколько позиций необходимо осуществить сдвиг влево: "; cin >> move;
	ShiftLeft(arr, n, move);
	PrintRand(arr, n);
	cout << "Введите на сколько позиций необходимо осуществить сдвиг вправо: "; cin >> move;
	ShiftRight(arr, n, move);
	PrintRand(arr, n);
	cout << endl;

	cout << "Float" << endl << line;
	cout << endl;
	const int SIZE_1 = 5;
	double crr[SIZE_1];
	FillRand(crr, SIZE_1);
	PrintRand(crr, SIZE_1);
	SortRand(crr, SIZE_1);
	PrintRand(crr, SIZE_1);
	cout << "Сумма элементов массива: " << Sum(crr, SIZE_1) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(crr, SIZE_1) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(crr, SIZE_1) << endl;
	cout << "Максимальное значение элементов массива: " << maxValue(crr, SIZE_1) << endl;
	cout << "Введите на сколько позиций необходимо осуществить сдвиг влево: "; cin >> move;
	ShiftLeft(crr, SIZE_1, move);
	PrintRand(crr, SIZE_1);
	cout << "Введите на сколько позиций необходимо осуществить сдвиг вправо: "; cin >> move;
	ShiftRight(crr, SIZE_1, move);
	PrintRand(crr, SIZE_1);
	cout << endl;

	cout << "Double" << endl << line;
	cout << endl;
	const int SIZE = 5;
	double brr[SIZE];
	FillRand(brr, SIZE);
	PrintRand(brr, SIZE);
	SortRand(brr, SIZE);
	PrintRand(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(brr, SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValue(brr, SIZE) << endl;
	cout << "Введите на сколько позиций необходимо осуществить сдвиг влево: "; cin >> move;
	ShiftLeft(brr, SIZE, move);
	PrintRand(brr, SIZE);
	cout << "Введите на сколько позиций необходимо осуществить сдвиг вправо: "; cin >> move;
	ShiftRight(brr, SIZE, move);
	PrintRand(brr, SIZE);
	cout << endl;

	cout << "Char" << endl << line;
	cout << endl;
	const int m = 5;
	char drr[m];
	FillRand(drr, m);
	PrintRand(drr, m);
	cout << "Введите на сколько позиций необходимо осуществить сдвиг влево: "; cin >> move;
	ShiftLeft(drr, m, move);
	PrintRand(drr, m);
	cout << "Введите на сколько позиций необходимо осуществить сдвиг вправо: "; cin >> move;
	ShiftRight(drr, m, move);
	PrintRand(drr, m);
	cout << endl;
#endif // HOME_WORK

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	PrintRand(i_arr_2, ROWS, COLS);
}





