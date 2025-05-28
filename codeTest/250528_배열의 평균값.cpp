// programmers 250528 - 배열의 평균값
// https://school.programmers.co.kr/learn/courses/30/lessons/120817

#include <iostream> // 입출력 위해 사용
#include <vector>
#include <iomanip> // setprecision -> 총 유효숫자 n자리 위해 사용

using namespace std;

/*
* 매개변수 vector<int> -> 정수형 배열
* 반환값 double -> 평균값 소수 출력 가능
*/
double solution(vector<int> numbers) {

  double answer = 0;
  int sum = 0;

  for (int num : numbers) {
    sum += num;
  }

  // 정수 나눗셈 방지 sum -> double 형변환
  answer = static_cast<double>(sum) / numbers.size();

  return answer;
}

int main() {
  int n; // 배열의 길이
  cin >> n;

  // 정수형 벡터 생성
  vector<int> numbers(n);

  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  // 함수 호출
  double result = solution(numbers);

  // 고정 소수점 표기, 소수점 아래 한 자리(1) 출력 "줄바꿈"
  cout << fixed << setprecision(1) << result << "\n";

  return 0;
}