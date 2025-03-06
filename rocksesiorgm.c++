#include <iostream>
#include <time.h>
using namespace std;
int computer_score = 0;
int your_score = 0;


char uchoose()
{
    char ch;
    cout << ("choose any from \n 1. 'r' for rock \n 2. 'p' for paper \n 3. 's' for scissor \n ");
    cout<<("Enter your choice: ");
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

int output(char a, char B)
{
    if (a == 'r' && B == 'p')
    {
        cout << ("!COMPUTER wins the match.. \nBetter luck next time..");
        computer_score+= 1;
    }
    else if (a == 'r' && B == 's')
    {
        cout << ("!COMPUTER wins the match.. \nBetter luck next time..");
        computer_score+= 1;
    }
    else if (a == 'p' && B == 'r')
    {
        cout << ("!YOU win the match.. \n");
        your_score +=1;
    }
    else if (a == 'p' && B == 's')
    {
        cout << ("!COMPUTER wins the match..\nBetter luck next time..");
        computer_score +=1;
    }
    else if (a == 's' && B == 'r')
    {
        cout << ("!YOU win the match.. \n");
        your_score +=1;
    }
    else if (a == 's' && B == 'p')
    {
        cout << ("!YOU win the match.. \n");
        your_score +=1;
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
    label:
    {
        srand(time(NULL));
        char userchoice;
        userchoice = uchoose();
        char COMPUTERchoice;
        COMPUTERchoice = cchoosing();
        cout << endl;
        cout << ("YOUR choice is : \n");
        showingoption(userchoice);
        cout << endl;
        cout << ("COMPUTER choice is : \n");
        showingoption(COMPUTERchoice);
        cout << endl;
        output(userchoice, COMPUTERchoice);
        cout << endl;
    }
    cout << endl;
    char a;
    cout << ("Do u want to Play again???? \n");
    cout << ("y or n \n");
    cin >> a;
    if (a == 'y')
    {
        goto label;
    }
    else
    {   cout<<"SCORES \n";
        cout<<"computer score: "<< computer_score;
        cout<<endl;
        cout<<"Your score: "<< your_score;

    }
    return 0;
    
}