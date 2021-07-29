#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void PrintRand(int arr[], const int n);
void PrintRand(double arr[], const int n);

void SortRand(int arr[], const int n);
void SortRand(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValue(int arr[], const int n);
double minValue(double arr[], const int n);

int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);

void ShiftLeft(int arr[], const int n, int move);
void ShiftLeft(double arr[], const int n, int move);

void ShiftRight(int arr[], const int n,int move);
void ShiftRight(double arr[], const int n,int move);

void main()

{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	PrintRand(arr, n);
	//SortRand(arr, n);
	PrintRand(arr, n);
	/*cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(arr, n) << endl;
	cout << "Максимальное значение элементов массива: " << maxValue(arr, n) << endl;
	int move = 0;
	cout << "Введите на сколько позиций необходимо осуществить сдвиг влево: "; cin >> move;
	ShiftLeft(arr, n, move);
	PrintRand(arr, n);
	cout << "Введите на сколько позиций необходимо осуществить сдвиг вправо: "; cin >> move;
	ShiftRight(arr, n,move);
	PrintRand(arr, n);*/

	//////////////////////////////////////////////
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	PrintRand(brr, SIZE);
	//SortRand(brr, SIZE);
	PrintRand(brr, SIZE);
	/*cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(brr, SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValue(brr, SIZE) << endl;
	cout << "Введите на сколько позиций необходимо осуществить сдвиг влево: "; cin >> move;
	ShiftLeft(brr, SIZE, move);
	PrintRand(brr, SIZE);
	cout << "Введите на сколько позиций необходимо осуществить сдвиг вправо: "; cin >> move;
	ShiftRight(brr, SIZE,move);
	PrintRand(brr, SIZE);*/

}
void FillRand(int arr[], const int n)
{
	//формирование массива
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

	}

}void FillRand(double arr[], const int n)
{
	//формирование массива
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;

	}

}
void PrintRand(int arr[], const int n)
{
	//вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}void PrintRand(double arr[], const int n)
{
	//вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}
void SortRand(int arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}

	return Sum;

}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;

}
int minValue(int arr[], const int n)
{
	int minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

int maxValue(int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}


void ShiftLeft(int arr[], const int n, int move)
{
	for (int j = 0; j < move; j++)
	{
		const int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(int arr[], const int n,int move)
{
	ShiftLeft(arr, n, n - move);
}



