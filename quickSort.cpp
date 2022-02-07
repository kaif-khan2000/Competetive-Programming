#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>

using namespace std;
vector<int> nums;
int selectPivot(int l, int r){
	return l+rand()%(r-l);
}
int partition(int pivot, int l, int r){
	swap(nums[pivot],nums[l]);
	int i = l;
	for (int j = l+1; j <= r; j++)
	{
		if (nums[j] < nums[l]){
			i++;
			swap(nums[i], nums[j]);
		}
	}
	swap(nums[i],nums[l]);
	return i;
	
}
void quickSort(int l, int r){
	if (l>=r) return;
	int pivot = selectPivot(l,r);
	int k = partition(pivot,l,r);
	quickSort(l,k-1);
	quickSort(k+1,r);

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	nums = {-1,5,4,3, 18, 19, 2, 6, 5, 8};
	quickSort(0,nums.size()-1);
	for (int i = 0; i < (int)nums.size(); i++)
	{
		cout<< nums[i] << ' ';
	}
}
