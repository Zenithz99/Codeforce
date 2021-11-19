#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

bool beautiful(string num) {
    int num1,num2,flag = 0;
    for (int i=0;i<num.size()-1;i++) {
        if (flag == 0) {
            flag = 1;
            num1 = num[i];
        } else if (flag == 1 && num[i] != num1) {
            num2 = num[i];
            flag = 2;
        } else if (flag == 2 && num[i] != num1 && num[i] != num2) {
            return false;
        } else continue;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string num;
        int k;
        cin >> num >> k;
        if (k == 1) {
            char minn = num[0];
            for (int i=0;i<num.size();i++) {
                if (num[i] > num[0] && minn > num[i]) minn = num[i];
            }
            for (int i=0;i<num.size();i++) {
                cout << minn;
            }
            cout << endl;
        } else {
            if (beautiful(num)) cout << num << endl;
            else {
                char num1 = num[0];
                int i=0,pos=0;
                while (num[i] == num1) {
                    pos++;
                    i++;
                }
                //cout << pos << endl;
                string mins;
                int flag = 1;
                for (int j=pos;j<num.size();j++) {
                    string test = num;
                    for (int k=pos;k<num.size();k++) test[k] = num[j];
                    //cout << stoi(test) << endl;
                    if (stoi(test) > stoi(num) && flag == 1) {
                        mins = test;
                        flag = 0;
                    } else if (flag == 0 && stoi(test) > stoi(num) && stoi(mins) > stoi(test)) mins = test;
                }
                string news = mins;
                for (int j=pos+1;j<num.size();j++) {
                    news[j] = mins[0];
                }
                if (stoi(news) < stoi(mins)) mins = news;

                news = num;
                for (int j=0;j<num.size();j++) {
                    news[j] = num[0];
                }
                if (stoi(news) > stoi(num) && stoi(news) < stoi(mins)) mins = news;
                cout << mins << endl;
            }

        }


    }
    return 0;
}
