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

            case '1':
            {
                while(1)
                {
                    system("cls");
                    cout<<"\t\tSTUDENT INFORMATION AND BIO DATA SECTION\n\n\n";
                    cout<<"Enter your choice : "<<endl;
                    cout<<"1) Create new entry\n";
                    cout<<"2) Find and display entry : \n";
                    cout<<"3) Jump to main\n";
                    cin >> choice;

                    switch(choice)
                    {
                        case '1':
                        {
                            ofstream f1("student.txt", ios::app);

                            for(i = 0; choice != 'n'; i++)
                            {
                                if(choice == 'y' || choice == 'Y' || choice == '1')
                                {
                                    cout<<"Enter First name : ";
                                    cin >> studentData.fname;
                                    cout<<"Enter Last name : ";
                                    cin >> studentData.lname;
                                    cout<<"Enter registration number : ";
                                    cin >> studentData.Registration;
                                    cout<<"Enter class : ";
                                    cin >> studentData.classes;
                                    
                                    f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;
                                    cout<<"Do you want to enter data : ";
                                    cout<<"Press Y to continue and N to finish : ";
                                    cin >> choice;

                                }
                            }
                            f1.close();
                        }
                        continue;

                        case '2':
                        {
                            ifstream f2("student.txt");

                            cout<<"Enter first name to be displayed : ";
                            cin >> find;
                            cout<<endl;
                            int notFound = 0;
                            
                            for( j = 0; (j < i || !f2.eof()); j++)
                            {
                                getline(f2, studentData.fname);

                                if(studentData.fname == find)
                                {
                                    notFound = 1;
                                    cout<<"First name : "<<studentData.fname<<endl;
                                    cout<<"Last name : "<<studentData.lname<<endl;

                                    getline(f2, studentData.Registration);
                                    cout<<"Registration Number : "<<studentData.Registration<<endl;
                                    getline(f2, studentData.classes);
                                    cout<<"Class : "<<studentData.classes<<endl;

                                }
                            }
                            if(notFound == 0)
                            {
                                cout<<"No Record Found! ";
                            }
                            f2.close();
                            cout<<"Press any key two times and proceed";
                            getch();
                            getch();
                        }
                        continue;

                        case '3':
                        {
                            break;
                        }
                        continue;
                    }
                    case '2':
                    {
                        while(1)
                        {
                            system("cls");
                            cout<<"\t\t\tTEACHERS INFORMATION AND BIO DATA SECTION\n\n\n";
                            cout<<"Enter your choice : ";
                            cout<<"1) Create new entry\n";
                            cout<<"2) Find and display\n";
                            cout<<"3) Jump to main\n";
                            cin >> choice;

                            switch(choice)
                            {
                                case '1':
                                {
                                    ofstream t1("teacher.txt", ios::app);

                                    for(i = 0; choice != 'N'; i++)
                                    {
                                        if(choice == 'y' || choice == 'Y' || choice == '1')
                                        {
                                            cout<<"Enter first name : ";
                                            cin >> tech[i].fst_name;
                                            cout<<"Enter last name : ";
                                            cin >> tech[i].lst_name;
                                            cout<<"Enter qualification : ";
                                            cin >> tech[i].qualification;
                                            cout<<"Enter experience : ";
                                            cin >> tech[i].exp;
                                            cout<<"Enter number of year in this school : ";
                                            cin >> tech[i].serves;
                                            cout<<"Enter the name of the teacher who teaches the subject : ";
                                            cout<<tech[i].subj;
                                            cout<<"Enter Lecture(Per week)";
                                            cin >> tech[i].lec;
                                            cout<<"Enter pay : ";
                                            cin >> tech[i].pay;
                                            cout<<"Enter Phone Number";
                                            cin >> tech[i].cel_no;
                                            cout<<"Enter blood group";
                                            cin >> tech[i].blod_grp;


                                            t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl
                                            <<tech[i].qualification<<endl<<tech[i].exp<<endl<<
                                            tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
                                            <<endl<<tech[i].pay<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grp<<endl;
                                            cout<<"Do you want to enter data : ";
                                            cin >> choice;
                                        }
                                    }
                                    system("cls");

                                    t1.close();
                                }
                                continue;

                                case '2':
                                {
                                    ifstream t2("teacher.txt");
                                    cout<<"Enter name to be displayed : ";
                                    cin >> find;

                                    cout<<endl;
                                    int notFound = 0;
                                    for(j = 0; (j < i || !t2.eof()); j++)
                                    {
                                        getline(t2, tech[j].fst_name);

                                        if(tech[j].fst_name == find)
                                        {
                                            notFound = 1;

                                            cout<<"First name : "<<tech[j].fst_name<<endl;

                                            getline(t2, tech[j].lst_name);
                                            cout<<"Last name : "<<tech[j].lst_name<<endl;

                                            getline(t2, tech[j].qualification);
                                            cout<<"Qualification : "<<tech[j].qualification<<endl;

                                            getline(t2, tech[j].exp);
                                            cout<<"Experience : "<<tech[j].exp<<endl;

                                            getline(t2, tech[j].serves);
                                            cout<<"Number of year in this school : "<<tech[j].serves<<endl;

                                            getline(t2, tech[j].subj);
                                            cout<<"Teacher who teaches this particular subject : "<<tech[j].subj<<endl;

                                            getline(t2, tech[j].lec);
                                            cout<<"Enter lecture(Per week): "<<tech[j].lec<<endl;

                                            getline(t2, tech[j].pay);
                                            cout<<"Pay : "<<tech[j].pay<<endl;

                                            getline(t2, tech[j].addrs);
                                            cout<<"Address : "<<tech[j].addrs<<endl;

                                            getline(t2, tech[j].cel_no);
                                            cout<<"Phone number : "<<tech[j].cel_no<<endl;

                                            getline(t2, tech[j].blod_grp);
                                            cout<<"Blood group: "<<tech[j].blod_grp<<endl;
                                        }
                                    }
                                    t2.close();
                                    if(notFound == 0)
                                    {
                                        cout<<"No Record Found!"<<endl;
                                    }
                                    cout<<"Press any key two times to proceed";
                                    getch();
                                    getch();
                                }
                                continue;
                            }
                            case '3':
                            {
                                break;
                            }
                        }
                        break;
                    }
                    continue;
                }
                case '4':
                {
                    break;
                }
            }
            break;
        }
        
    }
}