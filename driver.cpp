#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

void PrintMenu()
{
    cout << "0 - Displays menu options" << endl;
    cout << "1 - Add a repository" << endl;
    cout << "2 - Adds a file to the repository" << endl;
    cout << "3 - Remove a repository" << endl;
    cout << "4 - Removes a file from the repository" << endl;
    cout << "5 - Commit your changes to the file" << endl;
    cout << "6 - Checkout previous versions of the repository" << endl;
    cout << "7 - Leave the program" << endl;
    cout << endl;
    cout << "Enter your selection: " << endl;
}

void Checkout()
{
    int input;

    cout << "Enter commit number: " << endl;
    cin >> input;
    //if(valid commit)
        //overwrite files by files in directory
    //doesn't have a function in .cpp and .hpp yet
}

void Commit()
{
    // traverse SLL in .cpp
    //if doesn't exist in directory
        //copy file to into directory, intialize
    //does exist in directory
        //check if it has been changed
            //not changed; break
            //changed, copy into directory, intialize and update SLL node
}

void RemoveFile()
{
    string fileName;

    cout << "Enter name of file you want to delete: " << endl;
    cin >> fileName;
    
    RemoveFile(*node, fileName);
}

void AddFile()
{
    string fileName;

    cout << "Enter name of file you want to create:" << endl;
    cin >> fileName;
    
    //some loop to check if file name is unique
        // new SLL node with fil, repository, version number
    // if not unique
        //cout << "That name is already in the directory. Please chose a different name" << endl;
        //cin >> fileName;
}

int main()
{
    int userInput;
    string changeMind;
    
    
    cout << "Welcome to miniGit! We recommend you create a repository first. Please enter your selction below." << endl;
    PrintMenu();
    cin >> userInput;
    
    while(userInput != 7)
    {
        switch(userInput)
        {
            case 0:
                PrintMenu();
                cin >> userInput;
            case 1:
                //add repository
                PrintMenu();
                cin >> userInput;
            case 2:
                void AddFile();
                PrintMenu();
                cin >> userInput;
            case 3: 
                //remove repository
                PrintMenu();
                cin >> userInput;
            case 4:
                void RemoveFile();
                PrintMenu();
                cin >> userInput;
            case 5:
                void Commit();
                PrintMenu();
                cin >> userInput;
            case 6:
                cout << "You will lose any local changes if you haven't made a commit. Do you want to continue?\n yes or no" << endl;
                cin >> changeMind;
                if(changeMind == "yes" || changeMind =="Yes")
                {
                    void Checkout();
                }
                PrintMenu();
                cin >> userInput;
            case 7:
                break;
            default:
                cout << "Invalid option. Please slect a valid option." << endl;
                PrintMenu();
                cin >> userInput;
        }
    }
    //delete and clear everything
    cout << "Thank you for visting. Goodbye!" << endl;

    return 0;
}
