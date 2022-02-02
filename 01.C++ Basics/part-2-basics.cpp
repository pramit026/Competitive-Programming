#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	// cout<< 7 / 2 <<endl;
	// cout<< 7 / 2.0 << endl;
	// cout<< 'c' + 1;
	
	// double a = 3 / 2.0;
	// cout<< a;
	
	// operator precedence
	
	// cout << 7 /2 *3 << endl;
	// cout << 7 * 3 / 2;
	
		
		// overflow
	
	// int , char, long int, long long int, float,double
	// // very important to remember while doing competitive programming
	// -10^9 < int < 10^9
	// -10^12 < long int < 10^12
	// -10^18 < long long int < 10^18
	
	// int a = 100000;
	// int b = 100000;
	// long long int c = a *1LL* b;
	// // 1 ll will interpret as it is a long long int
	// cout << c << endl;
	
	// int mx = INT_MAX;
	// cout << mx + 1;
	
	
	
	// double a = 100000;
	// double b = 100000;
	// double c = a * b;
	// c = 1e24;
	// // cout<< fixed << setprecision(0) << c << endl;
	// cout<< fixed << c << endl;
	// // fixed is written to get rid of that scientific output
	
	
			// Question
	/*
	Given rectangle of length l and b. print area of rectangle
	
	Constrains:
	1 <= l <= 10^9
	1 <= b <= 10^9
	
	Input Format:
	2 space separated integer l and b
	
	Output Format:
	Single number which is area of rectangle
	
	Sample input:
	3 4
	
	Sample output:
	12
	
	*/
	long long l,b;
	cin >> l >> b;
	cout<< l * b<<'\n';
	
	
	return 0;
}