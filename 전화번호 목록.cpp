//#include <string>
//#include <vector>
//#include <iostream>
//#include <sstream>
//#include <algorithm>
//
//using namespace std;
//
//bool cmp_size(string a, string b){
//    if(a.size() < b.size()){
//        return true;
//    }
//    else
//        return false;
//}
//
//bool solution(vector<string> phone_book) {
//    bool answer = true;
//
//    for(int i=0;i<phone_book.size();i++){
//        phone_book[i].erase(remove(phone_book[i].begin(),phone_book[i].end(),' '), phone_book[i].end());
//    }
//
//    sort(phone_book.begin(), phone_book.end());
//
//    for(int i=0;i<phone_book.size()-1;i++){
//        if(phone_book[i] == phone_book[i+1].substr(0, phone_book[i].size())){
//            return false;
//        }
//    }
//
//    return true;
//}
