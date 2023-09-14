#include<bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int n, k, A[2500];

bool sorted() {
	for (int i = 0; 1 + i < n; i++)
		if (A[i + 1] < A[i]) return false;
	return true;
}

int main() {
    input;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> A[i];

	int iterations = 0;
	while (!sorted()) {
		iterations++;
		multiset<int> items;
		int location = 0;
		for (int i = 0; i < n; i++) {
			items.insert(A[i]);
			if (items.size() >= k) {
				auto it = items.begin();
				A[location++] = *it;
				items.erase(it);
			}
		}
		while (!items.empty()) {
			auto it = items.begin();
			A[location++] = *it;
			items.erase(it);
		}
	}

	cout << iterations << endl;
	return 0;
}
