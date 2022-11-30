// Tour of King
// https://www.codechef.com/START67D/problems/KNGTOR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b,sum=0;
	cin>>n;
	while(n != 0){
	   cin>>a;
	   cin>>b;
	   
	   sum=(a*5+b*7);
	   cout<<sum<<endl;
	    n--;
	}
	return 0;
}
