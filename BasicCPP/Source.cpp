#include<iostream>
using namespace std;

int main()
{
	int nam1, nam2;
	setlocale(LC_ALL, "ukr");
	srand(time(0));
	cout << "�� ����� ";
	cin >> nam1;
	cout << "�� ����� ";
	cin >> nam2;
	int nam;
	cin >> nam;
	while (nam)
	{

		if  (nam1 || nam2)
		{
			cout << " ������� ";
			if (nam < nam1)
				cout << "+" << endl;
			else if (nam > nam2)
				cout << "-" << endl;
			else
				cout << "win" << endl;
			system("pause");
			system("cls");
			return 0;
		}
	}
	return 0;
}