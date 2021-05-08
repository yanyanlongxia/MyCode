#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

static int cnt[26], charToVal[26], uniqueChar = 0;
bool used[10];
vector<int> valToChar;
string s1, s2, s3;
void Count(string &s){
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(cnt[s[i] - 'a'] == 0){
            uniqueChar++;
            valToChar.emplace_back((int)(s[i] - 'a'));
        }
        cnt[s[i] - 'a'] = 1;
    }
}

long long calc(string s){
    long long tmp = 0; int n = s.length();
    for(int i = 0; i < n; i++){
        tmp = tmp * 10LL + 1LL * charToVal[s[i] - 'a'];
    }
    // cout << tmp << '\n';
    return tmp;
}

void process(int &mode){
    if(charToVal[s1[0] - 'a'] == 0 || charToVal[s2[0] - 'a'] == 0 || charToVal[s3[0] - 'a'] == 0){
        return;
    }
    long long n1 = calc(s1), n2 = calc(s2), n3 = calc(s3);
    if(n1 + n2 == n3) mode = 1;
    return;
}

void backtrack(int cur, int &solved){
    if(cur == uniqueChar){
        process(solved);
        return;
    }
    int cur_char = valToChar[cur];
    for(int i = 0; i < 10; i++){
        if(used[i]) continue;
        used[i] = 1;
        charToVal[cur_char] = i;
        backtrack(cur + 1, solved);
        if(solved) return;
        used[i] = 0;
        charToVal[cur_char] = 0;
    }
    return;
}


void solve(){
    cin >> s1 >> s2 >> s3;
    Count(s1); Count(s2); Count(s3);
    int solved = 0;
    // for(int i = 0; i < uniqueChar; i++){
    // 	cout << valToChar[i] << ' ';
    // }
    // cout << '\n';
    if(uniqueChar > 10) {
        cout << "UNSOLVABLE"<<'\n'; return;
    }
    backtrack(0, solved);
    // cout << solved << '\n';
    if(solved == 0){
        cout << "UNSOLVABLE"<<'\n'; return;
    }
    // cout << "What\n";
    cout << calc(s1) << '\n' << calc(s2) << '\n' << calc(s3)<<'\n';
    return;
}


signed main(){
    int testcase = 1;
    // cin >> testcase;
    while(testcase--){
        solve();
    }
    return 0;
}