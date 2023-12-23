/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element 
is at least as large as the previous element. On each move, you may increase the value of any element by one. 
What is the minimum number of moves required?

Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1,x_2,...,x_n: the contents of the array.
Output
Print the minimum number of moves.
Constraints
1 <= n <= 2*10^5
1 <= x_i <= 10^9

Example
Input:
5
3 2 5 1 7
 
Output:
5

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
	vector<int> arr(n);
	loop(i,n) cin>> arr[i];
	
	ll moves=0;
	
	loop(i,n-1){
		while(arr[i+1]<arr[i]) {
			arr[i+1]++;
			moves++;
		}
	}
	cout<<moves;
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
