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


void miniGit::removeFile()
{
    // singlyNode* prev;
    // bool found = search(*head, filename);
    
    // if(found == true)
    // {
    //     while (node->next != NULL)
    //     {
    //         node->data = node->next->fileName;//check if fileName is that right thing to put
    //         prev = node;
    //         node = node->next;
    //     }
    //     prev->next = NULL;
    //     cout << "File Deleted." << endl;
    // }
    // else
    // {
    //     cout << "File not found in current directory." << endl;
    // }
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
