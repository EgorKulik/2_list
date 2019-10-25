#include "contact.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include "address_book.h"
#include <string>

using namespace std;


int main(){

    Contact person;
    ADBook abook;
    char mark;
    int  mark2, mark3;

    cout << "Add contact?[y/n]" << endl;

    cin >> mark;

    if (mark == 'n')
    {
        cout << "The end" << endl;

    }
    else
        do{
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, person.name);
            cout << endl;

            cout << "Enter Age: ";
            cin >> person.age;
            cout << endl;

            cout << "Enter Number: ";
            cin >> person.number;
            cout << endl;

            abook.add(person);


            cout << "Add contact?[y/n]" << endl;
            cin >> mark;
        } while (mark != 'n');

        cout << "Sort? [1]Name. [2]Age. " << endl;
        cin >> mark2;

        cout << "How to sort? [1]In ascending order. [2]In descending order. " << endl;
        cin >> mark3;

        abook.sortabook(mark2, mark3);

        abook.print();

};
