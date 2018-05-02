#include "student.h"
#include <iostream>
#include <string>

using namespace std;

string student::fullName()
{
string wholeName = firstName;
wholeName.append(" ");
wholeName.append(lastName);
return wholeName;
}

void student::setName(string x, string y)
{

firstName = x;
lastName = y;

}
