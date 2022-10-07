#include<iostream>
using namespace std;

int main()
{
	int namber;
	cin >> namber;
	switch (namber)
	{
	case 1:
	{
		int nam;
		cout << "nam is ";
		cin >> nam;
		for (int i = 0; i <= nam; ++i)
			cout << " " << i;
	}break;
	case 2:
	{
		int nam1, nam2;
		cout << "nam 1 ";
		cin >> nam1;
		cout << "nam 2 ";
		cin >> nam2;
		int  i = nam1;
		setlocale(LC_ALL, "ukr");
		do
		{
			if (i % 2 == 0)
			{
				cout << "парне " << i << endl;
			}
			else if (i % 7 == 0)
			{
				cout << "кратне 7 " << i << endl;
			}
			else if (i % 2 != 0)
			{
				cout << "не парне " << i << endl;
			}
			i++;
		} while (i < nam2);


	}break;
	case 3:
	{
		int nam1, nam2;
		cout << "nam 1 ";
		cin >> nam1;
		cout << "nam 2 ";
		cin >> nam2;
		int i = nam1;
		int sum = 0;
		do
		{
			cout << "sum = " << sum << "+" << i << "=" << sum + i << endl;
			sum += i;
			i++;
		} while (i < nam2);

	}break;
	case 4:
	{
		int nam1, nam2, old;
		long long sum = 0;
		char sing;
		do {
			cout << "nam 1 ";
			cin >> nam1;
			cout << "nam 2 ";
			cin >> nam2;
			old = sum;
			cout << "sum = " << old << "+" << nam1 << "+" << nam2;
			sum += nam1 + nam2;
			cout << " " << sum << " " << endl;
			cout << "enter sing =";
			cin >> sing;
		} while (sing != '0');
		{

		}
	}break;
	case 5:
	{   srand(time(0));

	setlocale(LC_ALL, "ukr");
	int i = rand() % 500;
	i < 500;
	system("cls");
	while (i)
	{

		cout << "я  загадав число" << endl;
		int a;
		cin >> a;
		system("cls");
		if (i > a)

		{
			cout << "більше " << endl;
		}
		else
		{
			if (i < a)
				cout << "менше  " << endl;
			else
			{
				cout << "вгадали !!! " << endl;
			}
		}
	}
	}break;
	case 6:
	{
		system("cls");
		int const usd = 1;
		int const eur = 1;
		int const ukr = 1;
		setlocale(LC_ALL, "ukr");
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
		{
			int y;
			cout << "сума в грн " << endl;
			cin >> y;
			system("cls");
			cout << y / 42.20 * usd << " сума в доларах" << endl;
			cout << y / 20.20 * eur << " сума в евро  " << endl;
		}break;
		case 2:
		{
			int y;
			cout << "сума в доларах " << endl;
			cin >> y;
			system("cls");
			cout << y * 42.20 * usd << " сума в гривнях" << endl;
			cout << y * 0.95 * eur << " сума в евро  " << endl;

		}break;
		case 3:
		{
			int y;
			cout << "сума в євро " << endl;
			cin >> y;
			system("cls");
			cout << y * 40.20 * usd << " сума в гривнях" << endl;
			cout << y * 1.05 * eur << " сума в доларах " << endl;
		}break;
		default:
			break;
		}


	}break;

	cin.get();
	return 0;
	}

}