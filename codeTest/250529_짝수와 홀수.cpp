//
// Created by suaio on 25. 5. 29.
// programmers 250529 - 짝수와 홀수
// https://school.programmers.co.kr/learn/courses/30/lessons/12937?language=cpp

#include <string>
#include <iostream> // 입출력 위해 사용

using namespace std;

string solution(int num) {

    string answer = "";

    // 2로 나눠지면 짝수 아니면 홀수
    if (num % 2 == 0){
        answer = "Even";
    }else {
        answer = "Odd";
    }

    return answer;
}

int main() {

    int num;
    cin >> num;

    cout << solution(num) << endl;

    return 0;
}