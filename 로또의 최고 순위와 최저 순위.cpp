#include <string>
#include <vector>

using namespace std;

int rank_(int num){
    switch(num){
        case 2:
            return 5;
        case 3:
            return 4;
        case 4:
            return 3;
        case 5:
            return 2;
        case 6:
            return 1;
        default:
            return 6;
    }
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int correct_cnt = 0;
    int zero_cnt = 0;
    
    for(int i=0;i<lottos.size(); i++){
        if(lottos[i] == 0)
            zero_cnt++;
        for(int j=0;j<win_nums.size();j++){
            if(lottos[i] == win_nums[j]){
                correct_cnt++;
                break;
            }
        }
    }
    
   
    answer.push_back(rank_(correct_cnt + zero_cnt));
    answer.push_back(rank_(correct_cnt));
    return answer;
}
