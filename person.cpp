#include "person.h"

Person::Person(string fName, string lName, float rate, float hours)
{
    lastName = lName;
    firstName = fName;
    payRate = rate;
    hoursWorked = hours;
}


string Person::getFirstName() {
    return firstName;
}


string Person::getLastName()
{
    return lastName;
}
float Person::getPayRate()
{
    return payRate;
}
float Person::getHoursWorked()
{
    return hoursWorked;
}
void Person::setFirstName(string fName)
{
    firstName = fName;

}
void Person::setLastName(string lName)
{
    lastName = lName;

}
void Person::setPayRate(float rate)
{
    payRate = rate;

}
void Person::setHoursWorked(float hours)
{
    hoursWorked = hours;

}
float Person::totalPay()
{
    return payRate * hoursWorked;

}
string Person::fullName()
{
    return firstName + " " + lastName;

}
