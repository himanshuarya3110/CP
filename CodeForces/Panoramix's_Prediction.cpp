// Panoramix's_Prediction
// https://codeforces.com/problemset/problem/80/A


#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;

	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
    int x,y;
    cin>>x>>y;
    
    int i=x+1;
    if(isPrime(y)==false){
        cout<<"NO";
    }
    else{
        while(i<=y)
        {
            if(isPrime(i)==true)
                if(i==y){
                    cout<<"YES";
                    break;}
                else{
                    cout<<"NO";
                    break;}
            i++;
        }
    }
    return 0;
}
