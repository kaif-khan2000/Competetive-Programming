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
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int first = n-1, second = 0, count = 0;
	while(second != first){
		if (count%2 == 0){
			first--;
		}
		else{
			second++;
		}
		count++;
	}
	cout<<arr[first]<< endl;
}
