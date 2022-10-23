#include <iostream>
#include<array>  //array header file included for using array class
#include <string>
#include "Header.h"

int main()
{
   int count = 0;
   int record, age, choice;
   long long int phone;
   string first, last;
   int size = 10;
   //used array class instead of basic array
   array<Record,10> rec;
   cout<<"              
   while (1)
   {
       menu();
       cout << " Enter choice: ";
       cin >> choice;
       if (choice == 1)
       {
           if (count == 1000)
           {
               cout << "Contacts full" << endl;
           }
           else
           {
               //if choice to enter contact, gather information
               cout << "Enter record number: ";
               cin >> record;
               cout << "Enter contact first name: ";
               cin.ignore();
               getline(cin, first);

               cout << "Enter contact last name: ";
               cin.ignore();
               getline(cin, last);

               cout << "Enter contact age: ";
               cin >> age;

               cout << "Enter contact phone number: ";
               cin >> phone;
               rec[count].setData(record, first, last, age, phone);
               count++;
           }
       }
       else if (choice == 2)
       {
           //if choice 2, display contact records
           if (count == 0)
           {
               cout << "No contacts" << endl;
           }
           else
           {
               for (int i = 0; i < count; i++) {
                   rec[i].display();
               }
           }
       }
       else if (choice == 3)
       {
           //end program
           return 0;
       }
       else
       {
           //if invalid menu option is entered
           cout << "Please enter 1-3" << endl;
       }

   }
   return 0;
} 
