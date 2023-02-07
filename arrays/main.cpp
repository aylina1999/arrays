#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	//arr[2] = 123;			//обращение к элементу маасива на запись
	//cout << arr[2] << endl;	//оброащение к элементу массива на чтение
	//SIZE-1;
	//n-1;

	//Ввод элементов массива с клавиатуры:
	cout << "Введите элементы массива (" << n << " шт.):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];	//обращаемся к элементу массива на запись
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";	//обращаемся к элемента массива на чтение.
	}
	cout << endl;

	//вывод массива на экран в обратном порядке
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//вычисление суммы элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива:" << sum << endl;
	cout << "Среднее-арифметическое:" << (double)sum / n << endl;

	//поиск минимального и максимального значения в массиве

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
	


	int index_of_min, index_of_max;
	index_of_max = index_of_min = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr[index_of_min]) index_of_min = i;
		if (arr[i] < arr[index_of_max]) index_of_max = i;
	}
	cout << "Минимальное значение в массиве:  " << arr[index_of_min] << endl;
	cout << "Максимальное значение в массиве: " << arr[index_of_max] << endl;
}