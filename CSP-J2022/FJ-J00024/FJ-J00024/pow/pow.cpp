#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a,b;
unsigned long long ans=1;
int main(){
	freopen("pow.in","r",stdin);
	freopen("pow.out","w",stdout);
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		ans*=a;
		if(ans>1000000000){
			cout<<-1;
			return 0;
		}
	}
	if(ans<=1000000000)cout<<ans;
	else cout<<-1;
	return 0;
}