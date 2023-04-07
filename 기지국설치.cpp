#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;
    
    int pivot = 1;
    int index = 0;
    
    while(pivot <= n){
        
        if(pivot >= stations[index] - w && pivot <= stations[index] + w){
            pivot = stations[index] + w;
            index++;
        }
        
        else{
            pivot += 2*w;
            answer++;
        }
        pivot++;
    }
    
    return answer;
}
