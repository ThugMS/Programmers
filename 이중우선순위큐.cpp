#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> SplitString(string s){
    stringstream ss(s);
    
    string stringBuffer;
    
    vector<string> v;
    
    while(getline(ss, stringBuffer, ' ')){
        v.push_back(stringBuffer);
    }
    
    return v;
}

int FindIndex(vector<int> v, int value){
    
    int start = 0;
    int end = v.size()-1;
    int mid = (start+end)/2;
    
    if(v[v.size()-1] < value){
        return v.size();
    }
    
    if(v[0] > value){
        return 0;
    }
    
    while(start < end){
        mid = (start+end)/2;
        
        if(v[mid] > value){
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }
    
    return start;
}

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    
    vector<int> v;
    
    for(int i=0;i<operations.size();i++){
        
        vector<string> buffer = SplitString(operations[i]);
        
        if(buffer[0] == "I"){
            if(v.empty()){
                v.push_back(stoi(buffer[1]));
            }
            else{
                int value = stoi(buffer[1]);
                int index = FindIndex(v, value);
                v.insert(v.begin()+index, value);
            }
        }
        else if(buffer[0] == "D"){
            if(v.empty())
                continue;
            
            if(buffer[1] == "1"){
                v.erase(v.end()-1);
            }
            else{
                v.erase(v.begin());
            }
        }
    }
    
    if(v.empty()){
        answer.push_back(0);
        answer.push_back(0);
    }
    else{
        answer.push_back(v[v.size()-1]);
        answer.push_back(v[0]);
    }
    
    return answer;
}
