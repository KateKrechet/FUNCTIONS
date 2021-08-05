#include<iostream>
using namespace std;
#define line "------------------------------------------------------------------------------------------------";
const int ROWS = 3;
const int COLS = 8;

void FillRand(int arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);//прототип перегруженной функции

template<typename T>
void PrintRand(T arr[], const int n);
template<typename T>
void PrintRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void SortRand(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

template<typename T>
T minValue(T arr[], const int n);

template<typename T>
T maxValue(T arr[], const int n);

template<typename T>
void ShiftLeft(T arr[], const int n, int move);

template<typename T>
void ShiftRight(T arr[], const int n, int move);


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

void FillRand(short arr[], const int n)
{
	//формирование массива
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

	}

}
void FillRand(int arr[], const int n)
{
	//формирование массива
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

	}

}

void FillRand(float arr[], const int n)
{
	//формирование массива
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 100) / 10;

	}

}
void FillRand(double arr[], const int n)
{
	//формирование массива
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;

	}

}

void FillRand(char arr[], const int n)
{
	//формирование массива
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 255;

	}

}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//формирование массива
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
template<typename T>
void PrintRand(T arr[], const int n)
{
	//вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}
template<typename T>
void PrintRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//вывод массива
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}

		cout << endl;
	}
	cout << endl;
}

template<typename T>
void SortRand(T arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
T Sum(T arr[], const int n)
{
	T Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}

	return Sum;

}
template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;

}

template<typename T>
T minValue(T arr[], const int n)
{
	T minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}
template<typename T>
T maxValue(T arr[], const int n)
{
	T maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

template<typename T>
void ShiftLeft(T arr[], const int n, int move)
{
	for (int j = 0; j < move; j++)
	{
		const T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>
void ShiftRight(T arr[], const int n, int move)
{
	ShiftLeft(arr, n, n - move);
}




