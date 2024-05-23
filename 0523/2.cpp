#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    if(number % n == 0 && number % m == 0){
        answer = 1;
    }
    return answer;
}
int main(void)
{
    int answer2 = solution(60,2,3);
    cout << answer2;
    int answer3 = solution(55,10,5);
    cout << answer3;
}