#include "miniGit"
#include <iostream>
using namespace std;

bool miniGit::search(singlyNode* head, string file)
{
    singlyNode* curr = head;
    while(curr != NULL)
    {
        if(curr->key = file)
        {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

void miniGit::AddRepostitory(string repname)
{
    int commitNumber = 0;
    //add something else i believe
}

void miniGit::RemoveRepostitory(string repname)
{
    //delete repository and all files in it
}

void miniGit::AddFile(string filename, string file version)
{
    bool unique = search(*node, filename);// also doesn't search for unique fileversion maybe a seperate function for this
    while(unidue != true)
    {
        cout << "That name is already in the directory. Please chose a different name" << endl;
        cin >> fileName;
        unique = search(*node, filename);
    }
    if(unique == true)
    {
        singlyNode* newnode = new Node(); // doesn't include fileversion for now
        newnode->filename = newfilename; 
        newnode->next = prevnode->next;  
        prevnode->next = newnode;
    }
}

void miniGit::AddFile(string filename, string fileVersion)
{
    bool unique = search(head, filename);// also doesn't search for unique fileversion maybe a seperate function for this
    while(unique != true)
    {
        cout << "That name is already in the directory. Please chose a different name" << endl;
        cin >> filename;
        unique = search(head, filename);
    }
    if(unique == true)
    {
        singlyNode* newnode = new Node(); // doesn't include fileversion for now
        newnode->fileName = filename; 
        newnode->next = prevnode->next;  
        prevnode->next = newnode;
    }
}


void miniGit::CommitChange()
{
    search(*node, filename);
    
}

int miniGit::counter(int &commitNumber)
{
    commitNumber++;
    return commitNumber;
}
