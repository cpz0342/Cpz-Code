//±©Á¦Ð´·¨
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 10;
inline int read() {
	char c = getchar();
	int x = 0, f = 1;
	while(c < '0' || c > '9') {
		if(c == '-') f = -1;
		c = getchar();
	}
	while(c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
int N;
int st[MAXN], l, r;

int main() {
	freopen("a.in", "r", stdin);
	N = read();
	l = 1;
	r = 0;
	while(N--) {
		int opt = read();
		if(opt == 1) {
			int x = read();
			st[++r] = x;
		} else if(opt == 2) {
			sort(st + l, st + r + 1);
			printf("%d\n", st[l]);
		} else {
			sort(st + l, st + r + 1);
			l++;
		}
	}
	return 0;
}

