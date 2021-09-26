#include <iostream>
#include<iomanip>
using namespace std;

int main (){
 int t;
  cin>>t;
  while (t--)
  { 
      int num,firstdigit,lastdigit;
      int sum=0;
      cin>>num;
      lastdigit=num%10;
      firstdigit=num;
      while (num>=10)
      {
         num=num/10;
      }
      firstdigit=num;
      sum=firstdigit+lastdigit;
      cout<<sum<<endl;
  }
    return 0;
}