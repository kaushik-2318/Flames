#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int fla(){
    char name[50];
    char crush[50];
    char name1[50];
    char crush1[50];
    cout<<"Enter Your Name without Space:- ";
    cin>>name;
    cout<<"Enter Your Crush Name without Space:- ";
    cin>>crush;
    int a = strlen(name);
    int b = strlen(crush);
    strcpy(name1,name);
    strcpy(crush1,crush);
    for(int j=0; j < a; j++){
        name[j]=tolower(name[j]);
    }
    for(int j=0; j < b; j++){
        crush[j]=tolower(crush[j]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (name[i] == crush[j])
            {
                name[i] = ' ';
                crush[j] = ' ';
                break;
            }
        }
    }
    strcat(name,crush);
    int c = strlen(name);
    int g = 0;
    for (int i = 0; i < c; i++)
    {
        if (name[i] != ' ')
        {
            g++;
        }
    }
    int k = 0;
    string arr[] = {"F","L","A","M","E"};
    k = g - (5 * (g/5));
    switch (k)
    {
    case 0:
        cout<<"\nOOPs!!! "<<name1<<" and "<<crush1<<" are EMENY.\n\n";
        break;
    case 1:
        cout<<"\n\nYou both are FRIENDS.\n\n";
        break;
    case 2:
        cout<<"\nYou both are LOVERS.\n\n";
        break;
    case 3:
        cout<<"\nYou both are ATTRACTED to each others.\n\n";
        break;
    case 4:
        cout<<"\nCongrats!!! both are going to be husband and wife.\n\n";
        break;
    }
    cout<<"Credits:- Kaushik Verma and Jaish Nawed\n\n";
}
int main(){
    cout<<"WELCOME TO FLAME\n";
    cout<<"To ENTER in game press 1.\n";
    cout<<"To EXIT press any character.\n";
    cout<<"Please Enter:- ";
    char t;
    cin>>t;
    if (t == '1')
    {
        fla();
        main();
    }
    else{
        return 0;
    }
}
