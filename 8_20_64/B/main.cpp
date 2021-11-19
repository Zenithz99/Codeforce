#include <bits/stdc++.h>
#include <math.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int f,t,want;
        cin >> f >> t >> want;
        int p = abs(f-t)*2;
        int out=0;
        //cout << p << endl;
        if (p < f || p < t || want > p) out = -1;
        else {
            out = (want + (p/2));
            if (out > p) out %= p;
        }
        cout << out << endl;
    }
    return 0;
}
