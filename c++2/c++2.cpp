#include<iostream>

using namespace std;

enum  enweekday {monday =1 , tusday =2,  wekensday =3 , thursday =4 , friday =5 , saturdy = 6, sunday =7};

void menuofmyweekday()
{

	cout << "***********************\n";
	cout << "\t week \t" << endl;
	cout << "***********************\n";
	cout << "chose your day\n";
	cout << "1 : monday \n";
	cout << "2 : tusday \n";
	cout << "3 :wekensday \n";
	cout << "4 :thursday \n";
	cout << "5 : friday \n";
	cout << "6 : saturday \n";
	cout << "7 :  sunday\n";
	cout << "***********************\n";
	cout << "your chose is :\n";



}

enweekday readmyweek()
{

	enweekday week;

	int we;

	cin >> we;

	return (enweekday)we;


}

string  myweek(enweekday week)
{


	switch (week)
	{
	case 1:
		cout << "monday\n";
		break;
	case 2:
		cout << "tusday\n";
		break;
	case 3:
		cout << "weknsday\n";
		break;
	case 4:
		cout << "thursday\n";
		break;
	case 5:
		cout << "friday\n";
		break;
	case 6:
		cout << "saturday\n";
		break;
	case 7:
		cout << "sunday\n";
		break;
	default:
		cout << "(:" << endl;
		break;
	}


	


}

int main()
{
	menuofmyweekday();

	cout << "today is" << myweek(readmyweek()) << endl;
	return 0;


}
