#include <bits/stdc++.h>

using namespace std;

long buyMaximumProducts(int n, long k, vector <int> a) {
    // Complete this function
    vector<pair<int,int>> v;
    for(int i=0;i<n;++i){
        v.push_back(make_pair(a[i],i+1));
    }
    sort(v.begin(),v.end());
    float ans=0;
    for(int i=0;i<n;++i){
        ans+=(v[i].second<k/v[i].first?v[i].second:k/v[i].first);
        k-=v[i].first*(v[i].second<(k/v[i].first)?v[i].second:(k/v[i].first));
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
    	cin >> arr[arr_i];
    }
    long k;
    cin >> k;
    long result = buyMaximumProducts(n, k, arr);
    cout << result << endl;
    return 0;
}