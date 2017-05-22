#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, m, ans = 0, i = 0; 
	cin >> n >> m;
	ans = floor((log(m)-log(n))/(log(3)-log(2)))+1;
	while(n<=m){
		n=n*3;
		m=m*2;
		i++;
	}
	cout << ans;
	return 0;
}
