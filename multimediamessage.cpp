#include "multimediamessage.h"

MultimediaMessage::MultimediaMessage(string no, string t, string fp) : Message(no, t)
{
    type = ("MMS");
    file_name = (fp);
}

// Get multimedia file from user path
string MultimediaMessage::getFilePath()
{
    cout << ">>Enter path to multimedia file:";
    string path;
    getline(cin, path);
    return path;
}

// Show information about message
void MultimediaMessage::show()
{
    Message::show();
    cout << "Multimedia file path:" << endl;
    cout << "+/"+file_name+"/+" << endl;
    cout << repeat('=', 30) << endl;
}
