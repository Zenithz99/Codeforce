#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int gcd(int a,int b) {
    if (a < b) swap(a,b);
    if (b == 0) return a;
    return gcd(a % b , b);

}
int glob;
int cnt_de = 0;
int de(int x,int y) {
    cnt_de++;
    //cout << x << " " << y << " " << cnt_de << endl;
    if (y == 0 || cnt_de > 1000) return 0;
    int g = gcd(x,y);
    if (g != 1 && g > glob) return g;
    return de(x-1,y-1);
}

int cnt_in = 0;
int in(int x,int y) {
    cnt_in++;
    //cout << x << " " << y << " " << cnt_in << endl;
    if (cnt_in > 1000) return 0;
    int g = gcd(x,y);
    if (g != 1 && g > glob) return g;
    return in(x+1,y+1);
}

pii recur(int x,int y) {
    if (x == y) return {0,0};
    int g = gcd(x,y);
    glob = g;
    int re1 = de(x-1,y-1);
    int re2 = in(x+1,y+1);
    //cout << "-----" << re1 << " " << re2 <<endl;
    if (g >= re1 && g >= re2) return {g,0};
    if (re1 > re2) return {re1,cnt_de};
    else if (re1 < re2) return {re2,cnt_in};
    else if (re1 == re2 && cnt_de < cnt_in) return {re1,cnt_de};
    else return {re2,cnt_in};
}



int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin >> x >> y;
        if (x < y) swap(x,y);
        cnt_de = 0;
        cnt_in = 0;
        pii result = recur(x,y);
        cout << result.first << " " << result.second << endl;
    }


    return 0;
}
