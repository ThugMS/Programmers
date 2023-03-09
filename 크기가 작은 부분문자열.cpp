#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    vector<int> v;
    
    for(int i=0;i <= t.length() - p.length();i++){
        string s;
        
        s = t.substr(i, p.length());
        
        bool check = true;
        
        for(int j=0;j<p.length();j++){
            if(s[j] < p[j]){
                answer++;
                check = false;
                break;
            }
            
            if(s[j] > p[j]){
                check = false;
                break;
            }
        }
        if(check)
            answer++;
    }
    
    return answer;
}

int main(){
    cout << solution("3141592", "271") << endl;
}
