#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> locations){
    int answer = 0;
    
    for(int i=0;i<locations.size();i++){
        if(locations[i][0] == 2){
            if(locations[i][1] == 2){
                return -1;
            }
        }
        
        answer++;
    }
    
    return answer;
}
