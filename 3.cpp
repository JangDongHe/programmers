#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i = n-1; i < num_list.size(); i++){
        answer.push_back(num_list.at(i)) ;
    }
    return answer;
}
template<class T>
ostream& operator<<(ostream& stream, const std::vector<T>& values)
{
	copy( begin(values), end(values), ostream_iterator<T>(stream, ", ") );
	return stream;
}
int main()
{
    vector<int> v = {5,2,1,7,5};
    vector<int> resurt = solution(v, 2);
    cout << resurt;

}