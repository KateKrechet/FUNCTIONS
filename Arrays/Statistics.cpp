#include"stdafx.h"
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
short Sum(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	short Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum = Sum + arr[i][j];
		}
	}
	return Sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum = Sum + arr[i][j];
		}
	}
	return Sum;
}
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum = Sum + arr[i][j];
		}
	}
	return Sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum = Sum + arr[i][j];
		}
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
double Avg(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr,ROWS,COLS)/(ROWS*COLS);
}
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
short minValue(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	short min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
int minValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min =arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
float minValue(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
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
short maxValue(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	short max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] >max) max = arr[i][j];
		}
	}
	return max;
}
float maxValue(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}