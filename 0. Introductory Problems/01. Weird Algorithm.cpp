/*
Problem Statement:

Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. 
The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
Your task is to simulate the execution of the algorithm for a given value of n.

Input
The only input line contains an integer n.
Output
Print a line that contains all values of n during the algorithm.

Constraints
1 <= n <= 10^6
*/


//code:

#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fr(i,a,b) for(int i=a; i<b; i++)
#define loop(x,n) for(int x=0; x<n; ++x)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()

using namespace std;

void precal(){

}

void solve() {
	
	int n;
	cin>>n;
	
	while(n!=1){
		cout<<n<<" ";
		if(n&1) n= (n*3)+1;
		else n= n/2;
	}
	cout<<1;
}


int main(){

  fast_io;
  cout<<fixed;
  cout<< setprecision(10);
  precal();
  int t=1;
  //cin >>t;
  for(int i=1; i<=t; i++){
    //cout<< "Case #" << i << ": ";
    solve();
  }

  return 0;
