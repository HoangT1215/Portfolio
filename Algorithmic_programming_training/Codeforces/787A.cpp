#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	while(b!=d&&b<1e5)
	{
		b>d?d+=c:b+=a;
	}
	cout << (b==d?b:-1);
}