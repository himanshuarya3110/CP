// https://codeforces.com/problemset/problem/266/A
// Stones_on_the_Table


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<char> a;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin>>x;
        a.push_back(x);
    }
    
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[i+1]){
            c++;
        }
    }
    cout<<c;



    return 0;
}
