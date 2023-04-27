#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, bool> gemName;
vector<string> gemList;
map<string, int> gemCnt;

vector<int> solution(vector<string> gems) {
    vector<int> answer;
    answer.resize(2);
    
    for(int i=0;i<gems.size();i++){
        if(gemName[gems[i]] == false){
            gemList.push_back(gems[i]);
            gemName[gems[i]] = true;
        }
    }
    
    
    
    int size = gemList.size();
    int totalCnt = 0;
    
    int start = 0, end = 0;
    int ans = 1000000;
    
    for(int i=0;i<gems.size();i++){
        gemCnt[gems[i]]++;
        if(gemCnt[gems[i]] == 1){
            totalCnt++;
        }
        
        for(int j=start;j<i;j++){
            if(gemCnt[gems[j]] > 1){
                gemCnt[gems[j]]--;
                start++;
            }
            else
                break;
        }
        
        if(totalCnt == size){
            end = i;
            int len = end - start;
            
            if(ans > len){
                ans = len;
                answer[0] = start+1;
                answer[1] = end + 1;
            }
        }
        
        
        
    }
    
    return answer;
}
