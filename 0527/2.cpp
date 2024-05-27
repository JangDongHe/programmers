#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for(int i = 0; i < included.size(); i++){
        if(included[i]){
            answer += a + d * i;
        }
    }
    return answer;
}
int main(void)
{
    int answer2 = solution(3,4,{1,0,0,1,1});
    cout << answer2;
    int answer3 = solution(7,1,{0,0,0,1,0,0,0});
    cout << answer3;

}