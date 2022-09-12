#include <string>
#include <vector>
#include <sstream>
#include <limits.h>

using namespace std;

string solution(string s) {
    string answer = "";
    
    stringstream ss(s);
    string word;
    
    ss.str(s);
    
    long long max = LONG_LONG_MIN;
    long long min = LONG_LONG_MAX;
    
    while(ss >> word){
        int num = stoi(word);
        
        if(num > max)
            max = num;
        
        if(num < min)
            min = num;
    }
    
    answer += to_string(min);
    answer += " ";
    answer += to_string(max);
    
    return answer;
}
