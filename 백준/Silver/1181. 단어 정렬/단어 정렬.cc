#include <bits/stdc++.h>
using namespace std;

int cmp(string a, string b) {
    int len_a=a.length(),len_b=b.length();
	if (len_a == len_b) return a < b;
	else return len_a <  len_b;
}
string input[20000];
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) cin >> input[i];
	sort(input, input + T, cmp);
	for (int i = 0; i < T; i++) {
		if (input[i] == input[i - 1]) continue;
		cout << input[i] << "\n";
	}
	return 0;
}