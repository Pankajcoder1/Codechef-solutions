#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define mod 1000000007
#define mp make_pair
 
int scan(){
	register int c = getchar_unlocked();
	register int n = 0;
	register int neg=0;
	for( ; ((c<48 || c>57)&&c!='-'); c = getchar_unlocked() );
	if(c=='-') {
		neg=1; c=getchar_unlocked();
	}
	for( ; (c>47 && c<58); c = getchar_unlocked() ){
		n = (n<<1) + (n<<3) +c -48;
	}
	if(neg) return -n;
	else return n;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		int a = INT_MAX, b = INT_MIN,ai=-1,bi=-1;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x>b){
				b=x;
				bi=i;
			}
			if(x<a){
				a=x;
				ai=i;
			}
		}
		if(ai<bi)
			cout<<a<<" "<<b<<endl;
		else{
			cout<<b<<" "<<a<<endl;
		}
	}
	return 0;
}
