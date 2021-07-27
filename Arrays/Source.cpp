#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void PrintRand(int arr[], const int n);
void SortRand(int arr[], const int n);
double Avg(int arr[], const int n);
int minValue(int arr[], const int n);
int maxValue(int arr[], const int n);
void ShiftLeft(int arr[], const int n);
void ShiftRight(int arr[], const int n);

void main()

{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	PrintRand(arr, n);
	SortRand(arr, n);
	PrintRand(arr, n);
	Avg(arr, n);
	minValue(arr, n);
	maxValue(arr, n);
	ShiftLeft(arr, n);
	PrintRand(arr, n);
	ShiftRight(arr, n);
	PrintRand(arr, n);

	//////////////////////////////////////////////
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	PrintRand(brr, SIZE);
	SortRand(brr, SIZE);
	PrintRand(brr, SIZE);
	Avg(brr, SIZE);
	minValue(brr, SIZE);
	maxValue(brr, SIZE);
	ShiftLeft(brr, SIZE);
	PrintRand(brr, SIZE);
	ShiftRight(brr, SIZE);
	PrintRand(brr, SIZE);

}
void FillRand(int arr[], const int n)
{
	//формирование массива
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

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
double Avg(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	cout << "Сумма элементов массива: " << Sum << endl;
	double Avg = (double)Sum / n;
	cout << "Среднее арифметическое элементов массива: " << Avg << endl;
	return Avg;

}
int minValue(int arr[], const int n)
{
	int minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << minValue << endl;
	return minValue;
}

int maxValue(int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	cout << "Минимальное значение элементов массива: " << maxValue << endl;
	return maxValue;
}


void ShiftLeft(int arr[], const int n)
{
	int move;
	cout << "Введите на сколько позиций необходимо осуществить сдвиг влево: "; cin >> move;
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
void ShiftRight(int arr[], const int n)
{
	int move;
	cout << "Введите на сколько позиций необходимо осуществить сдвиг вправо: "; cin >> move;
	for (int j = 0; j < (n - move); j++)
	{
		const int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}



