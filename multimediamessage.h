#ifndef MULTIMEDIAMESSAGE_H
#define MULTIMEDIAMESSAGE_H

#include "message.h"

class MultimediaMessage : public Message
{
private:
    string file_name;
    string getFilePath();
public:
    MultimediaMessage(string no, string t, string fp);
    virtual void show();
};

#endif // MULTIMEDIAMESSAGE_H
