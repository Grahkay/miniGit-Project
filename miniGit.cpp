#include "miniGit.hpp"
#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;
//namespace fs = std::filesystem;


void miniGit::initialize()
{
    //fs::create_directory(".miniGit");
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
    cout << "Enter a file name:" << endl;
    string fileName;
    cin >> fileName;
    //check whether the file exists in the current directory
    if (curr == NULL)
    {
        cout << "Directory not initialized." << endl;
        return;
    }


    //search SLL to see if file has been added
    bool exists = false;
    singlyNode *search = curr->head;
    while (search != NULL)
    {
        if (search->fileName == fileName)
        {
            exists = true;
            break;
        }
    }
    //if file does not exist
    if (exists == false)
    {
        //create a new SLL Node
        singlyNode *addFile = new singlyNode;
        addFile->fileName = fileName;
        addFile->fileVersion = fileName + "_00";
        addFile->version = 0;
        addFile->next = NULL;

        //adds the node to the correct spot in the SLL
        if (curr->head == NULL)
        {
            curr->head = addFile;
        }
        else
        {
            singlyNode *addHere = curr->head;
            while (addHere->next != NULL)
            {
                addHere = addHere->next;
            }
            addHere->next = addFile;
            cout << "File added." << endl;
            return;
        }
    }
    //file already exists
    else if (exists == true)
    {
        cout << "File already exists" << endl;
        return;
    }
}


void miniGit::removeFile()
{
    //prompt user to enter a file name
    cout << "Enter a file name:" << endl;
    string fileName;
    cin >> fileName;

    //make sure there are files to check
    if(curr == NULL)
    {
        cout << "No files in the repository" << endl;
        return;
    }

    singlyNode *search = new singlyNode;
    search = curr->head;
    //if the node to be deleted is the head
    if (search->fileName == fileName)
    {
        search = curr->head->next;
        delete curr->head;
        curr->head = search;
        cout << "File deleted." << endl;
        return;
    }
    else
    {
        while (search->fileName != fileName && search->next != NULL)
        {
            search = search->next;
        }
        //reached the end of the list and haven't found the file
        if (search->fileName == fileName)
        {
            singlyNode *temp = search;
            temp->next = search->next;
            delete search;
            cout << "File deleted." << endl;
            return;
        }
        else if (search->fileName != fileName && search->next == NULL)
        {
            cout << "File not found" << endl;
            return;
        }

    }

    cout << "Check the code you shouldn't get here." << endl;
    return;
}

void miniGit::commitChange()
{
    if (curr == NULL)
    {
        cout << "Empty directory" << endl;
        return;
    }
    //traverse SLL
    singlyNode *traverse = curr->head;
    while (traverse != NULL)
    {

    }

    //create a new node for the DLL
    doublyNode *newNode = new doublyNode;
    newNode->commitNumber = curr->commitNumber +1;
    newNode->previous = curr;
    newNode->next = NULL;
    newNode->head = NULL;
    counter++;

    //new node becomes the next node
    curr->next = newNode;

    //copy all the files to the new commit
    singlyNode *copy = curr->head;
    singlyNode *newSLL = newNode->head;
    while (copy != NULL)
    {
        
        //copyFile->fileName = curr;
    }
}

void miniGit::checkout()
{
    cout << "Warning: you will lose local changes if you checkout without making a commit with your current changes." << endl;
    cout << "Enter -1 if you do not want to checkout:" << endl;
    cout << "Enter a commit number:" << endl;
    int num; 
    cin >> num; 
    int num2 = 0;
    //make sure the number is valid
    if (num < 0 || num > counter)
    {
        cout << "Invalid commit number" << endl;
        return;
    }

    //search the DLL for the node with the matching commit number;
    doublyNode *search = dHead;
    while (search != NULL)
    {
        if (search->commitNumber == num)
        {
            break;
        }
        search = search->next;
        num2++;
    }
    //copy the variables from the found node to the current node
    curr->commitNumber = num2;
    curr->head = search->head;
    curr->next = search->next;
    curr->previous = search->previous;

    //copy of all files in the SLL
    singlyNode *copy = new singlyNode;
    singlyNode *SLLsearch = search->head;
    copy->next == NULL;
    copy = curr->head;
    while (SLLsearch != NULL)
    {
        copy = SLLsearch;
        SLLsearch = SLLsearch->next;
        copy = copy->next;
    }
}
