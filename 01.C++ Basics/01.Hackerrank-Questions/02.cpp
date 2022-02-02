// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	long long b;
	char c;
	long double d;
	long double e;
	
	cin >> a >> b >> c >> d >> e;
	
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
	cout<< std::fixed << std::setprecision(3) << d << endl;
	cout<< std::fixed << std::setprecision(9) << e << endl;
	
	return 0;
}