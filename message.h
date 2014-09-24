#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <iomanip>

using namespace std;

class Message
{
protected:
    string repeat(char ch, int i);
    string getTimestemp();
    string timestemp;
    string number;
    string text;
    string type;
public:
    Message(string no, string t);
    virtual void show();
};

#endif // MESSAGE_H
