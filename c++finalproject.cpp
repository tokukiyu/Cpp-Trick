#include<iostream>
#include<Windows.h>
#include <conio.h>
#include<fstream>
#include<cstring>
using namespace std;
/*class of objects declaration section of program*/
class pages{
    public:
    void homePage();
    void StudentSection();
    void TeacherSection();
    void StudentSearch();
    void NotesTaking();
    void NotesReading();
    void NewInformation();
    bool login();
    void valid(string str);
}menu;

/* color definition section of program*/
#define note_background_color          system("color 7D")
#define little_option_backgroundColor  system("color 7C")
#define Reading_mode_background        system("color 70")
#define home_color                     system("color F3")
/*##*/


/* structure of objects declaration section of program*/
struct studentRegist
{
  string fname;
  string lname;
  string Registration;
  string classes;
}studentData;


/* Global variable declaration and initialization section of program */

char choice;            // We use this variable for every choice the user will make, entire the program!!
string username;
int temp;
#define We_did_It   0   //for return 0 ;)


int main(){

    menu.homePage();
    return We_did_It;
}
void pages::homePage(){
   home_color;
do{ system("cls");
  HANDLE console_color;
  console_color = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(console_color, 15);
    cout<<"\n"
        <<"\t\t\t\t|-----------------------------------------------------| \n"
        <<"\t\t\t\t|------------ Welcome to Jimma University ------------| \n"
        <<"\t\t\t\t|-----------------------------------------------------| \n";

SetConsoleTextAttribute(console_color, 22);
        cout<<"\n"
        <<"\t\t menus: \n";
SetConsoleTextAttribute(console_color, 229);
        cout<<"\t 1: Student section \n"
        <<"\t 2: Teacher section \n" //????????
        <<"\t 3: Help\n" //????
        <<"\t 4: Personal Notes\n";
SetConsoleTextAttribute(console_color, 223);
    cout<<"\t\t\t\t   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n";
SetConsoleTextAttribute(console_color, 331);
    cout<<"\t Press menu's number from keyboard: ";
choice=getche();
     if(choice=='1') {
         menu.StudentSection();}
    else if (choice=='2') menu.TeacherSection();
     else if (choice=='3'){
        cout<< "\n\t\t\t Just press the given number from keyboard:\n";
        cout<< "\t\t\t in some case you may not need to press enter key to say ok or enter it,\n "
        <<"\t\t\t the system will read it as soon as you press the key: \n ";
        system("pause");
        }
     else if (choice=='4') {
        menu.NotesTaking();}
}while(1);
}
void pages::StudentSection(){
    system("color 71");
    int i=0,j;
    char choice;
    string find;
    string srch;
if(menu.login())
while(true)
{
system("cls");
           cout<<"\t\tSTUDENT INFORMATION DATA SECTION\n\n\n"
           <<"\t\t\tpress:1. New student? add your information\n"
           <<"\t\t\tpress:2. Login to Profile (student menus)\n"// do not need any password but sends you to student menus
           <<"\t\t\tpress:3. Search and display friends(student)\n"
           <<"\t\t\tpress:4. Back to main menu\n"
           <<"\n\n\t\t Press your choice: ";
choice=getche();

switch (choice)
{
case '1':{
//student data will saved here
     ofstream f1("student.txt",ios::app);
    if(f1){
            system("CLS");
            cout<<"\t\t\tNEW ENTRY\n\n"
            <<"\t\t\tEnter First name: ";
            cin>>studentData.fname;
            cout<<"\n\t\t\tEnter Last name: ";
            cin>>studentData.lname;
            cout<<"\n\t\t\tEnter Registration number: ";
            cin>>studentData.Registration;
            cout<<"\n\t\t\tEnter year(Academic class): ";
            cin>>studentData.classes;
 f1<<studentData.fname<<endl
   <<studentData.lname<<endl
   <<studentData.Registration<<endl
   <<studentData.classes<<endl;
   cout<<"\n\t\t\t You have entered your data successfully ";
 /*choice here*/              system("pause");
 f1.close();
}
else 
{cout<<"Your data file is not found. \n try again!!";
break;}
}


//////
continue;
case '2':{
label:
system("cls");
    cout<<"\t\tchoose from menu:\n"
        <<"\t\t\t|||| press 1. to take personal note:\n"
        <<"\t\t\t|||| press 2. to see new information from your teacher: \n"
        <<"\t\t\t|||| press 3. to read your saved notes: \n"
        <<"\t\t\t|||| press 4. to go back to previous page or any key: \n"
        <<"\t\t\t|||| press 5. to go to home page: \n"
        <<"\t\t\t ";
        choice=getche();
        if(choice=='1') menu.NotesTaking();
        else if(choice=='2') { menu.NewInformation();}
        else if(choice=='3') menu.NotesReading();
        else if(choice=='4') break;
        else if(choice=='5') menu.homePage();
        else goto label;

}
/////
continue;
          case '3': menu.StudentSearch();
continue;
          case '4':break;
}
break;
}
else menu.homePage();
}
////////////////////////////////////////////////////////////////////////////////////////////////
void pages::StudentSearch(){

 // decorate console ;)
system("color 0D");
system("color 1D");
system("color eD");
system("color FD");
// with multi color display :)


string find;
int i;
ifstream f2("student.txt");
  system("CLS");
  cout<<"\n\t\tDISPLAY STUDENT'S DATA\n";
  cout<<"\n\t\t\tEnter First name to be displayed: ";
  cin>>find;
  cout<<endl;
int notFound = 0;
for( int j=0;(!f2.eof());j++){
    getline(f2,studentData.fname);
if(studentData.fname==find){
   notFound = 1;
   cout<<"\n\t\t\tFirst Name: "<<studentData.fname<<endl;
   cout<<"\n\t\t\tLast Name: "<<studentData.lname<<endl;
   cout<<"\n\t\t\tRegistration Number: "<<studentData.Registration<<endl;
   cout<<"\n\t\t\tClass: "<<studentData.classes<<endl<<endl;
}}
if(notFound == 0){
    cout<<"\n\t\tNo Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();
getch();
}
////////////////////////////////////////////////////////////////////////////////////////////////
void pages::NotesTaking(){
          system("color 30");
  do{ system("cls");
  HANDLE console_color;
  console_color = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(console_color, 223);
   cout<<"\n\n\t\t\t                                                               \n"
       <<"\t\t\t|||| Here you have access to write and read your own notes ||||\n"
       << "\t\t\t                                                               \n\n"
       <<"\t\t\t 1. for New note               \n"
       <<"\t\t\t 2. for Reading existing notes \n"
       <<"\t\t\t 3. to exit \n"
       <<"\t\t\t";
 /*choice here*/   choice=getche();
     if (choice=='1') break;
     else if(choice=='2') menu.NotesReading();
     else if (choice=='3') menu.homePage();
}
while(true);

system("cls");
/*some variables for files handling*/
    char fileName[15];
    const int size=100000;
    char notes[size];
/**********            ***********/


    cout<<"\t\tName your note:\n"
         <<"Enter your new note file name: ";
         //cin.ignore();
         cin.getline(fileName,15);
         strcat(fileName, ".txt");

fstream file(fileName, ios::out| ios::app);
    if(file) {
        system("cls");
        note_background_color;
        cout<<"\t\t\t Hello!! WELCOME, You Can Begin Taking Your Note Now\n";
        cout<<"\t\t\t\t\t\tpress any key to continue, press [shift+Q] /uppercase of q to quite\n\n\n";
        int n=size; // number of entered charachter will saved on n varaible
        while(choice!='Q'){
             cout<<"\t\t";
             if(n>=200) {
                cin.getline(notes,n);
                n=size-strlen(notes);
                file<<notes<<endl;
                choice=getch();
           }
           else {
            little_option_backgroundColor;
            cout<<"You have only "<<n<< " charachters please try to finish your notes \n";
            cin.getline(notes,n);
            n=size-strlen(notes);
            file<<notes<<endl;
            choice=getch();
           }
        }
        file.close();
    }
     cout<<"\t\tpress any to exit\n"
     <<"\t\tPersonal notes page?   press 1\n";
     choice=getche();
if(choice=='1') NotesTaking();

 }
 ////////////////////////////////////////////////////////////////////////////////////////////////
 void pages::NotesReading() {
        system("cls");
Reading_mode_background;
    char fileName[15];
    const int size=100000;
    char notes[size];
      cout<< "Enter the correct name of your file WITHOUT any extension .txt !!\n";
      cin.ignore();
      cin.getline(fileName,15);
      strcat(fileName, ".txt");
ifstream file(fileName, ios::in);
if(file.is_open()){
    while(file.getline(notes, size))
        cout<<notes<<endl;
    file.close();
}
else
  cout<<"\t\tYou have no such file here please try later\n \n\n";
getch();
  cout<<"\t press any to exit:\n"
     <<"\t Personal notes page? press 1:\n";
     choice=getche();
if(choice=='1') NotesTaking();
}

////////////////////////////////////////////////////////////////////////////////////////////////
bool pages::login()
{ system("cls");
system("color 3E");
    int i,exit=0;
    string ans,psd,name,fname,bio,usern,pw,line,nusn;
    ofstream fileo;
    ifstream filei;
    cout<<"\n---------------------------WELCOME TO STUDENT-TEACHER INTERACTION SYSTEM ---------------------------\n";
    while(exit==0)
    {
        cout<<"\n\t\t\tChoose one option:\n"
            <<"\t\t\t1. LogIn(press 1 to select this)\n"
            <<"\t\t\t2. SignUp/Register(press 2 to select this)\n\npress any key and enter to exit\n";
        // choice=getche();
        choice=getche();
        if(choice=='1')
        {
            cout<<"\tEnter your username:";
            cin>>username;
            cout<<"\n\tEnter your password:";
            cin>>psd;
            fname=username+".txt";
            filei.open(fname,ios::out);
            if(!filei.is_open() && filei.fail())
            {
                cout<<"\nYou are not registered, please register before logging in.\n";
                filei.close();
                continue;
            }
            getline(filei,usern);
            getline(filei,line);
            getline(filei,pw);
            if(username==usern && psd==pw)
            { system("cls");
                 cout<<"\n \t\t\t You are successfully logged in:)\nYOUR PROFILE SAYS:\n";
                cout<<" \t\t User-name:"<<usern<<endl;
                cout<<"\t\t Name:"<<line<<endl;
                getline(filei,line);
                cout<<"\t\t Bio:"<<line<<endl;
                filei.close();
                system("pause");getch();
                return true;
            }
            else{
                cout<<"\n \t\t\t Wrong username or password!\nPlease try Again.\n";
            }
            cout<<endl;
        }
        else if(choice=='2')
        { system("cls");
             cout<<"---------------------------------------Welcome to register new account--------------------------------------------------\n";
            cout<<"\n\t\t\t Enter your name: ";
            cin.ignore();
            getline(cin,name);
            cout<<"\n\t\t\tCreate a username:";
            cin>>username;
            temp=0;
            menu.valid(username);
            if(temp>=3)
            {
                continue;
            }
            cout<<"\n\t\t\tCreate a password:";
            cin>>psd;
            fname=username+".txt";
            fileo.open(fname, ios::out);
            fileo<<username<<endl<<name<<endl<<psd<<endl;
            cout<<"\n\t\t\t You are successfully registered:)";
            cout<<"\n\t\t\t Add to your bio and press enter when you are done:";
            cin.ignore();
            getline(cin,bio);
            fileo<<bio<<endl;
            cout<<"\n\t\t\t Your bio is saved as: "<<bio;
            fileo.close();
            cout<<"\n\n\t\tAdd your more user profile on registration page: \n";
            system("pause");getch;
            return true;
        }
        else
        {
            exit=1;
            return false;
        }
    }
    }
////////////////////////////////////////////////////////////////////////////////////////////////
void pages::valid(string str)
{
    string dir,user;
    ifstream file;
    dir = str+".txt";
    file.open(dir,ios::out);
    if(!file.is_open() && file.fail())
    {
        file.close();

    }
    else
    {
        temp++;
        if(temp==3)
        {
            cout<<"\nThis username already exists\nPlease try Again.";
            file.close();

        }
        cout<<"\nThis username already exists!\nCreate a username:";
        cin>>username;
        file.close();
        valid(username);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////
void pages::TeacherSection()
{ system("cls");
    //login to system
    //update information
if(menu.login()){
    char info[500];
    int n=0;
    ofstream file("info.txt", ios::out);
    if(file){
        cout<<"\n\t\t Write new post for your student: \n\n";
while(n<500)
{
    cin.getline(info, 500);
    file<<info<<endl;
    n++;
    choice=getche();
    if(choice=='q')
    break;

} file.close();
    }
}
else menu.homePage();
}
////////////////////////////////////////////////////////////////////////////////////////////////
void pages::NewInformation()
{ system("cls");
    char info[500];
     ifstream file("info.txt", ios::in);
     if(file){
        cout<<"\t\t\t Here is new information posted from your teacher:\n";
        while(file.getline(info, 500))
        {
            cout<<info<<endl;
        }
        file.close();
     }
     system("pause");
}
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////THE END///////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
///////////////THE END///////////////////////////////////////THE END////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////