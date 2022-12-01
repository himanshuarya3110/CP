// 32B - Borze
// https://codeforces.com/problemset/problem/32/B?f0a28=1


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;

    for (int j = 0; j < str.length(); j++){

        if((str[j] == '-') && (str[j+1] == '.')){
            cout<<'1';
            j++;
        }
        else  if(str[j] == '.') {
                cout<<'0';
        }    
        else if((str[j] == '-') && (str[j+1] == '-')){
                cout<<'2';
                j++;
        }    
    }
    
    return 0;
}
