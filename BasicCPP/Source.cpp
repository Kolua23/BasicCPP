#include<iostream>
#include<Windows.h>

using namespace std;

int bros(int kubik);
int res();


int  main()
{
	char brosok;
	do
	{
		setlocale(LC_ALL, "ukr");
		srand(time(0));

		cout << "Іграєм ігру в кубіки ";
		cout << "\nдо 5 кидків ";
		cout << "\nначали...\n\n";


		int total_chel = 0;
		int total_komp = 0;

		do
		{
			cout << "для кидка натисніть + \n";
			cin >> brosok;
		} while (brosok != '+');

		int res_chel, res_komp;
		do
		{
			res_chel = res();
			cout << "резельтат: " << res_chel << "\n";
			res_komp = res();
			cout << "\nМій результат: " << res_komp << "\n";
		} while (res_chel == res_komp);

		if (res_chel > res_komp)
		{
			cout << "\nВи нач перш :(\n";
			for (int i = 1; i <= 5; i++)
			{
				do
				{
					cout << "Натисніть + для кидка\n";
					cin >> brosok;
				} while (brosok != '+');
				cout << "Вы:\n";
				total_chel += res();
				cout << "Я:\n";
				total_komp += res();
				cout << "наступний хід:\n";
			}
			cout << "вай обший результат за 5 кидків: " << total_chel << "\n";
			cout << "\nмій обший результат за 5 кидків: " << total_komp << "\n";
		}
		else
		{
			cout << "\nЯ начинаю першим :)\n";
			for (int i = 1; i <= 5; i++)
			{
				cout << "Я:\n";
				total_komp += res();
				do
				{
					cout << "Нажми + для броска\n";
					cin >> brosok;
				} while (brosok != '+');
				cout << "Ви:\n";
				total_chel += res();
				cout << "наступний хід:\n";
			}
			cout << "вай обший результат за 5 кидків: " << total_chel << "\n";
			cout << "\nмій обший результат за 5 кидків: " << total_komp << "\n";
		}

		if (total_chel == total_komp)
		{
			cout << "\n\nнічія!\n\n";
		}
		else
		{
			if (total_chel > total_komp)
			{
				cout << "\n\nВи виграли!\n\n";
			}
			if (total_chel < total_komp)
			{
				cout << "\n\nЯ виграв\n\n";
			}
		}
		cout << "\nдля продовженя натис +";
		cin >> brosok;
	} while (brosok == '+');
}

int bros(int kubik)
{

	switch (kubik)
	{
	case 1:
		cout << "#>---------<#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>    *    <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>---------<#" << endl;
		break;
	case 2:
		cout << "#>---------<#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>    *    <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>    *    <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>---------<#" << endl;
		break;
	case 3:
		cout << "#>---------<#" << endl;
		cout << "#>       * <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>    *    <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#> *       <#" << endl;
		cout << "#>---------<#" << endl;
		break;
	case 4:
		cout << "#>---------<#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>  *  *   <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>  *  *   <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>---------<#" << endl;
		break;
	case 5:
		cout << "#>---------<#" << endl;
		cout << "#> *     * <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#>    *    <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#> *     * <#" << endl;
		cout << "#>---------<#" << endl;
		break;

	case 6:
		cout << "#>---------<#" << endl;
		cout << "#> *     * <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#> *     * <#" << endl;
		cout << "#>         <#" << endl;
		cout << "#> *     * <#" << endl;
		cout << "#>---------<#" << endl;
		break;
	}
	return 0;
}
int res()
{
	int kubik_1 = rand() % 6 + 1;
	bros(kubik_1);
	int kubik_2 = rand() % 6 + 1;
	bros(kubik_2);
	int rezult;
	rezult = kubik_1 + kubik_2;
	cout << "Результат: " << rezult << "\n\n";
	return rezult;

}