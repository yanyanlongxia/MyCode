//File: U134036.cpp
//Author: yanyanlongxia
//Date: 2020/10/8
//
#include <string>
#include <iostream>
using namespace std;

int main() {
    string ans =
            "ABCCACACCDDBACD"
            "FTTFBB"
            "FTTTCA"
            "FFTTCC"
            "CBDAC"
            "CBDCB";
    int no;
    cin >> no;
    cout << ans[no - 1];
    return 0;
}
