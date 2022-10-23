#include "addressBook.h"

int maincounter = 0;
int getcount = 0; 
using namespace std;
void addPerson(struct person &add);
void getPerson(struct person &get);
void printStruct(struct person &print);
void findPerson(struct person &find);
void findPerson(struct person &findlast, char &last, char &first);
 
person bookArray[MAXPEOPLE];
 
int main()
{
	char *last = new char[20];
	char *first = new char[20];
	char choice;
	person add;
	person getStruct;
	person findStruct1;
	person findStruct2;
	
	cout << "Address Book" << endl << endl;
 
	while (true)
		{	
			cout << endl << " Enter 1 to add to the address book. " <<endl;
			cout << " Enter 2 to find a person. " << endl;
			cout << " Enter 3 to find a person by last name." << endl;
			cout << " Enter 4 to find a person by last name, first name. " << endl;
			cout << " Enter any other key to quit. " << endl;
			cout << endl << "Please make a selection: " << endl;
			cin >> choice;
 
			switch(choice)
			{
 
				case '1':
					
					cout << "Enter First Name" << endl;
					cin >> add.first;
					cout << "Enter Last Name" << endl;
					cin >> add.last;
					cout << "Enter Address" << endl;
					cin.getline(add.address, 40); 
					addPerson(add);	
					break;
 
				case '2':
					cout << endl << "Getting the next person in the address book: " << endl << endl;
					getPerson(getStruct);
					printStruct(getStruct);
					break;
				case '3':
					cout << "Please enter the last name to search for: " << endl;
					cin >> last;
					findPerson(findStruct1, last);
					
					break;
				
				case '4':
					cout << "Please enter the last name and then the first name to search for: " << endl;
					cout << "Last name: ";
					cin >> last;
					cout << "First name: ";
					cin >> first;
					findPerson(findStruct2, last, first);
					break;  
 
				default:
					return 0;
					break;
			}
		}
return 0;
}
void addPerson(struct person &add) 
	{
		bookArray[maincounter]=add;
		maincounter++; 
	}
void getPerson(struct person &get)
	{
		if (getcount > maincounter)
			{
				getcount = 0;
				get = bookArray[getcount];
				getcount++;
			}
		else
			{
				get = bookArray[getcount];
				getcount++;
			}
	} 
 
void findPerson (struct person &find, char &last)
	{
		for (int i=0; i<=MAXPEOPLE; i++)
		{
			if (find == find.first)
				{

				}
			else
				{
					cout << "Sorry, that person was not found " << endl;
				}
		}
	}
 
 
 
 
 
void findPerson (struct person &findlast, char &last, char &first)
	{
		for (int i=0; i<=MAXPEOPLE; i++)
			{
				if (findlast.last == last || findfirst.first == first)
					{
					printStruct(findlast)
					}
				else
					{
						cout << "Sorry, that person was not found " << endl;
					}
			}			
	}
 
 
void printStruct(struct person &print)
{
cout << print.first << " " << print.last << endl;
cout << print.address << endl;
}
