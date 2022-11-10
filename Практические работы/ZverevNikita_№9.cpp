#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	int count;
Found:
	cout << "Введите количество циклов: ";
	cin >> count;
	while (count) {
		cout << "Введите число: ";
		cin >> a;

		cout << "Ваше число: " << " ";

		if (a < 0) cout << "Минусовое число";
		
		if (a > 9999)
		{
			cout << "Вне диапазона" << endl;
			goto Found;
		}
		switch (a / 1000)
		{
		case 1: cout << "одна тысяча "; break; 
		case 2: cout << "две тысячи "; break;
		case 3: cout << "три тысячи "; break;
		case 4: cout << "четыре тысячи "; break;
		case 5: cout << "пять тысяч "; break;
		case 6: cout << "шесть тысяч "; break;
		case 7: cout << "семь тысяч "; break;
		case 8: cout << "восемь тысяч "; break;
		case 9: cout << "девять тысяч "; break;
		}
		switch ((a / 100) % 10)
		{
		case 1: cout << "сто "; break;
		case 2: cout << "двести "; break;
		case 3: cout << "триста "; break;
		case 4: cout << "четыреста "; break;
		case 5: cout << "пятьсот "; break;
		case 6: cout << "шестьсот "; break;
		case 7: cout << "семьсот "; break;
		case 8: cout << "восемьсот "; break;
		case 9: cout << "девятьсот "; break;
		}
		switch ((a % 100) / 10)
		{
		case 2: cout << "двадцать "; break;
		case 3: cout << "тридцать "; break;
		case 4: cout << "сорок "; break;
		case 5: cout << "пятдесят "; break;
		case 6: cout << "шестьдесят "; break;
		case 7: cout << "семьдесят "; break;
		case 8: cout << "восемьдесят "; break;
		case 9: cout << "девяносто "; break;
		}
		if (a % 100 >= 10 && a % 100 < 20)
		{
			switch (a % 100) {
			case 10: cout << "десять рублей\n"; break;
			case 11: cout << "одинадцать рублей\n"; break;
			case 12: cout << "двенадцать рублей\n"; break;
			case 13: cout << "тринадцать рублей\n"; break;
			case 14: cout << "четырнадцать рублей\n"; break;
			case 15: cout << "пятнадцать рублей\n"; break;
			case 16: cout << "шестнадцать рублей\n"; break;
			case 17: cout << "семнадцать рублей\n"; break;
			case 18: cout << "восемнадцать рублей\n"; break;
			case 19: cout << "девятнадцать рублей\n"; break;
			}
		}
		else
		{
			switch (a % 10)
			{
			case 0: cout << "рублей\n"; break;
			case 1: cout << "один рубль\n"; break;
			case 2: cout << "два рубля\n"; break;
			case 3: cout << "три рубля\n"; break;
			case 4: cout << "четыре рубля\n"; break;
			case 5: cout << "пять рублей\n"; break;
			case 6: cout << "шесть рублей\n"; break;
			case 7: cout << "семь рублей\n"; break;
			case 8: cout << "восемь рублей\n"; break;
			case 9: cout << "девять рублей\n"; break;
			}
		}
	}
}

