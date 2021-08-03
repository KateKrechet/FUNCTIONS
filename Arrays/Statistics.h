#pragma once
#include"stdafx.h"

int Sum(int arr[], const int n);
short Sum(short arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);
short Sum(short arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(short arr[], const int n);
float Avg(float arr[], const int n);
double Avg(double arr[], const int n);
double Avg(short arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int minValue(int arr[], const int n);
short minValue(short arr[], const int n);
float minValue(float arr[], const int n);
double minValue(double arr[], const int n);
short minValue(short arr[ROWS][COLS], const int ROWS, const int COLS);
int minValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
float minValue(float arr[ROWS][COLS], const int ROWS, const int COLS);
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValue(int arr[], const int n);
short maxValue(short arr[], const int n);
float maxValue(float arr[], const int n);
double maxValue(double arr[], const int n);
short maxValue(short arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValue(float arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
