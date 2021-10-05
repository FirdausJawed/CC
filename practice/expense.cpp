#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        double q,p;
        cin>>q>>p;
        if(q > 1000){
            p = p - (p * 10/100);
        }
        double result = q*p;
        cout << fixed << setprecision(6) <<result<<endl;
    }
    
    return 0;
}
