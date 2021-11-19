#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    int t;
    cin >> t;
    vector<int> lists;
    int maxx , flag = 1;
    for (int i=0;i<t;i++) {
        int x;
        cin >> x;
        lists.push_back(x);
        if (flag == 1) {
            maxx = x;
            flag = 0;
        }
        else if (flag == 0 && maxx < x) maxx = x;
    }
    vector<int> poly(maxx+1);
    int cnt = 0,num = 1;
    while (cnt != maxx) {

        string numm = to_string(num);
        if (num % 3 != 0 && numm[numm.size()-1] != '3') {
            poly[cnt] = num;
            cnt++;
        }
        num++;
    }

    for (int i=0;i<t;i++) {
        cout << poly[lists[i]-1] << endl;
    }
    return 0;
}
