#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "miniGit.cpp"
using namespace std;

void PrintMenu()
{
    //initialize, add, remove, commit, checkout, quit
    cout << "Menu options" << endl;
    cout << "1 - Initialize" << endl;
    cout << "2 - Add" << endl;
    cout << "3 - Remove" << endl;
    cout << "4 - Commit" << endl;
    cout << "5 - Checkout" << endl;
    cout << "6 - Leave the program" << endl;
    cout << endl;
    cout << "Enter your selection: " << endl;
}

int main()
{
    int userInput;
    string changeMind;
    
    
    cout << "Welcome to miniGit! We recommend you create a repository first. Please enter your selction below." << endl;
    PrintMenu();
    cin >> userInput;
    miniGit a;

    while(userInput != 6)
    {
        switch(userInput)
        {
            case 1:
                a.initialize();
            case 2:
                a.addFile();
            case 3: 
                a.removeFile();
            case 4:
                a.commitChange();
            case 5:
                a.checkout();
            case 6:
                break;
            default:
                cout << "Invalid option. Please select a valid option." << endl;
        }
    }
    //delete and clear everything
    cout << "Thank you for visting. Goodbye!" << endl;

    return 0;
}
