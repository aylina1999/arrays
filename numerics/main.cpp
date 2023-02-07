#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::end;

//#define BIN
//#define HEX


void main()
{
	setlocale(LC_ALL, "");

	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;

#ifdef BIN
	const int n = 32;  //максимально возможная разрядность числа типа 'int'
	bool bin[n] = {};  //bin - binary, этот массив будет зранить разряды (биты) двоичного числа

	cout << bin << endl;
	int i = 0;

	while (decimal)
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
	}

	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // BIN

#ifdef HEX
	const int n = 8;
	int hex[n] = {};

	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16;
	}

	for (--i; i >= 0; i--)
	{
		switch (hex[i])
		{
		case 10:cout << 'A'; break;
		case 11:cout << 'B'; break;
		case 12:cout << 'C'; break;
		case 13:cout << 'D'; break;
		case 14:cout << 'E'; break;
		case 15:cout << 'F'; break;
		default:cout << hex[i];
		}
	}
	cout << endl;
#endif // HEX

}