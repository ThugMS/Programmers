#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 1;
    
    sort(routes.begin(), routes.end());
    
    int pivot = routes[0][1];
    
    for(auto a : routes){
        if(pivot < a[0]){
            answer++;
            
            pivot = a[1];
        }
        
        if(pivot >= a[1]){
            pivot = a[1];
        }
    }
    
    return answer;
}

