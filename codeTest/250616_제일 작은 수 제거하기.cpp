//
// Created by suaio on 2025-06-16.
//

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {

    if(arr.size() == 1) return {-1};

    int min = *min_element(arr.begin(), arr.end());

    vector<int> answer;

    for (int num : arr){
        if(num != min) answer.push_back(num);
    }


    return answer;
}

int main() {
    vector<int> arr = {4, 3, 2, 1};
    vector<int> ans = solution(arr);
    for(auto i : ans) cout << i << " ";
    cout << endl;

    return 0;
}