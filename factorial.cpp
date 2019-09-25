#include <iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++)
    {ans = ans* i;}
    return ans;
}

int main() {
	int n;
	int r;
	int ans;
	cin>>n>>r;
	int fn =fact(n);
	int fr= fact(r);
	int fnr=fact(n-r);
	ans =fn/(fr*fnr);
	cout<<ans;
	return 0;
}
