#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for(int i = 0; i < arr.size(); i++){
        answer += arr[i];
    }
    return answer;
}
int main(void)
{
    vector<string> arr = {"a","b","c","d"};
    string answer2 = solution(arr);
    cout << answer2;
}