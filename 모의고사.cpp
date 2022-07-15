#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare_ans(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    vector<int> num1 = {1,2,3,4,5};
    vector<int> num2 = {2,1,2,3,2,4,2,5};
    vector<int> num3 = {3,3,1,1,2,2,4,4,5,5};

    int num1_cnt= 0;
    int num2_cnt= 0;
    int num3_cnt= 0;

    vector<pair<int, int>> ans = {{1,0}, {2,0}, {3,0}};

    for(int i=0;i<answers.size();i++){
        if(num1_cnt >= num1.size())
            num1_cnt = 0;
        if(num2_cnt >= num2.size())
            num2_cnt = 0;
        if(num3_cnt >= num3.size())
            num3_cnt = 0;

        if(num1[num1_cnt] == answers[i]){
            ans[0].second++;
        }

        if(num2[num2_cnt] == answers[i]){
            ans[1].second++;
        }

        if(num3[num3_cnt] == answers[i]){
            ans[2].second++;
        }
        num1_cnt++;
        num2_cnt++;
        num3_cnt++;
    }

//    printf("%d %d %d\n", ans[0].second, ans[1].second, ans[2].second);

    sort(ans.begin(), ans.end(), compare_ans);

    if(ans[0].second == ans[2].second){
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    else if(ans[0].second == ans[1].second){
        answer.push_back(ans[0].first);
        answer.push_back(ans[1].first);
    }
    else{
        answer.push_back(ans[0].first);
    }

    for(auto i:answer){
        printf("%d\n", i);
    }

    return answer;
}

int main(){

    vector<int> ans(1000, 1);

    solution(ans);
    return 0;

}
