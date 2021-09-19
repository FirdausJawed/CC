#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int N,K,count_star;
        cin>>N>>K;
         string str;
        cin>>str;
        count_star=0;
        for (int i = 0; i < N; i++)
        {
            if (str [i] == '*')
            {
                count_star++;
                if (count_star >= K)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                
            }
            else{
                count_star=0;
            }
            if (i==N-1)
            {
               cout<<"NO"<<endl;
            }
            
        }
       
    }
    return 0;
}