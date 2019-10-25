#include "contact.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include "address_book.h"
#include <string>

using namespace std;

void ADBook::add(const Contact& data){

    book.push_back(data);

};

bool ADBook::CompareNames(const Contact& left, const Contact& right){

    return left.name > right.name;

};

bool ADBook::CompareAges(const Contact& left, const Contact& right){

    return left.age < right.age;

};

bool ADBook::CompareAges2(const Contact& left, const Contact& right){

    return left.age > right.age;

};

bool ADBook::CompareNames2(const Contact& left, const Contact& right){

    return left.name < right.name;

};

void ADBook::sortabook(int mark1,int mark2){

    if((mark1 == 1) && (mark2 == 1)){
        sort(book.begin(), book.end(), CompareNames);
    }

    if((mark1 == 1) && (mark2 == 2)){
        sort(book.begin(), book.end(), CompareNames2);
    }

    if((mark1 == 2) && (mark2 == 1)){
        sort(book.begin(), book.end(), CompareAges);
    }

    if((mark1 == 2) && (mark2 == 2)){
        sort(book.begin(), book.end(), CompareAges2);
    }
};

void ADBook::print(){
    int i = 0;

    for (i = 0; i < book.size(); i++){

        cout << book[i].name << endl;
        cout << book[i].age << endl;
        cout << book[i].number << endl;
        cout << endl;

    }
};
