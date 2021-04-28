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
        doublyNode *curr;
        int counter;

    public:
        void initialize();
        void addFile();
        void removeFile();
        void commitChange();
        void copy();
        void checkout();
};

#endif
