// programmers 250527 - 짝수의 합
// https://school.programmers.co.kr/learn/courses/30/lessons/120831?language=cpp

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n)
{
  int answer = 0;

  if (n > 0 && n <= 1000){
    for (int i = 2; i <= n; i += 2){
      answer += i;
    }
  }else{
    answer = -1; // 예외
  }

  return answer;
}

int main()
{
  int n;
  cin >> n;
  int result = solution(n);
  cout << result << "\n";
  return 0;
}