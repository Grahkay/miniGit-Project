#include "miniGit.hpp"
#include <iostream>
#include <filesystem>
using namespace std;

bool miniGit::search()
{
    // singlyNode* curr = search->head;
    // while(curr != NULL)
    // {
    //     if(curr->fileName == file)
    //     {
    //         return true;
    //     }
    //     curr = curr->next;
    // }
    return false;
}

void miniGit::initialize()
{
    //need to figure out filesystem stuff
    //creates a DLL and initializes variables
    counter = 0;
    dHead->commitNumber = counter;
    counter++;
    dHead->head = NULL;
    dHead->previous = NULL;
    dHead->next = NULL;
}

void miniGit::addFile()
{
    // bool unique = search(head, filename);// also doesn't search for unique fileversion maybe a seperate function for this
    // while(unique != true)
    // {
    //     cout << "That name is already in the directory. Please chose a different name" << endl;
    //     cin >> filename;
    //     unique = search(head, filename);
    // }
    // if(unique == true)
    // {
    //     singlyNode* newnode = new Node(); // doesn't include fileversion for now
    //     newnode->fileName = filename; 
    //     newnode->next = prevnode->next;  
    //     prevnode->next = newnode;
    // }
}


void miniGit::removeFile(string fileName)
{
    // ask user for filename

    // make sure the system is initialized
    if (dHead == nullptr)
    {
        cerr << endl << "miniGit not initialized" << endl;
        return;
    }

    // checking for empty commit list
    if (dHhead == nullptr)
    {
        cerr << endl << "ERROR: Cannot remove file - no files have been added to commit list" << endl;
        return;
    }

    fileNode* currFile = nullptr;
    fileNode* nextFile = head;

    while (nextFile != nullptr)
    {
        if (nextFile->fileName == fileName)
        {

            if (nextFile == head)
            {
                //if the head is to be deleted
                head = nextFile->next;
                delete nextFile;
                nextFile = nullptr;
            }
            // file to be deleted is somewhere in the middle or at the end
            else
            {
                currFile->next = nextFile->next;
                delete nextFile;
                nextFile = nullptr;
            }

            cout << endl << "File: " << fileName << " was deleted." << endl;
            return;
        }
        else
        {
            currFile = nextFile;
            nextFile = nextFile->next;
        }
        
    }

    // here we can assume that the user has entered an invalid name
    cerr << endl << "ERROR: Please enter an existing file name to remove" << endl;
    return;
}

void miniGit::commitChange()
{

}

int miniGit::counter()
{
    // commitNumber++;
    // return commitNumber;
    return 0;
}

void miniGit::checkout()
{
    // int input;

    // cout << "Enter commit number: " << endl;
    // cin >> input;
    // //if(valid commit)
    //     //overwrite files by files in directory
    // //doesn't have a function in .cpp and .hpp yet
}
