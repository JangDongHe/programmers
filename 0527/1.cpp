#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for(int i = 0; i < code.length(); i++){
        if(code[i]== '1'){
            if(mode == 0){
                mode = 1;
            }else{
                mode = 0;
            }
        }else if(mode == 0 && i % 2 == 0){
            answer += code[i];
        }else if(mode == 1 && i % 2 == 1){
            answer += code[i];
        }
    }
    if (answer.empty()){
        answer = "EMPTY";
    }
    return answer;

}
int main(void)
{
    string answer2 = solution("abc1abc1abc");
    cout << answer2;

}