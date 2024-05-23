#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n % 2 == 1){
        for(int i = 1; i <= n; i += 2){
            answer += i;
        }
    }else{
        for(int i = 0; i <= n; i += 2){
            answer += i*i;
        }
    }
    return answer;
}

int main(void)
{
    int answer2 = solution(7);
    cout << answer2;
    int answer3 = solution(10);
    cout << answer3;
}