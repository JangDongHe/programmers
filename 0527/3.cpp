#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    if(a == b && a == c){
        answer = (a + b + c) * (a * a + b * b + c * c) * (a * a * a + b * b * b+ c * c * c);
    }else if(a == b || a == c || b == c){
        answer = (a + b + c) * (a * a + b * b + c * c);
    }else{
        answer = (a + b + c);
    }
    return answer;
}
int main(void)
{
    int answer2 = solution(2,6,1);
    cout << answer2;
    int answer3 = solution(5,3,3);
    cout << answer3;
    int answer4 = solution(4,4,4);
    cout << answer4;

}