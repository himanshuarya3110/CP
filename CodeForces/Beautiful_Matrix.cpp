// Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j]==1){
                int x=abs(2-i);
                int y=abs(2-j);
                int sum=x+y;
                cout<< sum;
            }
        }
    }
    
    
    return 0;
}
