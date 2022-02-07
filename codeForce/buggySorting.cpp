#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	if (n<=2) {
		cout << -1 << endl;
	} else {
		while(n--){
			cout << n+1 << " ";
		}
	}
}
