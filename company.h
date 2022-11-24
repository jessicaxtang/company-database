// company.h

#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Company{
private:
    string name;
    string hq_city;
    string hq_state;
    int founding_year;
    int employee_size;

public:
    void set_name(string new_name);
    void set_hq_city(string new_city);
    void set_hq_state(string new_state);
    void set_founding_year(int year);
    void set_employee_size(int new_size);
};

#endif