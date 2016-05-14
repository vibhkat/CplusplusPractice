#ifndef SCREEN_H
#define SCREEN_H

#include<iostream>
#include<string>
#include<vector>

class Screen{
friend class Window_mgr;

public:
typedef std::string::size_type pos; // or we can write using pos= std::string::size_type;
Screen()= default;
Screen(pos ht, pos wd):height(ht), width(wd), contents(ht*wd,' ') {}
Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){}
char get()const {return contents[cursor]; }
inline char get (pos r, pos c) const;
Screen& move(pos r, pos c);
void some_member()const;
Screen& set(char);
Screen& set(pos, pos, char);
Screen& display(std::ostream& os){do_display(os); return *this;}
const Screen& display(std::ostream& os) const {do_display(os); return *this;}

private:
std::string contents;
pos cursor=0;
pos height =0, width =0;
mutable size_t acess_ctr=0;
void do_display(std::ostream &os)const {os<<contents;}
};



class Window_mgr{

public:
using ScreenIndex= std::vector<Screen>::size_type;
void clear(ScreenIndex);
ScreenIndex addScreen(const Screen&);
private:
std::vector<Screen> screens{Screen(24,80,' ')};

};




inline char Screen::get(pos r, pos c) const
{
pos row= width*r;
return contents[row+c];
}


Screen& Screen::move(pos r, pos c)
{
pos row= width*r;
cursor= row+c;
return *this;
}

void Screen::some_member() const
{
++acess_ctr;
}

Screen& Screen::set(char c)
{
contents[cursor]=c;
return *this;
}

Screen& Screen::set(pos r, pos col, char ch)
{
contents[r*width+col]=ch;
return *this;
}


void Window_mgr::clear(ScreenIndex i)
{
Screen& s=screens[i];
s.contents=std::string(s.height*s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen& s)
{
screens.push_back(s);
return screens.size() - 1;
}


#endif
