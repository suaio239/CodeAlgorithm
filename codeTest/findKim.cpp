//
// Created by suaio on 25. 6. 11.
//

#include <iostream>
#include <String>
#include <Vector>
#include <windows.h>

using namespace std;

string soulution (vector<string> seoul) {

    string answer = "";
    string first = "김서방은 ";
    string last = "에 있다";
    int index = 0;

    for (const auto& name : seoul) {
        if (name == "Kim") {
            return answer += first + to_string(index) + last;
        }
        index++;
    }


    return answer;
}

int main() {

    SetConsoleOutputCP(65001);
    vector<string> seoul = {"Jane", "Kim"};
    cout << soulution(seoul) << endl;

    return 0;
}