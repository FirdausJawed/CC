#include <iostream>
#include<iomanip>
using namespace std;

int main (){

  int t;
  cin>>t;
  while (t--)
  {  
   int n;
   cin>>n;

   while (n>=0)
   {
     long factorial=1;
   for (int i = 1; i <=n; i++)
   {
       factorial=factorial*i;
   }
   
   cout<<factorial<<endl;
   }
  }
    return 0;
}