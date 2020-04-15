#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	int var;
	cout << " Choose lvl(1, 2, 3) " << endl;
	cin >> var;
	switch (var)
	{
		case 1:
		{
			// Условие задания:
			// Введите массив символов из 11 элементов
			// Перведите все строчные буквы-символы в верхний регистр
			const int N = 11;
			char str[N];
			cout << " Fill the array with characters(Also 11 elements!): " << endl;
			for (int i = 0; i < N; i++)
			{
				if (cin >> str[i])
					continue;
				else
					cout << " Input again " << endl;
			}
			cout << endl << endl;
			for (int i = 0; i < N; i++)
				cout << (char)toupper(str[i]) << " "; // Переводим все символы в верхний регистр
			break;
		}
		case 2:
		{
			// Условие задания:
			// Дан массив символов, содержащий число в двоичной системе счисления
			// Проверить правильность ввода этого числа
			// Если число введено неверно, повторить ввод
			// При правильном вводе перевести число в десятичную систему счисления

			string bin;  // Создаем строку
			cout << "Enter the number in binary system: " << endl;
			cout << "\n";
			do cin >> bin; // Вводим значение
			while ([](const string& str) -> bool // Создаем массив и придаем значение bool строке
				{
					for (const auto& c : str) 
						if (c != '0' && c != '1') // Если введенное значение не в двоичной системе -> вводим заново
							return true;
					return false; // Если все нормально, то сохраняем значение
				}(bin));
			cout << "\n";
			cout << "Its number in decimal: " << stoll(bin, 0, 2) << endl; // Извлекаем знаковое целое число из массива bin

			break;
		}
		case 3:
		{
			// Условия задания:
			// Введите массив символов из 7 элементов
			// Определить, является ли он симметричным
			const int N = 7;
			char massive[N];
			cout << "Fill the array symmetrically with characters(Also 7 elements!): " << endl;
			for (int i = 0; i < N; i++)
				cin >> massive[i];
			cout << "\n";
			for (int i = 0; i < N / 2; i++)
			{
				if (massive[i] == massive[N - i - 1])
				{
					cout << i+1 << " and " << N-i-1 << " elements symmetrical" << endl;
				}
				else
					cout << " Input again " << endl;
			}
			break;
		}
		default:
		{
			cout << " ERROR! " << endl;
		}
	}
	return 0;
}
