#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long  arr[n];
    for(long long  i =0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    long long  ans = 0;
    for(long long  i =0; i<n; i++){
        long long  temp = arr[i]*(n-i);
        if(temp>ans) ans = temp;
    }
    cout<<ans;
    return 0;
}