//
// Created by suaio on 2025-06-18.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <vector>

using namespace std;

string solution(int n) {

    string answer = "";
    answer.reserve(n * 3);

    for(int i = 0; i < n; ++i){
        answer += (i % 2 == 0) ? "수" : "박";
    }

    return answer;
}

int main() {
    SetConsoleOutputCP(65001);

    cout << "숫자를 옆에 입력하쇼 ->";

    int n;
    cin >> n;

    // cout << solution(5) << endl;
    cout << solution(n) << endl;

    return 0;
}