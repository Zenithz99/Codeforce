#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

void print(vector<int> a) {
    for (int i=0;i<a.size();i++) cout << a[i] << " ";
    cout << endl;
    return;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
        int n;
        cin >> n;
        vector<int> lists;
        vector<bool> visit(n,false);
        vector<int> news;
        for (int i=0;i<n;i++) {
            int x;
            cin >> x;
            lists.push_back(x);
        }
        int cnt = 0;
        int flag = 1;
        for (int i=0;i<lists.size();i++) {
            if (i == 0) continue;

            if (lists[i] % 2 == 0 && lists[i-1] % 2 == 0) {
                int curr = i;
                while (1) {
                    if (curr >= lists.size()) {
                        flag = 0;
                        break;
                    }
                    curr++;
                    if (lists[curr] % 2 == 1) {
                        cnt += curr - i;
                        lists.erase(lists.begin()+curr);
                        break;
                    }
                }
            }
            else if (lists[i] % 2 == 1 && lists[i-1] % 2 == 1) {
                int curr = i;
                while (1) {
                    if (curr >= lists.size()) {
                        flag = 0;
                        break;
                    }
                    curr++;
                    if (lists[curr] % 2 == 0) {
                        cnt += curr - i;
                        lists.erase(lists.begin()+curr);
                        break;
                    }
                }
            }
            //print(lists);
            if (flag == 0) break;
        }
        if (flag == 1) cout << cnt << endl;
        else cout << "-1" << endl;
	}
    return 0;
}
/*
1
2
8 6
*/
