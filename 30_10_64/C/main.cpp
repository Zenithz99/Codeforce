#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

void print(vector<int> l) {
    for (int i=0;i<l.size();i++) cout << l[i] << " ";
    cout << endl;
    return;
}

void solve() {
    int n;
    cin >> n;
    vector<int> l;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        l.push_back(x);
    }
    int flag = 0;
    while (1) {
        for (int i=l.size()-1;i>=0;i--) {
            if (l[i] % (i+2) != 0) {
                l.erase(l.begin() + i);
                //cout << l[i] << " ";
                //print(l);
                break;
            }
            if (i == 0) flag = 1;
        }
        if (flag == 1 || l.size() == 0) break;
    }
    //cout << endl;
    if (flag == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
    return 0;
}
