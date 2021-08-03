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

void PrintRand(int arr[], const int n);
void PrintRand(short arr[], const int n);
void PrintRand(float arr[], const int n);
void PrintRand(double arr[], const int n);
void PrintRand(char arr[], const int n);
void PrintRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void SortRand(int arr[], const int n);
void SortRand(short arr[], const int n);
void SortRand(float arr[], const int n);
void SortRand(double arr[], const int n);

int Sum(int arr[], const int n);
short Sum(short arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(short arr[], const int n);
float Avg(float arr[], const int n);
double Avg(double arr[], const int n);

int minValue(int arr[], const int n);
short minValue(short arr[], const int n);
float minValue(float arr[], const int n);
double minValue(double arr[], const int n);

int maxValue(int arr[], const int n);
short maxValue(short arr[], const int n);
float maxValue(float arr[], const int n);
double maxValue(double arr[], const int n);

void ShiftLeft(int arr[], const int n, int move);
void ShiftLeft(short arr[], const int n, int move);
void ShiftLeft(float arr[], const int n, int move);
void ShiftLeft(double arr[], const int n, int move);
void ShiftLeft(char arr[], const int n, int move);

void ShiftRight(int arr[], const int n, int move);
void ShiftRight(short arr[], const int n, int move);
void ShiftRight(float arr[], const int n, int move);
void ShiftRight(double arr[], const int n, int move);
void ShiftRight(char arr[], const int n, int move);

//#define HOME_WORK

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
void PrintRand(short arr[], const int n)
{
	//вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
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
void PrintRand(float arr[], const int n)
{
	//вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}
void PrintRand(double arr[], const int n)
{
	//вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}

void PrintRand(char arr[], const int n)
{
	//вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}
void PrintRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
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

void SortRand(short arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				short buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
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
void SortRand(float arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void SortRand(double arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

short Sum(short arr[], const int n)
{
	short Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}

	return Sum;

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

float Sum(float arr[], const int n)
{
	float Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}

	return Sum;

}

double Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}

	return Sum;

}

double Avg(short arr[], const int n)
{
	return (double)Sum(arr, n) / n;

}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;

}

float Avg(float arr[], const int n)
{
	return Sum(arr, n) / n;

}

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;

}

short minValue(short arr[], const int n)
{
	short minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
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
float minValue(float arr[], const int n)
{
	float minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

double minValue(double arr[], const int n)
{
	double minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

short maxValue(short arr[], const int n)
{
	short maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
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

float maxValue(float arr[], const int n)
{
	float maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

double maxValue(double arr[], const int n)
{
	double maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

void ShiftLeft(short arr[], const int n, int move)
{
	for (int j = 0; j < move; j++)
	{
		const short buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
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

void ShiftLeft(float arr[], const int n, int move)
{
	for (int j = 0; j < move; j++)
	{
		const float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, int move)
{
	for (int j = 0; j < move; j++)
	{
		const double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(char arr[], const int n, int move)
{
	for (int j = 0; j < move; j++)
	{
		const char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(short arr[], const int n, int move)
{
	ShiftLeft(arr, n, n - move);
}
void ShiftRight(int arr[], const int n, int move)
{
	ShiftLeft(arr, n, n - move);
}

void ShiftRight(float arr[], const int n, int move)
{
	ShiftLeft(arr, n, n - move);
}
void ShiftRight(double arr[], const int n, int move)
{
	ShiftLeft(arr, n, n - move);
}
void ShiftRight(char arr[], const int n, int move)
{
	ShiftLeft(arr, n, n - move);
}



