#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if (ineq == ">"){
        if (eq == "="){
            if (n >= m){
                answer = 1;
            }

        }
        else{
            if (n > m){
                answer = 1;
            }

        }
    }else{
        if (eq == "="){
            if (n <= m){
                answer = 1;
            }

        }
        else{
            if (n < m){
                answer = 1;
            }

        }
    }
    
    return answer;
}

int main(void)
{
    int answer2 = solution("<", "=", 20, 50);
    cout << answer2;
    int answer3 = solution(">", "!", 41, 78);
    cout << answer3;
}