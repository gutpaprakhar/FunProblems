//Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//By considering the terms in the Fibonacci sequence whose values do not exceed n where n is a number entered by user, find the sum of the even-valued terms.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=0,b=1,c=0;
	int n,ans=0;
	cin>>n;
	if(n==1 or n==2) {
		cout<<0<<endl;
		return 0;
	}
	while(c<=n){
		if(c%2==0){
			ans+=c;
		}
		c=a+b;
		a=b;b=c;
	}
	cout<<ans<<endl;
	return 0;
}
