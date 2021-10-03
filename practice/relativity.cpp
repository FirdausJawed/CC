#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g,c;
        cin >> g >> c;
        int min_height = (c*c)/(2*g);
        cout<<min_height<<endl;
    }
    return 0;
}