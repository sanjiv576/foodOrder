/*
 * This menu-driven application is developed for ordering food from restaurants.
 * This can be improved like printing bill.
 */

#include <iostream>
#include <fstream>
#include <string>
#include "database.cpp"
#include "encapsulating.h"

using namespace std;

// for Menu
class Menu{
    // shows menu card only
public:
    void showMenu() {

        string menu;
        // reading the menu file
        ifstream file("menu.txt");

        while (getline(file, menu)){
            cout << menu << endl;
        }
        file.close();
    }

    // calculates the bill amount
public:
    int bill(char category, int item, int number){
        int payment;
        if (category == 'A' || category == 'B' || category == 'a' || category == 'b'){
            switch (item){
                case 1:
                    payment = number * 200;
                    break;
                case 2:
                    payment = number * 250;
                    break;
                case 3:
                    payment = number * 300;
                    break;
                case 4:
                    payment = number * 370;
                    break;
            }
        }
        else if (category == 'C' || category == 'c'){

            switch (item){
                case 1:
                    payment = number * 55;
                    break;
                case 2:
                    payment = number * 55;
                    break;
                case 3:
                    payment = number * 90;
                    break;
                case 4:
                    payment = number * 30;
                    break;
                case 5:
                    payment = number * 35;
                    break;
            }
        }
        return payment;
    }

    // takes the order
public:
    int order(){
        int payment;
        char category;
        int item;
        int number;
        cout << "Choose Category :" << endl;
        cin >> category;

        cout << "Choose food item : " << endl;
        cin >> item;

        cout << "How many ? " << endl;
        cin >> number;

        payment = bill(category, item, number);

        return payment;
    }
};

// for registration
class Registration{


public:
    void registerForm(){

        EncapsulationDone object;
        string name, address, contactNum, username, password;

        cout << "Enter first name only : " << endl;
        cin >> name;
        object.setName(name);

        cout << "Enter address : " << endl;
        cin >> address;
        object.setAddress(address);

        cout << "Enter phone number : " << endl;
        cin >> contactNum;
        object.setContactNum(contactNum);

        cout << "Enter username : " << endl;
        cin >> username;
        object.setUsername(username);

        cout << "Enter password : " << endl;
        cin >> password;
        object.setPassword(password);

        try {
            // creating and writing the details in the file
            string f("registerUser.txt");
            fstream file;
            file.open("registerUser.txt", ios_base::app);
            file << username + " " + password << endl;
            file.close();
        }
        catch (const char* error){
            cout << error << endl;
        }
    }

};

class Login{
public:
    bool loginView() {

        bool login, found;
        string username, password;

        cout << "\t\t\t\t--------------- LOGIN ---------------\n";
        cout << "Insert Username : " << endl;
        cin >> username;
        cout << "Insert Password : " << endl;
        cin >> password;

        string insertedData = username + " " + password;

        // retrieving/reading the data from the file
        string fetchData;
        ifstream file("registerUser.txt");

        while (getline(file, fetchData)) {

            if (fetchData == insertedData) {
                found = true;
                break;
            } else {
                found = false;
            }
        }
        if (found){
            cout << "Login successfully." << endl;
            login = true;
        }
        else {
            cout << "Failed to login." << endl;
            login = false;
            char option;
            cout << "Do you want to register ? Type y/n " << endl;
            cin >> option;
            if (option == 'Y' || option == 'y'){
                Registration reg;
                reg.registerForm();
            }
        }
        file.close();
        return login;
    }

};

class Homepage{
public:
    void mainMenu(){
        Menu menuCard;
        bool checkOut;
        char option;
        int totalAmount = 0;
        do {
            menuCard.showMenu();
            totalAmount += menuCard.order();
            cout << "Do you want to take order more ? Type y/n." << endl;
            cin >> option;
            if (option == 'n' || option == 'N'){
                checkOut = true;
            }
            else if (option == 'y' || option == 'Y'){
                checkOut = false;
            }
        } while(!(checkOut));
        cout << "Your total bill amount is Rs " << totalAmount << endl;
        cout << "Thank you for visiting." << endl;

    }
public:
    void showHome(){
        bool quit;
        do {
            int choice;
            cout << "\t\t\t\t--------------- HOMEPAGE ---------------\n";
            cout << "Press number for : \n";
            cout << "1- Login\n";
            cout << "2- Registration\n";
            cout << "3- Quit\n";
            cin >> choice;

            switch (choice) {

                case 1:
                    bool logOut;
                    char typed;
                    // creating instance of Login class
                    Login logged;
                    bool login;
                    do {
                        login = logged.loginView();
                    } while (!(login));

                    // after login successfully
                    mainMenu();

                    break;

                case 2:

                    Registration registration;
                    registration.registerForm();

                    // after registration, login page displays
                    Login log;
                    log.loginView();

                    //quit = true;
                    break;

                case 3:
                    quit = true;
                    break;

                default:
                    cout << "Wrong entry !! Try again" << endl;
                    break;

            }
        } while(!(quit));
    }
};

int main() {

    Homepage homepage;
    homepage.showHome();

    return 0;
}


