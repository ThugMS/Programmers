#include <iostream>

using namespace std;

int DivideBattle(int a){
    if(a % 2 == 0)
        return a/2;
    
    return a/2 + 1;
}

int solution(int n, int a, int b)
{
    int answer = 1;
    
    while(DivideBattle(a) != DivideBattle(b)){
        answer++;
        a = DivideBattle(a);
        b = DivideBattle(b);
    }

    return answer;
}


