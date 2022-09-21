#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> binaryArr1;
vector<string> binaryArr2;
int _size = 0;

string TransBinary(int _num){
    string str = "";
    
    while(_num > 0){
        if(_num % 2 == 0)
            str += "0";
        else
            str += "1";
        
        _num /= 2;
    }
    
    while(str.length() < _size){
        str += "0";
    }
    
    reverse(str.begin(), str.end());
    
    return str;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    _size = n;
    
    for(int i=0;i<n; i++){
        string str1 = TransBinary(arr1[i]);
        string str2 = TransBinary(arr2[i]);
        
        binaryArr1.push_back(str1);
        binaryArr2.push_back(str2);
    }
    
    for(int i=0;i<n;i++){
        string sub = "";
        for(int j=0;j<n;j++){
            if(binaryArr1[i][j] == '0' && binaryArr2[i][j] == '0'){
                sub += " ";
            }
            else{
                sub += "#";
            }
        }
        answer.push_back(sub);
    }
    
    return answer;
}
