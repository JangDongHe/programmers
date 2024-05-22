#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    for(int i = 0; i < k; i++){
        answer += my_string;
    }
    return answer;
}
int main(void)
{
    string answer2 = solution("third", 3);
    cout << answer2;
}