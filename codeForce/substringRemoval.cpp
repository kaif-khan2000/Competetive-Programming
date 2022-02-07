#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string seq;
		cin >> seq;
		vector<int> v;
		int length = 0;
		for(char c: seq){
			if (c == '0'){
				if (length != 0) v.push_back(length);
				length = 0;
				continue;
			}
			length++;
		}
		if (length != 0) v.push_back(length);
		sort(v.begin(), v.end(), greater<int>());
		int sum = 0;
		for(int i=0;i<v.size();i+=2){
			sum += v[i];
		}
		cout << sum << endl;
	}
}
