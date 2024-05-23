#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    if(num % n == 0){
        answer = 1;
    }
    return answer;
}
int main(void)
{
    int answer2 = solution(98,2);
    cout << answer2;
    int answer3 = solution(34,3);
    cout << answer3;
}