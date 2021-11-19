#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main()
{
	int t;
	cin >> t;
	while (t--) {
        int a=0,b=0,c,d;
        cin >> c >> d;
        if (c > d) swap(c,d);
        if (a == c && b == d) cout << "0" << endl;
        else {
            int p = (c+d)/2;
            a += p;
            b += p;
            if (a == c && b == d) cout << "1" << endl;
            else {
                int dif = d-a;
                a -= dif;
                b += dif;

                if (a == c && b == d) cout << "2" << endl;
                else cout << "-1" << endl;
            }
        }
	}
    return 0;
}
