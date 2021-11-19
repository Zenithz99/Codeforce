#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

bool sorted(vector<int> arr) {
    for (int i=0;i<arr.size()-1;i++) {
        if (arr[i] > arr[i+1]) return false;
    }
    return true;
}



int main()
{
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i=0;i<n;i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int I=0;
        while (!sorted(arr)) {
            I++;
            if (I % 2 == 1) {
                for (int i=0;i<n-2;i+=2) {
                    if (arr[i] > arr[i+1]) swap(arr[i],arr[i+1]);
                }
            } else {
                for (int i=1;i<n-1;i+=2) {
                    if (arr[i] > arr[i+1]) swap(arr[i],arr[i+1]);
                }
            }
        }
        cout << I << endl;
	}

    return 0;
}
