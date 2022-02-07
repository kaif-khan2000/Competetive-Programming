#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int t,n,k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=n-1;
        while(i<n && j>=0 && k>0){
            if(a[i]<b[j]){
                swap(a[i],b[j]);
                k--;
                i++;
            }
            else{
                j--;
            }
        }
        int res = 0;
        for(int i=0;i<n;i++){
            res += a[i];
        }
        cout << res << endl;
    }
    
}
