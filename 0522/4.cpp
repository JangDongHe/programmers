#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int iadd = stoi(to_string(a) + to_string(b));
    int imul = 2 * a * b;
    if (iadd > imul)
        answer = iadd;
    else
        answer = imul;
    return answer;
}
/* int solution(int a, int b) {
    int answer = 0;
    string s = to_string(a) + to_string(b); 
    answer = max(stoi(s), 2 * a * b);
    return answer;
} */
int main(void)
{
    int answer2 = solution(2, 91);
    cout << answer2;
    int answer3 = solution(91, 2);
    cout << answer3;
}