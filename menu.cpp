// menu.cpp

#include "menu.h"
#include "company.h"
#include "database.h"

const int DATABASE_FIELDS = 5;

bool check_duplicate(Company company){
    int count = 0;
    for (int i = 0; i < companies.size(); i++){
        for (int j = 0; j < DATABASE_FIELDS; j++){
            if (companies[i][j] == company[j]){
                count++;
            }
        }
    }
    if (count == 5){
        return true;
    }
    else{
        return false;
    }
}

void Menu::add_company(){
    Company company;
    string name;
    string hq_city;
    string hq_state;
    int founding_year;
    int employee_size;

    cout << "\nADD A COMPANY\n--------------\n";

    cout << "Company name: ";
    cin >> name;
    company.set_name(name);

    cout << "Company headquarters city: ";
    cin >> hq_city;
    company.set_hq_city(hq_city);

    cout << "Company headquarters state: ";
    cin >> hq_state;
    company.set_hq_state(hq_state);

    cout << "Company founding year: ";
    cin >> founding_year;
    while (cin.fail() || founding_year > 2022 || founding_year < 1){
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a valid number (1 - 2022): ";
        cin >> founding_year;
    }
    company.set_founding_year(founding_year);
    cin.ignore(10000, '\n');
    
    cout << "Company employee size: ";
    cin >> employee_size;
    while (cin.fail() || employee_size < 0){
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a valid number (>= 0): ";
        cin >> employee_size;
    }
    company.set_employee_size(employee_size);
    cin.ignore(10000, '\n');

    if(check_duplicate(company)){ // already in database
        cout << "Your record is already in the database.\n"
    }
    else{
        companies.push_back(company);
        cout << "\nYour record has been added.\n";
    }
}

void Menu::find_company(){
    int search_data;

    cout << "\nFIND A COMPANY\n----------------\n";
    cout << "\nYou can search by: \n";
    cout << "1) Name of company\n2) City of Company Headquarters\n
             3) State of Company Headquarters\n 4) Founding year\n
             5) Company employee size\n\n6) Return to main menu\n
             Enter the number of your choice: ";
    cin >> search_data;
    while (choice < 1 || choice > 6){
        cout << "Enter a valid option (1 to 6): ";
        cin >> search_data;
    }
    
    if (choice == 1){

    }
    if (choice == 2){

    }
    if (choice == 3){

    }
    if (choice == 4){

    }
    if (choice == 5){
        
    }
    if (choice == 6){
        //TO DO: RETURN TO MAIN MENU
    }
}

void Menu::delete_company(){
    cout << "delete_company\n";
}

void Menu::list_companies(){
    cout << "list_company\n";
}
