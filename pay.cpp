// Anthony Galustyan
// Section 3

#include <iostream>
#include <string>
#include <fstream>
//#include "person.h"
#include <vector>
#include "person.cpp"

using namespace std;

int readData (vector<Person> &employees)
{
    string fname;
    string lname;
    float hours;
    float rate;
    string line;
    string test = " ";
    //int N = 0;
    int i = 0;

    ifstream input;

    input.open("input.txt");


    if (input.is_open())
    {

        while (!input.eof()){
            input >> fname >> lname >> hours >> rate;

            employees.emplace_back(fname, lname, hours, rate);
           /* array[i].setFirstName(fname);
            array[i].setLastName(lname);
            array[i].setHoursWorked(hours);
            array[i].setPayRate(rate);*/

            //cout << fname << lname << hours << rate << endl;
            //cout << employees.at(i).getFirstName() << endl;


            i++;
            //N++;
        }


        /*
        for (int i = 0; i < 20; i++)
        {
            input >> fname >> lname >> hours >> rate;
            array[i].setFirstName(fname);
            array[i].setLastName(lname);
            array[i].setHoursWorked(hours);
            array[i].setPayRate(rate);
            //cout << fname << lname << hours << rate << endl;
        } */
    }

    input.close();

    employees.pop_back();

    return employees.size();

}

void writeData (vector<Person> employees, int N)
{
    string fname;
    string lname;
    float hours;
    float rate;

    ofstream output("output.txt");
    if (output.is_open())
    {


        for (int i = 0; i < N-1; i++)
        {
            //cout << employees.at(i).fullName();
            output << employees.at(i).fullName() << " ";
            output << employees.at(i).totalPay() << endl;
        }

    }

}

int main() {

    int N;

    vector<Person> employees;
    //Person employees[20];


    N = readData(employees);
    writeData(employees, N);


    return 0;
}
