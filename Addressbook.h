#pragma once
#ifndef ADDRESSBOOK
#define ADDRESSBOOK
// limit to 10 persons
const int MAXPEOPLE = 10;

struct person
   {
       char first[20];
       char last[20];
       char address[50];
   };

class addressBook
{
private:
person p[MAXPEOPLE];
int count;
public:
addressBook();

addressBook(cString fName, cString lName, cString phone) {
   self.addPerson(fName, lName, phone);
}

bool addPerson(const person p);
bool addPerson(const char *fName,const char *lName, const char *phone);
bool getPerson(person &p);
bool getPerson(char *fName, char *lName, char *Phone);

};

#endif
