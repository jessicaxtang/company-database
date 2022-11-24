// company.cpp

#include "menu.h"
#include "company.h"
#include "database.h"

void Company::set_name(string new_name){
    name = new_name;
}

void Company::set_hq_city(string new_city){
    hq_city = new_city;
}

void Company::set_hq_state(string new_state){
    hq_state = new_state;
}

void Company::set_founding_year(int new_year){
    founding_year = new_year;        
}

void Company::set_employee_size(int new_size){
    employee_size = new_size;        
}