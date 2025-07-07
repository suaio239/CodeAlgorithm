//
// Created by suaio on 2025-07-07.
//

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <windows.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map <char, int> check;

    for(int i = 0; i < s.size(); ++i){
        char c = s[i];

        if(check.find(c) == check.end()){
            answer.push_back(-1);
        }else{
            answer.push_back(i - check[c]);
        }
        check[c] = i;
    }


    return answer;
}

template <typename T>
void printVector(const vector<T> &vec) {
    for (const T& val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    SetConsoleOutputCP(65001);

    cout << "문자열을 입력하시오: \n";
    string s;
    cin >> s;
    vector<int> answer = solution(s);

    printVector(answer);

    return 0;
}