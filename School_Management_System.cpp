#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

struct student
{
    string fname;
    string lname;
    string Registration;
    string classes;
}studentData;

struct Teacher
{
    string fst_name;
    string lst_name;
    string qualification;
    string exp;
    
    string pay;
    string subj;
    string lec;
    string addrs;
    string cel_no;
    string blod_grp;
    string serves;
}tech[50];

int main()
{
    int i = 0;
    int j;
    char choice;
    string find;
    string srch;

    while(1)
    {
        system("cls");

        cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
        cout<<"\n\n\t\tSCHOOL MANAGEMENT SYSTEM\n\n";
        cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
        cout<<"\n\n\t\tMAIN SCREEN\n\n";
        cout<<"Enter your choice :"<<endl;
        cout<<"1) Students information"<<endl;
        cout<<"2) Teacher information"<<endl;
        cout<<"3) Exit Program"<<endl;
        cin >> choice;

        system("cls");


        switch(choice)
        {


        }
        
    }
}