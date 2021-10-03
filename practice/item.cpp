#include <iostream>
#include<iomanip>
using namespace std;

int main (){
 int t;
  cin>>t;
  while (t--)
  { 

    int N,A,B,C;
    cin>>N>>A>>B>>C;

    int type1=0;
    int type2=0;
    for (int i = 0; i <= A; i++)
    {
       type1++;
       B--;
    }
    if(B>=C){
        for (int i = 0; i <= C; i++)
        {
        type2++;     
        }
    }
    
    if (N==type1+type2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


  }
    return 0;
}