#include <iostream>
#include<iomanip>
using namespace std;

int main (){
 int t;
  cin>>t;
  while (t--)
  { 
   int D,L,R;
   cin>>D>>L>>R;

   if (D>=L && D<=R)
   {
     cout<<"Take second dose now"<<endl;
   }
   
   else if(D<L){
       cout<<"Too Early"<<endl;
   }

   else if(D>R){
       cout<<"Too Late"<<endl;
   }

  }
    return 0;
}