#include<iostream>
using namespace std;

class cust
{
	int id;
	char name[50];
	int age;
	char telecom_brand_name[50];
	double mobile_no;
	char city[50];
	int sim_validity;
	
	public:
		set()
		{
			cout << "Enter id :- " ;
			cin >> id;
			cout << "Enter name :- " ;
			cin >> name;
			cout << "Enter age :- " ;
			cin >> age;
			cout << "Enter telecom brand name :- " ;
			cin >> telecom_brand_name;
			cout << "Enter mobile number :- " ;
			cin >> mobile_no;
			cout << "Enter city :- " ;
			cin >> city;
			cout << "Enter simcard validity (in years) :- " ;
			cin >> sim_validity;
		}
		
		get()
		{
			cout << endl << "Id :- " << id << endl ;
			cout << "Name :- " << name << endl ;
			cout << "Age :- " << age << endl ;
			cout << "Telecom brand name :- " << telecom_brand_name << endl ;
			cout << "Mobile number :- " << mobile_no << endl ;
			cout << "city :- " << city << endl ;
			cout << "Simcard validity :- " << sim_validity << endl ;
		}
};

int main()
{
	int i;
	
	cust v[5];
	
	for(i=0;i<5;i++)
	{
		v[i].set();
	}
	
	for(i=0;i<5;i++)
	{
		v[i].get();
	}
	
	return 0;	
}
