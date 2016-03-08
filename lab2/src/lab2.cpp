//============================================================================
// Name        : lab2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
class student
        {
public:
        string name;
        string usn;
        int sem;
        string branch;
        string key;
        string buffer;
        void insert();
        void unpack();
        void write();
        void disp();
        //void delet();
        void modify();
        void pack();
        void search();

        };


void student::insert()
        {
                cout<<"Enter the name, usn ,sem and branch\nName:";
                cin.clear();
                cin.ignore(1);

                getline(cin,name);
                cout<<"Usn:\n";
                cin>>usn;
                cout<<"Branch";
                cin>>branch;
                cout<<name<<usn<<branch;
                cout<<"sem";
                cin>>sem;
        }

void student::pack()
{
        fstream f1;
        string buffer;
        buffer=name+'|'+usn+'|'+branch;
#include <iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
class student
        {
public:
        string name;
        string usn;
        int sem;
        string branch;
        string key;
        string buffer;
        void insert();
        void unpack();
        void write();
        void disp();
        //void delet();
        void modify();
        void pack();
        void search();

        };


void student::insert()
        {
                cout<<"Enter the name, usn ,sem and branch\nName:";
                cin.clear();
                cin.ignore(1);

                getline(cin,name);
                cout<<"Usn:\n";
                cin>>usn;
                cout<<"Branch";
                cin>>branch;
                cout<<name<<usn<<branch;
                cout<<"sem";
                cin>>sem;
        }

void student::pack()
{
        fstream f1;
        string buffer;
        buffer=name+'|'+usn+'|'+branch;
buffer.resize(100,'$');
        f1.open("file1.txt",ios::out|ios::app);
        f1<<buffer;
        f1.close();
}
void student::write()
{
        fstream file;
        file.open("2a.txt",ios::out|ios::app);
        file<<buffer;
        file.close();
}
void student::disp()
{
        fstream file;
        int flag=0,pos=0;
        file.open("2a.txt",ios::in);
        cout<<"\nfile contents are:";
        while(!file.eof())
        {
                buffer.erase();
                getline(file,buffer);
                cout<<"\n"<<buffer;
        }
        unpack();
        if(key==usn)
        {
                flag=1;
                cout<<"\nfound the record is:\n"<<buffer;
                pos=file.tellg();
                cout<<"\npos="<<pos;









        }
}
/*int student::delet()

{

        fstream file;
        char del_mark='*';
        int pos=0,flag=0;
        pos=search();
        if(pos)
        {
                file.open("2a.txt");
 pos=-101;
                file.seekp(pos,ios::beg);
                file.put(del_mark);
                flag=1;

        }
        file.close();
        if(!flag)
                return 0;
        else
                return -1;

}*/

void student::unpack()
{
        int i=0;
        while(!buffer[i]=='|')
        {
                usn+=buffer[i++];
        }
        i++
        while(!buffer[i]=='|')
        {
                branch+=buffer[i++];
        }
        i++
        while(!buffer[i]=='$')
        {
                sem+=buffer[i++];

        }
}

int main()
        {
                int choice,count,len,i;
                student s;
                string key;
                while(1)
                {
                cout<<"Enter your choice..!!\n1.Insert\n2.display\n";
                cin>>choice;
                switch(choice)
                {
                        case 1:
                            cout<<"\nhow many records?\n";
                            cin>>count;
                             for(i=0;i<count;i++)
                            {
                             cout<<"data";
                             s.insert();
                             s.pack();

                            }
                            s.write();
                                break;
                        case 2:
                                s.disp();
                                 break;
                        default:cout<<"error!!";

                }
        }
return 0;
}
