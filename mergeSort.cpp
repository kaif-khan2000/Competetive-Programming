#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>

using namespace std;

vector<int> nums;

void merge(int l, int r){
	int mid = (l+r)/2;
	int i=l,j=mid+1, k = 0;
	vector<int> temp(r-l+1);
	while (i<=mid && j<=r){
		if (nums[i] < nums[j]){
			temp[k] = nums[i];
			i++;
		}
		else {
			temp[k] = nums[j];
			j++;
		}
		k++;
	}
	while (i<=mid){
		temp[k] = nums[i];
		i++;
		k++;
	}
	while (j<=r){
		temp[k] = nums[j];
		j++;
		k++;
	}

	for (int i = l,k=0; i <= r; i++,k++)
	{
		nums[i] = temp[k];
	}
	

}

void mergeSort(int l , int r){
	if (l >= r) return;
	int mid = (l+r)/2;
	mergeSort(l,mid);
	mergeSort(mid+1,r);
	merge(l,r);

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	nums = {-1,5,4,3, 18, 19, 2, 6, 5, 8};
	mergeSort(0,nums.size()-1);
	for (int i = 0; i < (int)nums.size(); i++)
	{
		cout<< nums[i] << ' ';
	}
	return 0;
	
}
