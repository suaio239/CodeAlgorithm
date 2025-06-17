//
// Created by suaio on 2025-06-17.
//

#include <iostream>
#include <string>
#include <vector>
#include <bits/ostream.tcc>

using namespace std;

string solution(string s) {

    string answer = "";
    int length = s.size();

    if (length % 2 != 0){
        answer += s[length / 2];
    }else{
        answer += s.substr(length / 2 - 1, 2);
    }

    return answer;
}

int main() {
    string s;

    s = "abcde";
    cout << solution(s) << endl;

    s = "qwer";
    cout << solution(s) << endl;

    return 0;
}