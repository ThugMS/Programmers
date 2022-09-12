#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    long long sum = a+b;
    
    long long odd = abs(a-b);
    
    if(odd % 2 == 0){
        answer += sum * (odd/2);
        answer += sum/2;
    }
    else{
        answer += sum * ((odd+1)/2);
    }
    
    return answer;
}
