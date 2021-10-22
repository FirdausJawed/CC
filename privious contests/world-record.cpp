#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
    float k1,k2,k3,v;
    cin>>k1>>k2>>k3>>v;

    float p = k1*k2*k3*v;
    double q = 100/p;
    if (q<9.575)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}