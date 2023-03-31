//使用优先队列
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 10;
inline int read() {
	char c = getchar(); int x = 0, f = 1;
	while(c < '0' || c > '9') {if(c == '-') f = -1; c = getchar();}
	while(c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
int N;
priority_queue<int, vector<int>, greater<int> >q;
int main() {
	freopen("a.in", "r", stdin);
	N = read();
	int tot = 0;
	while(N--) {//O(n)
		int opt = read();
		if(opt == 1) {
			int x = read();
			q.push(x);
			tot++;
		} else if(opt == 2){
			if(tot == 0) {
				puts("gg");
				return 0;
			}
			printf("%d\n", q.top());
		} else {
			if(tot == 0) {
				puts("gg");
				return 0;
			}
			q.pop();
		}
	}
	return 0;
}

