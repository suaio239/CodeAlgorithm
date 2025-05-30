//
// Created by suaio on 25. 5. 30.
// programmers 250530 - 평균 구하기
// https://school.programmers.co.kr/learn/courses/30/lessons/12944

#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> arr) {

    double answer = 0;

    // 배열을 계산하기 위한 for문
    for(double n : arr){
        answer += n;
    }

    return answer / arr.size();
}

int main() {

    // 테스트용 입력
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {5, 5};

    // 함수 호출 및 결과 출력
    cout << "평균1: " << solution(arr1) << endl;  // 2.5 출력
    cout << "평균2: " << solution(arr2) << endl;  // 5.0 출력

    return 0;
}