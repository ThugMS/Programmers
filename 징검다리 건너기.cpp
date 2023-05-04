#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int g_k;

bool isAble(vector<int> &stones, int k){
    int cnt = 0;
    
    for(int i=0;i<stones.size();i++){
        if(stones[i] - k <= 0)
            cnt++;
        
        else
            cnt = 0;
            
        
        if(cnt >= g_k)
            return false;
    }
    
    return true;
}

int solution(vector<int> stones, int k) {
    int answer = 0;
    
    g_k = k;
    
    int start = 0;
    int end = *max_element(stones.begin(), stones.end());
    int mid;
    
    while(start <= end){
        mid = (start + end) / 2;
        
        if(isAble(stones, mid) == false){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    
    return start;
}
