#include<iostream>
#include<cmath>
using namespace std;
int k;
long long n,e,d,pq,m,ed;
int main(){
	freopen("decode.in","r",stdin);
	freopen("decode.out","w",stdout);
	scanf("%d",&k);
	for(int i=1;i<=k;++i){
		scanf("%lld%lld%lld",&n,&e,&d);
		ed=e*d;
		m=n+2-ed;
		pq=n;
		long long delta=m*m-4*n;
		if(delta<0){
			printf("NO\n");
			continue;
		}
		double l1=sqrt(delta);
		long long l2=l1;
		long double ls=l1-l2;
		if(l1-l2>0||l1-l2<0||l2*l2!=delta){
			printf("NO\n");
		}
		else {
			cout<<(m-l2)/2<<' '<<(m+l2)/2<<endl;
		}
	}
	return 0;
}
//(p-1)(q-1)+1=pq-q-p+2
//			=n-p-q+2
//			=e*d

//pq=n;p+q=m=n-ed+2