 #include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t ;
    cin >> t;
        
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1)
        {
            cout << "no\n";
            continue;
        }
        int key = 1;
         for(int i = 2; i*i <= n ; i++)
         {
            if(n % i == 0)
            {
                key = 0;
                break;
            }
        }
        if(key)
            cout << "yes\n";
        else
            cout << "no\n";

        }
        return 0;
    }