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