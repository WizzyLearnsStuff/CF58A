#include<iostream>

using namespace std;

int main() {
	const char *h = "hello";
	int st = 0;

	char c;
	while(cin >> c) {
		st += (c == h[st]);
		if (st == 5) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
