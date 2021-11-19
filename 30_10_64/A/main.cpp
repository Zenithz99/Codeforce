#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

void solve() {
    int n;
    cin >> n;
    int out = 0;
    int pos = 0;
    int x;
    for (int i=1;i<=n;i++) {
        cin >> x;
        if (x > (i+pos)) {
            if (i == 1) {
                int tmp = x - (i+pos);
                out += tmp;
                pos += tmp;
            } else {
                int tmp = x - (i+pos);
                out += tmp;
                pos += tmp;
            }

        }
        //cout << x << " " << out << " " << pos << endl;
    }
    cout << out << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
    return 0;
}
