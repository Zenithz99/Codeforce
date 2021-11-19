#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

bool cmp(vector<int> a, vector<int> b) {
    return *max_element(a.begin(),a.end()) < *max_element(b.begin(),b.end());
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> cave;
        for (int i=0;i<n;i++) {
            vector<int> tmp;
            int N;
            cin >> N;
            for (int j=0;j<N;j++) {
                int x;
                cin >> x;
                tmp.push_back(x);
            }
            cave.push_back(tmp);
        }

        sort(cave.begin(),cave.end(),cmp);
        int out = 0;
        int size_pass = 0;
        for (int i=0;i<n;i++) {
            int maxx = *max_element(cave[i].begin(),cave[i].end());
            maxx++;
            maxx -= max_element(cave[i].begin(),cave[i].end()) - cave[i].begin();
            if (out < maxx) {
                out = maxx - size_pass;
            }
            size_pass += cave[i].size();
        }

        cout << out << endl;

        /*
        int minn = INT_MAX;
        for (int i=0;i<n;i++) {
            int maxx = *max_element(cave[i].begin(),cave[i].end());
            maxx++;
            minn = min(minn,maxx);
        }
        cout << minn << endl;
        */
	}
    return 0;
}


// 9 10         10
// 50 70        70
// 100 200      200

/*
1
4
2 9 10
5 50 30 20 10 70
4 100 200 300 500
9 10 2 4 5 6 2 4 5 6

2
1
1 42
2
3 10 20 8
2 12 11
*/
