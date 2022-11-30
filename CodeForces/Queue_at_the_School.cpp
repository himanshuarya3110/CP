// Queue at the School
// https://codeforces.com/problemset/problem/266/B?f0a28=1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    cin>>t;
    char arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    while (t--)
    {
        for (int j = 0; j <=n; j++){
            if (arr[j]=='B')
            {
                if (arr[j+1]=='G')
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    j++;
                }
            }  
        }
    }
    

    for (int i = 0; i < n; i++){
        cout<<arr[i];
    }


    return 0;
}
