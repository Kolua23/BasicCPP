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
		cout << "����� ";
		cin >> nam;

		if (nam % 2 == 0)
			cout << "����� �����" << endl;
		else
			cout << "�������" << endl;
	}break;
	case 2:
	{
		int nam1, nam2;
		setlocale(LC_ALL, "ukr");
		cout << "����� ����� ";
		cin >> nam1;
		cout << "����� ����� ";
		cin >> nam2;
		if (nam1 > nam2 || nam1 < nam2)
			nam1 > nam2 ? cout << "����� 1 ����� " << nam1 : cout << "����� 2 ����� " << nam2;
	}
	break;
	case 3:
	{
		int nam;
		setlocale(LC_ALL, "ukr");
		cout << "����� ";
		cin >> nam;
		if (nam > 1 || nam <= -1)
			nam <= 1 ? cout << "����� " << nam : cout << "������� " << nam;
		else if (nam == 0)
			cout << "������� ���� " << nam;

	}break;
	case 4:
	{
		int nam1, nam2;
		setlocale(LC_ALL, "ukr");
		cout << "����� ����� ";
		cin >> nam1;
		cout << "����� ����� ";
		cin >> nam2;
		if (nam1 > nam2 || nam1 < nam2)
			nam1 > nam2 ? cout << "����� 1 ����� " << nam1 << ">" << nam2 : cout << "����� 2 ����� " << nam2 << ">" << nam1;
		else if (nam1 == nam2) {
			cout << nam1 << "=" << nam2;
		}

	}break;

	}
	cin.get();
	
	return 0;
}