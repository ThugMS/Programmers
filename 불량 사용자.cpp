#include <string>
#include <vector>
#include <set>

using namespace std;

bool isBanned[10] = {false, };
set<int> s;
int len;

bool isSame(string a, string b){
    if(a.length() != b.length())
        return false;
    
    for(int i=0;i<b.size();i++){
        if(b[i] == '*')
            continue;
        
        if(b[i] != a[i])
            return false;
    }
    
    return true;
}

void dfs(vector<string> user_id, vector<string> banned_id, int i, int num){
    if(i == len){
        s.emplace(num);
        return;
    }
    
    for(int j=0;j<user_id.size();j++){
        int k;
        
        if(user_id[j].size() != banned_id[i].size())
            continue;
        
        if(isBanned[j])
            continue;
        
        if(isSame(user_id[j], banned_id[i])){
            isBanned[j] = true;
            dfs(user_id, banned_id, i + 1, num | (1 << j));
            isBanned[j] = false;
        }
    }
}

int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 1;
    
    len = (int)banned_id.size();
    
    dfs(user_id, banned_id, 0, 0);
    
    answer = s.size();

    return answer;
}

