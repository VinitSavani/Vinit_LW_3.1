#include<iostream>
using namespace std;

class student
{
	int id;
	char name[50];
	int age;
	char course[50];
	char email[50];
	char city[50];
	char collage[50];
	
	public:
	setdata()
	{
		cout << endl << "Enter ID :- " ;
		cin >> id;
		cout << "Enter name :- " ;
		cin >> name;
		cout << "Enter age :- " ;
		cin >> age;
		cout << "Enter course :- " ;
		cin >> course;
		cout << "Enter email :- " ;
		cin >> email;
		cout << "Enter city :- " ;
		cin >> city;
		cout << "Enter collage :- " ;
		cin >> collage;
	}
	
	getdata()
	{
		cout << endl << "Enter ID :- " << id << endl ;
		cout << "Enter name :- " << name << endl ;
		cout << "Enter age :- " << age << endl ;
		cout << "Enter course :- " << course << endl ;
		cout << "Enter email :- " <<  email << endl ;
		cout << "Enter city :- " << city << endl ;
		cout << "Enter collage :- " << collage << endl ;
	}
};

int main()
{
	student s[5];
	
	int i;
	
	for(i=0;i<5;i++)
	{
		s[i].setdata();
	}
	
	for(i=0;i<5;i++)
	{
		s[i].getdata();
	}
	
	return 0;
}
