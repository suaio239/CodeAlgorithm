// programmers 250602 - 나머지가 1이 되는 수 찾기
// https://school.programmers.co.kr/learn/courses/30/lessons/87389

#include <string>
#include <iostream>

using namespace std;

int solution(int n) {

  if(n >= 3 && n <= 1000000){
    for(int x = 2; x < n; ++x){
      if(n % x == 1){
        return x;
      }
    }
  }

  return 0;
}

int main() {
  // 테스트용 입력
  int n1 = 10;
  int n2 = 12;

  // 함수 실행 결과 출력
  cout << "solution(" << n1 << ") = " << solution(n1) << endl;
  cout << "solution(" << n2 << ") = " << solution(n2) << endl;

  return 0;
}