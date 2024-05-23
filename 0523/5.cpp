#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, bool flag) {
    int answer = 0;
    if(flag == 1){
        answer = a + b;
    }else{
        answer = a - b;
    }
    return answer;
}

int main(void)
{
    int answer2 = solution(-4, 7, true);
    cout << answer2;
    int answer3 = solution(-4, 7, false);
    cout << answer3;
}