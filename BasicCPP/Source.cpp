#include<iostream>
using namespace std;

int main()
{
	while (true)
	{
		setlocale(LC_ALL, "ukr");
		cout << "#>---------------------<#" << endl;
		cout << "#>  1 ������  -20 ���  <#" << endl;
		cout << "#>  2 ������� -50���   <#" << endl;
		cout << "#>  3 ������� -15 ���  <#" << endl;
		cout << "#>  4 ������� -45 ���  <#" << endl;
		cout << "#>                     <#" << endl;
		cout << "#>--------�����--------<#" << endl;

		int q = 32;
		int w = 23;
		int e = 54;
		int r = 34;

		int kil;
		cout << "�������" << endl;
		cin >> kil;
		int y;
		cout << "���� ";
		cin >> y;
		switch (y)
		{
		case 1:
		{
			cout << "sum" << kil * 20 << endl;
			cout << "ostatok" << q - kil << endl;
		}break;
		case 2:
		{
			cout << "sum" << kil * 50 << endl;
			cout << "ostatok" << w - kil << endl;
		}break;
		case 3:
		{
			cout << "sum" << kil * 15 << endl;
			cout << "ostatok" << e - kil << endl;
		}break;
		case 4:
		{
			cout << "sum" << kil * 45 << endl;
			cout << "ostatok" << r - kil << endl;
		}break;
		default:
			break;
			system("pause");
		}
	}


	return 0;
}