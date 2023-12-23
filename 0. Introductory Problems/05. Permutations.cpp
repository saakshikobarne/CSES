/*
A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.

Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. 
If there are no solutions, print "NO SOLUTION".
Constraints
1 <= n <= 10^6

Example 1
Input:
5
Output:
4 2 5 3 1

Example 2
Input:
3
Output:
NO SOLUTION

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
	
	if(n==2 || n==3) cout<<"NO SOLUTION";
	else if(n==1) cout<<1;
	else{
		for(int i=2; i<=n; i+=2) cout<<i<<" ";
		for(int i=1; i<=n; i+=2) cout<<i<<" ";
	}
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
}
