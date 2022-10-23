#include <iostream>
#include "addressBook.h"

using namespace std;

addressBook::addressBook()
: head(0), tail(-1)
{
    

}
addressBook::addressBook(const person &p)
: head(0), tail(-1)
{
    addPerson(p);


}
addressBook::addressBook(const person p[], int size)
: head(0), tail(-1)
{
    for(int i = 0; i < size; i++)
        addPerson(p[i]);

}
addressBook::addressBook(char *fName, char *lName, char *address)
: head(0), tail(-1)
{

    person tmp;
    strcpy(tmp.fName, fName);
    strcpy(tmp.lName,lName);
    strcpy(tmp.Address, address);
    addPerson(tmp);
}

bool addressBook::addPerson(const person &p)
{
    if(head < MAXADDRESS)
    {
        people[head] = p;
        head++;
        if(tail == -1)
            tail++;
        return true;
    }
    return false;
}
bool addressBook::getPerson(person &p)
{
    if(tail >=0)
    {
        if(tail >= MAXADDRESS)
            tail = 0;
        p = people[tail];
        tail++;
        return true;
    }
    return false;
}
bool addressBook::findPerson(char *lastName, person &p)
{
    for(int i = 0; i < head; i++)
    {
        if(!stricmp(people[i].lName, lastName))
        {
            p = people[i];
            return true;
        }
    }
    return false;
}
bool addressBook::findPerson(char *lastName, char *firstName, person &p)
{
    for(int i = 0; i < head; i++)
    {
        if(!stricmp(people[i].lName, lastName) && !stricmp(people[i].fName, firstName))
        {
            p = people[i];
            return true;
        }
    }
    return false;
}
void addressBook::printBook()
{

    for(int i = 0; i < head; i++)
    {
        cout << people[i].fName << "\t" << people[i].lName << "\t" << people[i].Address << endl;
    }

}
void addressBook::sort()
{
person temp;

     for(int i = 0; i < head; i++)
     {
         for (int j=0; j < head; j++)
         {
              if (stricmp(people[j+1].lName, people[j].lName) < 0)      
              { 
                    temp = people[j];           
                    people[j] = people[j+1];
                    people[j+1] = temp;
              }
          }
     }
}
 
ostream& operator<<(ostream& output, const Point& p) {
   output << "(" <<  p.x << ", " << p.y <<")";
   return output;  
}
 
bool& operator+= (const person p);
{
    return addPerson(const p);
}

person& operator() (int i)
{
    return people[i];
}
