#include "message.h"
#include "multimediamessage.h"

#include <iostream>
#include <cstdlib>

using namespace std;

// Header
void header()
{
    system("clear");
    cout << "==============================\n";
    cout << setw(30) << left << "\tYour Message" << endl;
    cout << "==============================\n";
}

// Wait for any char
void getChar()
{
    cout << "[Press ENTER to continue]" << endl;
    getchar();
}

// Get text from user
string getText()
{
    string text_str;
    do {
        header();
        cout << "Enter message:" << endl;
        getline(cin, text_str);
        cin.clear();
        if(!text_str.length()) {
            cout << "Incorrect! Your message can not be empty.";
            getChar();
        }
    }while(!text_str.length());

    return text_str;
}
// Get number from user
string getNumber()
{
    string no_str; // Reciver number
    do {
        header();
        cout << "Receiver (6 digits):" << endl;
        getline(cin, no_str);
        cin.clear();
        if(no_str.length() != 6) {
            cout << "Incorrect! Entered number has " << no_str.length() << "digits. Try again" << endl;
            getChar();
        }
    }while(no_str.length() != 6);

    return no_str;
}

// Get multimedia file from user path
string getFilePath()
{
    cout << ">>Enter path to multimedia file:";
    string path;
    getline(cin, path);
    cin.clear();
    return path;
}

// Get one/first character from input
char getOneChar()
{
    string line;
    getline(cin, line);
    return line[0];
}

int main()
{
    string text_message = getText();    // Get text message
    string no_message = getNumber();    // Get number to reciver

    // Add multimedia file question
    header();

    cout << "Convert to MMS ? [y/N]:\n";
    char choose = getOneChar();

    // If user want, create mms and show
    if(choose == 'y') {
        string file_path = getFilePath();
        MultimediaMessage *mms = new MultimediaMessage(no_message, text_message, file_path);
        header();
        mms->show();
        delete mms;
    }else {
        Message *sms = new Message(no_message, text_message);
        header();
        sms->show();
        delete sms;
    }
    return 0;
}
