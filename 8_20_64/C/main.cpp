#include <bits/stdc++.h>
#include <math.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll want;
        cin >> want;
        ll n = sqrt(want);
        if (n*n == want) cout << n << " " << 1 << endl;
        else {
            if (want == ((n+1) * (n+1)) - (n)) cout << n+1 << " " << n+1 << endl;
            else if (want > n * n && want < ((n+1) * (n+1)) - (n) ) {
                cout << want - (n*n) << " " << n+1 << endl;
            } else {
                cout << n+1 << " " << (n+1) - (want - (((n+1) * (n+1)) - (n))) << endl;
            }
        }
    }
    return 0;
}
