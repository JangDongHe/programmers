#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int i = 0;
    int l = 0;
    i = a * (int)(pow(10, (int)log10(b)+1)) + b;
    l = b * (int)(pow(10, (int)log10(a)+1)) + a;
    answer = i;
    if(l > i)
        answer = l;
    return answer;
}
int main()
{
    int resurt = solution(56, 587);
    cout << resurt;

}