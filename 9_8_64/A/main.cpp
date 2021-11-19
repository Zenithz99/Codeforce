#include <iostream>

using namespace std;

bool is(string sub) {
    int a=0,b=0;
    for (int i=0;i<sub.size();i++) {
        if (sub[i] == 'a') a++;
        else b++;
    }
    return a == b;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string in;
        cin >> in;
        int flag = 1;
        for (int l=in.size();l > 1;l--) {
            for (int i=0;i+l-14<in.size();i++) {
               // cout << in.substr(i,l) +"*"<< endl;
                if (is(in.substr(i,l))) {
                    cout << i+1 << " " << i+l << endl;
                    flag = 0;
                }
                if (flag == 0) break;
            }
            if (flag == 0) break;
        }
        if (flag == 1) cout << "-1 -1" << endl;
    }
    return 0;
}
