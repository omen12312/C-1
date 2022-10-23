#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Record
{
private:
   //private variables
   int age;

   long long int phoneNumber;

   int recordNumber;

   string firstName, lastName;

   //public record

public:
   Record();
   Record(int, string, string, int, int);
   void display();
   void setData(int, string, string, int, int);
};
Record::Record()
{
   recordNumber = 0;
   age = 0;
   phoneNumber = 0;

}
Record::Record(int rec, string first, string last, int ag, int phone)
{

   recordNumber = rec;
   firstName = first;
   lastName = last;
   age = ag;
   phoneNumber = phone;
}
void Record::setData(int rec, string first, string last, int ag, int phone)
{
   recordNumber = rec;

   firstName = first;

   lastName = last;

   age = ag;

   phoneNumber = phone;
}
void Record::display()
{
   cout<<"\n-------------------- Contact Information -------------------- \n";

   cout << "Record number: " << recordNumber << endl;

   cout << "First name: " << firstName << endl;

   cout << "Last name: " << lastName << endl;

   cout << "Age: " << age << endl;

   cout << "Phone number: " << phoneNumber << endl;
}
void menu()
{
   cout<<"\n------------------------ Selection Menu ----------------------- \n";

   cout << " Press 1 to add contact" << endl;

   cout << " Press 2 to display contacts" << endl;

   cout << " Press 3 to end program" << endl;
}
