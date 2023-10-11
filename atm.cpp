#include <iostream>
using namespace std;
 
int main() {
 
    int x,a,i,z,b,arr[]={2000,500,200,100};
    cout<<("welcome \n");
    cout<<("Enter amount you want to withdrwal (in 100s) : ");
    cin>>a;
      if(a%100 == 0 )
    {
     for(i=0;i<4;i++)
       {
        if(a>=arr[i])
        {
            x = a % arr[i];
            z = (a-x);
            b = z / arr[i];
            cout<<b <<("note of")<< arr[i] <<endl;
            a = x;
        }
       }
    }
    else 
    {
     cout<<("Can not process the given ammount!");
    }
    
    return 0;
}