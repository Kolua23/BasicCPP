#include<iostream>
#include<string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	const int size = 4;
	string Posluga[size] = { "стандарт","стандорт плюс","ультра","голд" };
	double Prise[size] = { 150,200,350,500 };
	int kil[size] = { 10,10,10,10 };
	double sum[size] = { 0 };
	for (int i = 0; i < size; i++)
		cout << Posluga[i] << Prise[i] << "\tгрн " << kil[i] << "шт.\n";
	cout << "товар\n";
	int n = 0;
	double bal = 0;
	double sun = 0;
	for (int j = 1; j <= 3; j++) {
		cout << "покупка" << j << "\n";

		for (int i = 0; i < size; i++) {
			cout << i + 1 << "\t" << Posluga[i] << Prise[i] << "\tгрн " << "шт.\t";
			cin >> n;
			if (kil[i] < n)
				cout << "залишилось\t" << kil[i] << "к≥льк≥сть\t";
			cin >> n;
			kil[i] = kil[i] - n;
			sum[i] = Prise[i] * n;
			continue;

		}
		for (int i = 0; i < size; i++) {
			sun += sum[i];
		}
		cout << "за м≥с€ць" << sun;
	}
	return 0;
}