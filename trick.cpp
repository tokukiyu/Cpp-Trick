#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    cout << "Hello sir!" << endl;
    char input[5];
    cout<<"=================ARE GOING TO CHECK ME?========================\n"
    << "        say 'yes' or 'no'";
     system("color e5");
    cin>>input;
    int b= strcmp(input,"yes" );
    int c=strcmp(input, "no");
    if(b==0)
    {
        cout<<"you are okay";
        system("pause");
        cout<<"hello again";
        system("color 40");
        cout<<"se you later";
        cout<<"Say this: ";system("shutdown /r");
        cout<< "Say this again: "; system("I was joking bro");
        system("shutdown /h");
    } else if(c==0){
         cout<<"-------------- ): ---------- ------------\n \t\t\ you are not okay \n";
        system("pause");
        cout<<"\t\t\t hello again \n I'm gona lay on you";
        system("color 40");
        cout<<"se you later";
        cout<<"Say this: ";system("shutdown /r");
        cout<< "Say this again: "; system("I was joking");
    }
    return 0;
}