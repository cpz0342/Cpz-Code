#include<bits/stdc++.h>
#include<ctime>
using namespace std;
int rnd() {
	return rand() << 15 | rand();
}
int tot;
int main() {
	freopen("a.in", "w", stdout);
	srand((unsigned)time(0));
	int N = (rand() % 30) + 1;//[1, 30]
	cout << N << '\n';
	while(N--) {
		int opt = rand() % 3 + 1;//[1, 3]
		if(opt == 3 && tot == 0) opt = 1;
		if(opt == 2 && tot == 0) opt = 1;
		cout << opt << ' ';
		if(opt == 1) {
			int x = rnd();
			cout << x << '\n';
			tot++;
		} else if(opt == 2){
			cout << '\n';
		} else {
			tot--;
			cout << '\n';
		}
	}
	return 0;
}

