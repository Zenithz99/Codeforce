#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

void print(vector<vector<char>> mat) {
    for (int i=0;i<mat.size();i++) {
        for (int j=0;j<mat.size();j++) cout << mat[i][j];
        cout << endl;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        vector<char> tmp(n,'-');
        vector<vector<char>> mat(n,tmp);
        string li;
        cin >> li;
        for (int i=0;i<li.size();i++) {
            if (li[i] == '1') {
                for (int j=0;j<n;j++) mat[i][j] = '+';
            }
            mat[i][i] = 'X';
        }
        //print(mat);
        int fl = 1;
        for (int j=0;j<li.size();j++) {
            int win = 0;
            for (int i=j;i<li.size();i++) {
                if (i == j) continue;

                if (li[i] == '1' && li[j] == '1') {
                    mat[i][j] = '=';
                    mat[j][i] = '=';
                }

                else if (li[i] == '2' && li[j] == '1') {
                    mat[i][j] = '-';
                    mat[j][i] = '+';
                }

                else if (li[i] == '2' && li[j] == '2') {
                    if (win == 0) {
                        win++;
                        mat[i][j] = '+';
                        mat[j][i] = '-';
                    } else {
                        mat[i][j] = '-';
                        mat[j][i] = '+';
                    }
                }


            }

        }

        //print(mat);

        for (int i=0;i<n;i++) {
            if (li[i] == '1') continue;
            else {
                int flag = 1;
                for (int j=0;j<n;j++) {
                    if (mat[i][j] == '+') {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1) {
                    fl = 0;
                    break;
                }
            }
        }
        if (fl == 0) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            print(mat);
        }
	}
    return 0;
}
