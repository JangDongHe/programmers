#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int addnum = 0;
    int mulnum = 1;
    for(int i = 0; i < num_list.size(); i++){
        addnum += num_list[i];
        mulnum *= num_list[i];
    }
    if (mulnum < (addnum * addnum)){
        answer = 1;
    }
    return answer;
}
int main(void)
{
    int answer2 = solution({3,4,5,2,1});
    cout << answer2;
    int answer3 = solution({5,7,8,3});
    cout << answer3;
 
}