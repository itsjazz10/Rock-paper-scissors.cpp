#include <iostream>
using namespace std;
 
int main() 
{
    int x,a,i,z,b,n;
    int arr[5];
    cout<<("Types of different notes: ");
    cin>>n;
    cout<<("Enter available notes : ");
    for(i=0;i<n;i++)
    {
     
      cin>>arr[i];
    }
     for(i=0;i<n;i++)
     {
          for(int j=i+1;j<n;j++)
          { 
               int temp;
               if(arr[i]<arr[j])
               {
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }
           }
     }
//     cout<<("available notes are :");
//      for(i=0;i<n;i++)
//     {
//       cout<< arr[i] << endl ;
//     }
    cout<<("welcome")<<endl;
    cout<<("Enter amount you want to withdrwal (in 100s) : ");
    cin>>a;
    if(a%100 == 0 )
    {
     for(i=0;i<n;i++)
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
