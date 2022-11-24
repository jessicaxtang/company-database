#include "menu.h"
#include "company.h"
#include "database.h"

int main(){

    Menu menu;
    //Database database;
    
    bool quit = false;
    int choice; 

    while (!quit){
        cout << "Welcome to the Company Database!\n";
        cout << "--------------------------------\n\n";
        cout << "1) Add a company.\n";
        cout << "2) Find a company.\n";
        cout << "3) Delete a company.\n";
        cout << "4) List companies.\n";
        cout << "5) Quit.\n\n";
        cout << "Enter a number of your choice: ";

        cin >> choice;
        while (choice < 1 || choice > 5){
            cout << "Enter a valid option (1 to 5): ";
            cin >> choice;
        }

        if (choice == 1){
            menu.add_company();
            continue;
        }
        if (choice == 2){
            menu.find_company();
            continue;
        }
        if (choice == 3){
            menu.delete_company();
            continue;
        }
        if (choice == 4){
            menu.list_companies();
            continue;
        }
        if (choice == 5){
            quit = true;
        }
    }

}
