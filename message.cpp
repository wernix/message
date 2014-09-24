#include "message.h"

Message::Message(string no, string t) :
    timestemp(getTimestemp()),
    type("SMS")
{
    text = (t);
    number = (no);
}

// Show information about message
void Message::show()
{
    cout << repeat('=', 30) << endl;
    cout << "Type:\n" << "+/"+type+"/+" << endl;
    cout << "Timestemp:\n" << "+/"+timestemp+"/+" << endl;
    cout << "Receiver:\n" << "+/"+number+"/+" << endl;
    cout << "Message:\n" << "+/"+text+"/+" << endl;
    cout << repeat('=', 30) << endl;
}

// Simple func repeate one char
string Message::repeat(char ch, int i)
{
    string tmp;
    for(int a=0; a<i; a++)
        tmp.push_back(ch);
    return tmp;
}

// Func get current date, prepare and return
string Message::getTimestemp()
{
    time_t times;
    struct tm *now;

    time(&times);
    now = localtime(&times);
    char tmp[13];
    strftime(tmp, 13, "%H%M%S%d%m%y", now);

    return string(tmp);
}
