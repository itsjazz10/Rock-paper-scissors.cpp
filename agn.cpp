#include <iostream>
using namespace std;
int main()
{
    int totaltwoThousand = 0; // p
    int totalFiveFundred = 8; // q
    int totaltwoHundred = 10; // q
    int totalOneHundred = 15; // r
    long withdrawAmount;
    long totalMoney;
    char c;
    int thousand = 0, fiveHundred = 0, twoHundred = 0 , OneHundred = 0;
label:
{
    cout << "Enter the amount in multiple of 100: " << endl;
    cin >> withdrawAmount;
    if (withdrawAmount % 100 != 0)
    {
        cout << "Invalid amount;" << endl;
        return 0;
    }
    totalMoney = totaltwoThousand * 2000 + totalFiveFundred * 500 + totaltwoHundred * 200 + totalOneHundred * 100;
    
    if (withdrawAmount > totalMoney)
    {
        cout << "Sorry,Insufficient money" << endl;
        return 0;
    }
    thousand = withdrawAmount / 2000;
    if (thousand > totaltwoThousand)
        thousand = totaltwoThousand;
    withdrawAmount = withdrawAmount - thousand * 2000;
    totaltwoThousand = totaltwoThousand - thousand; 
    if (withdrawAmount > 0)
    {
        fiveHundred = withdrawAmount / 500;
        if (fiveHundred > totalFiveFundred)
            fiveHundred = totalFiveFundred;
        withdrawAmount = withdrawAmount - fiveHundred * 500;
        totalFiveFundred - fiveHundred;
    }
    if (withdrawAmount > 0)
    {
        fiveHundred = withdrawAmount / 200;
        if (twoHundred > totaltwoHundred)
            twoHundred = totaltwoHundred;
        withdrawAmount = withdrawAmount - twoHundred * 200;
        totaltwoHundred - twoHundred;
    }
    if (withdrawAmount > 0)
    OneHundred = withdrawAmount / 100;
    cout << "Total 2000 note: " << thousand << endl;
    cout << "Total 500 note: " << fiveHundred << endl;
    cout << "Total 100 note: " << OneHundred << endl;
    totalOneHundred - OneHundred;
}

    cout << ("Do you want to withdrwal more money??");
    cout << ("Y or N");
    cin >> c;
    if (c == 'Y')
    {
        goto label;
    }
    return 0;
    return 0;
}