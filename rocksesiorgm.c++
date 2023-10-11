#include <iostream>
#include <time.h>
using namespace std;

char uchoose()
{
    char ch;
    cout << ("choose any from \n 1. 'r' for rock \n 2. 'p' for paper \n 3. 's' for scissor \n ");
    cin >> ch;
    return ch;
}

void showingoption(char option)
{
    if (option == 'r')
    {
        cout << ("ROCK") << endl;
    }
    if (option == 'p')
    {
        cout << ("PAPER") << endl;
    }
    if (option == 's')
    {
        cout << ("SCISSOR") << endl;
    }
}
char cchoosing()
{
    char result = 0;
    char alpha[3] = {'r', 'p', 's'};
    result = alpha[rand() % 3];
    return result;
}

char output(char a, char B)
{
    if (a == 'r' && B == 'p')
    {
        cout << ("!COMPUTER wins the match.. \nBetter luck next time..");
    }
    else if (a == 'r' && B == 's')
    {
        cout << ("!COMPUTER wins the match.. \nBetter luck next time..");
    }
    else if (a == 'p' && B == 'r')
    {
        cout << ("!YOU win the match.. \n");
    }
    else if (a == 'p' && B == 's')
    {
        cout << ("!COMPUTER wins the match..\nBetter luck next time..");
    }
    else if (a == 's' && B == 'r')
    {
        cout << ("!YOU win the match.. \n");
    }
    else if (a == 's' && B == 'p')
    {
        cout << ("!YOU win the match.. \n");
    }
    else
    {
        cout << ("Match Draw");
    }
    return 0;
}
int main()
{
    cout << ("\n !!!WELCOME!!!") << endl;
    cout << ("___ROCK PAPER SCISSOR___") << endl;
    label :
    {
    srand(time(NULL));
    char userchoice;
    userchoice = uchoose();
    char COMPUTERchoice;
    COMPUTERchoice = cchoosing();
    cout<<endl;
    cout << ("YOUR choice is : \n");
    showingoption(userchoice);
    cout << endl;
    cout << ("COMPUTER choice is : \n");
    showingoption(COMPUTERchoice);
    cout<<endl;
    output(userchoice, COMPUTERchoice);
    cout << endl;
    }
    cout<<endl;
    char a;
    cout << ("Do u want to Play again???? \n");
    cout<<("Y or N \n");
    cin>>a;
    if (a == 'Y')
    {
        goto label;
    }
    return 0;
}