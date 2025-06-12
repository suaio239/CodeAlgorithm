//
// Created by suaio on 25. 6. 12.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {

    vector<int> answer;

    for(int num : arr){
        if(num % divisor == 0){
            answer.push_back(num);
        }
    }

    if(answer.empty()) return {-1};

    sort(answer.begin(), answer.end());

    return answer;
}

void printVector(const vector<int>& vec) {
    bool check = true;

    cout << "{";
    for (int num : vec) {
        if (!check) cout << ",";
        cout << num;
        check = !check;
    }
    cout << "}" << endl;
}

int main() {

    vector<int> result1 = solution({5, 9, 7, 10}, 5);
    vector<int> result2 = solution({2, 36, 1, 3}, 1);
    vector<int> result3 = solution({3, 2, 6}, 10);

    cout << "Test 1: ";
    printVector(result1);
    // for (int num : result1)
    //     cout << num << " ";
    // cout << endl;

    cout << "Test 2: ";
    printVector(result2);

    cout << "Test 3: ";
    printVector(result3);

    return 0;
}