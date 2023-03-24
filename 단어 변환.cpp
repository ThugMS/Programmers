#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 50;
bool isVisit[50] = {false, };

bool isDiffOne(string value, string target){
    
    int diffCnt = 0;
    
    for(int i=0;i<value.length(); i++){
        if(value[i] != target[i])
            diffCnt++;
    }
    
    if(diffCnt == 1)
        return true;
    
    return false;
}

void DFS(string begin, string target, vector<string> words, int cnt){
    if(cnt >= answer){
        return;
    }
    
    if(begin == target){
        answer = min(answer,cnt);
        return;
    }
    
    for(int i=0;i<words.size();i++){
        if(isVisit[i])
            continue;
        
        if(isDiffOne(begin, words[i])){
            isVisit[i] = true;
            
            DFS(words[i], target, words, cnt+1);
            
            isVisit[i] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    
    DFS(begin, target, words, 0);
    
    if(answer == 50)
        return 0;
    
    return answer;
}
