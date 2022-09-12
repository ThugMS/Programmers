#include <string>
#include <vector>

using namespace std;

bool IsNumber(char _c){
    return _c >= '0' && _c <= '9';
}

bool solution(string s) {
    
    if(s.size() != 4 && s.size() !=  6)
        return false;
    
    for(int i=0;i<s.size();i++){
        if(!IsNumber(s[i]))
            return false;
    }
    
    return true;
}
