#include "contact.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class ADBook
{
private:

    vector <Contact> book;

public:

    static ADBook& getInstance() {
        static ADBook  instance;
        return instance;
    }

    void add(const Contact&);
    static bool CompareNames(const Contact&, const Contact&);
    static bool CompareAges(const Contact&, const Contact&);
    static bool CompareAges2(const Contact&, const Contact&);
    static bool CompareNames2(const Contact&, const Contact&);
    void sortirovka(int,int);
    void print();
};
