#ifndef MINIGIT
#define MINIGIT
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

struct singlyNode
{
    string fileName;
    string fileVersion;
    singlyNode *next;
    int version;
};

struct doublyNode
{
    int commitNumber;
    singlyNode *head;
    doublyNode * previous;
    doublyNode * next;
};

class miniGit
{
    private:
        doublyNode *dHead;
        doublyNode *dTail;
        doublyNode *currcommit;

    public:
        minigit();
        ~minigit();
        bool search();
        void initialize();
        void addFile();// call memory? from SLL
        void removeFile();
        void commitChange();// def call memory
        void copy();
        int counter();
        void checkout();
};

#endif
