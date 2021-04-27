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
    cout << "1 - Add file" << endl;
    cout << "2 - Remove file" << endl;
    cout << "3 - Commit changes of a file" << endl;
    cout << "4 - Checkout previous versions of a file" << endl;
    cout << "5 - Leave the program" << endl;
    cout << endl;
    cout << "Enter your selection: " << endl;
}

int main()
{
    int userInput;
    string filename;
    int choice;
    char >> repo
    
    cout << " Welcome to miniGit! wouild you like to initalize a repository first?\n Y or N" << endl;
    cin >> repo;
    if(repo == 'Y')
    {
        a.initialize();
    }
    else if(repo == 'N')
    {
        cout << "Thank you for visting. Goodbye!" << endl;
    }
    else
    {
        cout << "Invalid option. Please select a valid option." << endl;
        cin >> repo;
    }
    
    cout << "Please enter your selction below." << endl;
    PrintMenu();
    cin >> userInput;
    miniGit a;

    while(userInput != 6)
    {
        switch(userInput)
        {
            case 1:
                cout << "Enter file name to add: " << endl;
                cin >> filename;
                a.addFile(filename);
                PrintMenu();
                cin >> userInput;
            case 2:
                cout << "Enter file name to remove: " << endl;
                cin >> filename;
                a.removeFile(filename);
                PrintMenu();
                cin >> userInput;
            case 3: 
                a.commitChange();
                PrintMenu();
                cin >> userInput;
            case 4:
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
                cin >> userInput
            case 5:
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
