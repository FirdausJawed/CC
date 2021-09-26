
#include <iostream>
#include<iomanip>
using namespace std;

int main (){
 int t;
  cin>>t;
  while (t--)
  {
     int a,b;
     cin>>a>>b;
     
     int n=1;
     int x =0;
     if(a>b){
     while(a%b !=0){
        n++;
     }
     }
      if(a<b){
     while(b%a!=0){
        n++;
     }
     }
      a = n*a;
      x=x+a;
      x=x/b;
     if (x == 1)
     {
        cout<<"YES"<<endl;
     }
     else{
          cout<<"NO"<<endl;
     }
     
   }
    return 0;
}