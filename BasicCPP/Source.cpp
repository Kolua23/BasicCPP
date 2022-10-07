#include<iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	switch (i)

	{
	case 1:
	{
		int nam;
		setlocale(LC_ALL, "ukr");
		cout << "число ";
		cin >> nam;

		if (nam % 2 == 0)
			cout << "число парне" << endl;
		else
			cout << "Непарне" << endl;
	}break;
	case 2:
	{
		int nam1, nam2;
		setlocale(LC_ALL, "ukr");
		cout << "перше число ";
		cin >> nam1;
		cout << "друге число ";
		cin >> nam2;
		if (nam1 > nam2 || nam1 < nam2)
			nam1 > nam2 ? cout << "більше 1 число " << nam1 : cout << "більше 2 число " << nam2;
	}
	break;
	case 3:
	{
		int nam;
		setlocale(LC_ALL, "ukr");
		cout << "число ";
		cin >> nam;
		if (nam > 1 || nam <= -1)
			nam <= 1 ? cout << "відємне " << nam : cout << "додатне " << nam;
		else if (nam == 0)
			cout << "дорівнює нулю " << nam;

	}break;
	case 4:
	{
		int nam1, nam2;
		setlocale(LC_ALL, "ukr");
		cout << "перше число ";
		cin >> nam1;
		cout << "друге число ";
		cin >> nam2;
		if (nam1 > nam2 || nam1 < nam2)
			nam1 > nam2 ? cout << "більше 1 число " << nam1 << ">" << nam2 : cout << "більше 2 число " << nam2 << ">" << nam1;
		else if (nam1 == nam2) {
			cout << nam1 << "=" << nam2;
		}

	}break;

	}
	cin.get();
	
	return 0;
}