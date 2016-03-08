//============================================================================
// Name        : lab4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>

#include<string.h>
#include<iomanip>
 using namespace std;

class student
{
	public:char name[15],usn[10],age[5],sem[5],branch[15],buffer[100];
};


void writerecord()
{
	fstream file;
	student s;
	int k,n;
	file.open("program_4.txt",ios::out);
		cout<<"how many records\n";
	cin>>n;
	for(k=1;k<=n;k++)
	{
		cout<<"\nenter the student name: ";
		cin>>s.name;
		cout<<"\nenter the usn: ";
		cin>>s.usn;
		cout<<"\nenter the age: ";
		cin>>s.age;
		cout<<"\nenter the sem: ";
		cin>>s.sem;
		cout<<"\nenter the branch: ";
		cin>>s.branch;
		file<<k<<"|"<<s.name<<"|"<<s.usn<<"|"
		<<s.age<<"|"<<s.sem<<"|"<<s.branch<<"\n";
	}
	file.close();
}



void search()
{
	char rrn[10],rrn1[10][15];
	int i;
	student std[100];
	cout<<"\n enter the rrn to be searched";
	cin>>rrn;
	fstream file;
	file.open("program_4.txt",ios::in);
	if(!file)
	{
		cout<<"\n can not open the file in input mode";
				exit(0);
	}
	i=0;
	printf("\n rrn\tname\tusn\tage\tsem\tbranch\n");
	while(!file.eof())
	{
		file.getline(rrn1[i],4,'|');
		file.getline(std[i].name,15,'|');
		file.getline(std[i].usn,15,'|');
		file.getline(std[i].age,5,'|');
		file.getline(std[i].sem,5,'|');
		file.getline(std[i].branch,15,'\n');
		i++;
	}

	for(int j=0;j<i-1;j++)
	{
		if(strcmp(rrn,rrn1[j])==0)
		{
			printf("\n%s\t%s\t%s\t%s\t%s\t%s\n",
			rrn,std[j].name,std[j].usn,std[j].age,
			std[j].sem,std[j].branch);
			printf("\n record found\n");
			file.close();
			return;
		}
	}
	cout<<"\nrecord not found\n";
	file.close();
	return;
}

int main()
{
	int choice;

	while(1)
	{
		cout<<"\n 0:exit";
		cout<<"\n 1:insert";
		cout<<"\n 2:search";

		cout<<"\n enter the choice=";
		cin>>choice;
		switch(choice)
		{
			case 1:writerecord();
				break;
			case 2:search();
				break;



			case 0:exit(0);
			default:cout<<"\n invalid option";
				break;
		}

	}
	return 0;
}
