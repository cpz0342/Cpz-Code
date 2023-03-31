#include<iostream>
using namespace std;
string s;
int ans1,ans2,t,v;
int main() {
	cin>>s;
	int i=0,len=s.length();
	for(; i<=len;i++) {
		if(t) {
			if(s[i]=='(') {
				int x=1;
				while(x) {
					i++;
					if(s[i]=='(')x++;
					else if(s[i]==')')x--;
				}
			}
			else if(t==1&&s[i]=='|')t=0;
			else if(t==1&&s[i]=='&')ans1++;
			else if(t==2&&s[i]=='|')ans2++;
			else if(s[i]==')')t=0;
		}else{
			if(s[i]=='1')v=1;
			else if(s[i]=='0')v=0;
			else if(s[i]=='&'&&v==0)t=1,ans1++;
			else if(s[i]=='|'&&v==1)t=2,ans2++;
		}
	}
	printf("%d\n%d %d",v,ans1,ans2);
	return 0;
}
