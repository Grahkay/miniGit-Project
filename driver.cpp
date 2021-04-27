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
    cout << "1 - Initialize repository" << endl;
    cout << "2 - Add file" << endl;
    cout << "3 - Remove file" << endl;
    cout << "4 - Commit" << endl;
    cout << "5 - Checkout" << endl;
    cout << "6 - Leave the program" << endl;
    cout << endl;
    cout << "Enter your selection: " << endl;
}

int main()
{
    int userInput;
    string filename;
    int choice;
    
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
                PrintMenu();
                cin >> userInput;
            case 2:
                cout << "Enter file name to add: " << endl;
                cin >> filename;
                a.addFile(filename);
                PrintMenu();
                cin >> userInput;
            case 3: 
                cout << "Enter file name to remove: " << endl;
                cin >> filename;
                a.removeFile(filename);
                PrintMenu();
                cin >> userInput;
            case 4:
                a.commitChange();
                PrintMenu();
                cin >> userInput;
            case 5:
                cout << "You will lose changes that you have not commited. Continue?\n 1 - Yes\n";
                cin >> choice;
                if(choice == 1)
                {
                    a.checkout();
                }
                else
                {
                    break;
                }
                PrintMenu();
                cin >> userInput;
            case 6:
                break;
            default:
                cout << "Invalid option. Please select a valid option." << endl;
                PrintMenu();
                cin >> userInput;
        }
    }
    //delete and clear everything
    cout << "Thank you for visting. Goodbye!" << endl;

    return 0;
}
