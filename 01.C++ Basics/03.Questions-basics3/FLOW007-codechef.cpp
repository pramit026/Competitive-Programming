// https://www.codechef.com/LRNDSA01/problems/FLOW007
#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		int rev = 0;
		while(n > 0){
			int rem = n % 10 ;
			rev = rev * 10 + rem;
			n = n / 10;
		}
		cout<< rev << endl;
	}
	
	
	return 0;
}