#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string oddnum = "";
    string evennum = "";
    for(int i = 0; i < num_list.size(); i++){
        if(num_list[i] % 2 == 1){
            oddnum += to_string(num_list[i]);
        }else{
            evennum += to_string(num_list[i]);
        }
    }
    answer = stoi(oddnum) + stoi(evennum);
    return answer;
}
int main(void)
{
    int answer2 = solution({3,4,5,2,1});
    cout << answer2;
    int answer3 = solution({5,7,8,3});
    cout << answer3;
 
}