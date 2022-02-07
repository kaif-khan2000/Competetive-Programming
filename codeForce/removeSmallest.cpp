#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int i=0,j=1;
		while(i<n && j<n){
			if(a[j]-a[i] <= 1){
				a.erase(a.begin()+i);
				j = i;
				i = i-1;
				n--;
			}
			i++;
			j++;
		}
		if (n==1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
