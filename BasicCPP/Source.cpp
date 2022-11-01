#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	int nam;
	cout << "nam is ";
	cin >> nam;
	switch (nam)
	{
	case 1:
	{
		int x;
		cout << "x>= ";
		cin >> x;
		int* xcopy = &x;
		cout << x << endl;
		cout << "x= " << *xcopy << endl;
		cout << "x>= ";
		cin >> x;
		cout << x << endl;
		cout << "x= " << *xcopy << endl;
		int max = 0;
		if (max < x)
		{
			max = x;
		}
		cout << "max=" << max;

		return 0;

	}break;
	case 2:
	{
		int x;
		cout << "x>= ";
		cin >> x;
		int* xcopy = &x;
		cout << x << endl;
		cout << "x= " << *xcopy << endl;
		int y;
		cout << "y>= ";
		cin >> y;
		int* ycopy = &y;
		cout << y << endl;
		cout << "y= " << *ycopy << endl;
		if (x > y)swap(x, y);
		if (y > x)swap(y, x);
		cout << x << "-" << y;
	}break;
	case 3:
	{
		int x;
		cout << "x>= ";
		cin >> x;
		int* xcopy = &x;
		cout << x << endl;
		cout << "x= " << *xcopy << endl;

		int y;
		cout << "y>= ";
		cin >> y;
		int* ycopy = &y;
		cout << y << endl;
		cout << "y= " << *ycopy << endl;
		int sum;
		int nam1;
		cout << "\n1=+\n 2=-\n 3=/\n 4=*\n";
		cin >> nam1;
		switch (nam1)
		{
		case 1:
		{

			sum = x + y;
			cout << x << "+" << y << "=" << sum;


		}break;
		case 2:
		{
			sum = x - y;
			cout << x << "-" << y << "=" << sum;

		}break;
		case 3:
		{
			sum = x / y;
			cout << x << "/" << y << "=" << sum;

		}break;
		case 4:
		{
			sum = x * y;
			cout << x << "*" << y << "=" << sum;

		}break;
		default:
			break;
		}

	}break;
	case 4:
	{
		srand(time(0));
		int size;
		cout << "Enter size:";
		cin >> size;
		int* arr = new int[size];
		int sum = 0;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 10;
			cout << arr[i] << "\t";
			sum += arr[i];
		}
		delete[] arr;

		cout << endl;
		cout << "sum>= " << sum;
	}break;
	case 5:
	{
		int x;
		cout << "x>= ";
		cin >> x;
		int* xcopy = &x;
		cout << x << endl;
		cout << "x= " << *xcopy << endl;
		if (x > 0)
		{
			cout << "+";
		}
		else if (x)
		{
			cout << "-";
		}
		else
			cout << "=";
	}break;
	default:
		break;
	}

}