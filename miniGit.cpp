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
    int *commitNumber = 0;
}

void miniGit::RemoveRepostitory(string repname)
{
}

void miniGit::AddFile(string filename)
{
    
}

void miniGit::RemoveFile(singlyNode* node, string filename)
{
    singlyNode* prev;
    bool found = search(*head, filename);
    
    if(found == true)
    {
        while (node->next != NULL)
        {
            node->data = node->next->fileName;//check if fileName is that right thing to put
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
        cout << "File Deleted." << endl;
    }
    else
    {
        cout << "File not found in current directory." << endl;
    }
}

void miniGit::CommitChange()
{
    
}

int miniGit::counter(int &commitNumber)
{
    commitNumber++;
    return commitNumber;
}
