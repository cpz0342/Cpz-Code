#include<iostream>
using namespace std;

string s;
int a,b;

bool work(int l,int r){
	if(s[l]=='('){
		int j=l;
		for(;s[j]!=')';j++);
		if(j==r){
			return work(l+1,r-1); 
		}
	}
	int flg=0;
	if(l==r){
		if(s[l]=='0')return 0;
		else if(s[l]=='1')return 1;
	}
	for(int i=l;i<=r;i++){
		if(s[i]=='(')flg++;
		else if(s[i]==')')flg--;
		else if(s[i]=='&'&&flg==0){
			bool x=work(l,i-1);
			if(x==0){
				a++;
				return 0;
			}
			else {
				int k=i,flg2=0;
				for(;;k++){
					if(s[k]=='(')flg2++;
					else if(s[k]==')')flg2--;
					if((s[k]=='|'||s[k]=='&')&&flg2==0)break;
				}
				bool y=work(i+1,k);
				return x&y;
			}
		}else if(s[i]=='|'&&flg==0){
			bool x=work(l,i-1);
			if(x==1){
				b++;
				return 1;
			}
			else {
				bool y=work(i+1,r);
				return x|y;
			}   
		}//else if()
	}
}
int main(){
	//freopen("expr.in","r",stdin);
	//freopen("expr.out","w",stdout);
	cin>>s;
	cout<<work(0,s.length()-1)<<endl<<a<<' '<<b;
	return 0;
}
