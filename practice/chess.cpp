#include <iostream>
#include<iomanip>
using namespace std;

int main (){
  int t;
  cin>>t;
  while (t--)
  {  
    int n,a,b;
    cin>>n>>a>>b;
    int res=(2*(180+n)-(a+b));
    cout<<res<<endl;
  }
    return 0;
}    