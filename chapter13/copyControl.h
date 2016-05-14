#ifndef COPYCONTROL_H
#define COPYCONTROL_H
#include<set>
#include<string>
class Message;

class Folder{
    friend class Message;
    public:
    Folder();
    void addMsg(Message*);    
    void remMsg(Message*);

    private:
    std::set<Message*> messages;
};

void Folder::addMsg(Message* m)
{
    messages.insert(m);
}

void Folder::remMsg(Message* m)
{
    messages.erase(m);
}

class Message{
    friend class Folder;
    friend void swap(Message&, Message&);

    public:
    Message (const std::string &s=std::string()):contents(s){}
    Message(const Message& );
    ~Message();
    Message& operator=(const Message& );
    void save(Folder&); 
    void remove(Folder& );

    private:
    std::string contents;
    std::set<Folder*> folders;
    void add_to_Folder(const Message&);
    void remove_from_Folders();
};

Message::Message(const Message& m):contents(m.contents),folders(m.folders)
{
    add_to_Folder(*this);
}

Message::~Message()
{
    remove_from_Folders();
}

Message& Message::operator=(const Message& rhs)
{
    remove_from_Folders();
    contents=rhs.contents;
    folders=rhs.folders;
    add_to_Folder(*this);
    return *this;
}

void Message::save(Folder& f)
{
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder& f)
{
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folder(const Message& m)
{
    for(auto f: m.folders)
        f->addMsg(this);
}

void Message::remove_from_Folders()
{
    for(auto f:folders)
        f->remMsg(this);
    folders.clear();
}

inline void swap(Message& lhs, Message& rhs)
{
    using std::swap;
    for(auto f: lhs.folders)
        f->remMsg(&lhs);
    for(auto f: rhs.folders)
        f->remMsg(&rhs);
    swap(lhs.contents,rhs.contents);
    swap(lhs.folders, rhs.folders);
    for(auto f: lhs.folders)
        f->addMsg(&lhs);
    for(auto f: rhs.folders)
        f->addMsg(&rhs);
}


#endif
