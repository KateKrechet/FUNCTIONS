
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