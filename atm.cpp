#include <iostream>
#include<iomanip>
using namespace std;

int main (){

  float y;
  int x;
  cin>>x>>y;

  if(x%5==0 && x<=y-0.5){
      y=y-x-0.5;
    cout<<fixed<<setprecision(2)<<y<<endl;  
  }
  else{
     cout<<fixed<<setprecision(2)<<y<<endl;  
  }

    return 0;
}