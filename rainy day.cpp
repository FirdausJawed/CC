#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
     
     int A [7];
     int sunny = 0;
     int rainy = 0;
     for (int i = 0; i < 7; i++)
     {
        cin>>A[i];
       if (A[i] == 0)
       {
           rainy++;
       }
       if (A[i] == 1)
       {
           sunny++;
       }
     }
     if (sunny>rainy)
     {
         cout<<"YES"<<endl;
     }
      if (sunny<rainy)
     {
         cout<<"NO"<<endl;
     }
     

   }
    return 0;
}    