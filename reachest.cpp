// https://www.codechef.com/LTIME97C/problems/CHFRICH

#include <iostream>
#include<iomanip>
using namespace std;

int main (){
  int t;
  cin>>t;
  while (t--)
  {  

    int A,B,X;
    cin>>A>>B>>X;
    int res = (B-A)/X;
    cout<<res<<endl;
    
  }
    return 0;
} 