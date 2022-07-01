//#include <string>
//#include <vector>
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//vector<long long> v;
//vector<char> oper;
//long long ans = 0;
//
//long long cal(char op, long long a, long long b) {
//    if (op == '+') {
//        return a + b;
//    }
//    else if (op == '-') {
//        return a - b;
//    }
//    else {
//        return a * b;
//    }
//}
//
//void solve(char a, char b, char c) {
//    vector<long long> sub = v;
//    vector<char> opt = oper;
//    long long cnt = 0;
//
//    for (int i = 0; i < opt.size(); i++) {
//        if (opt[i] == a) {
//            long long sum = 0;
//            sum += cal(a, sub[i-cnt], sub[i-cnt + 1]);
//            sub[i - cnt] = sum;
//            sub.erase(sub.begin() + i - cnt + 1);
//            opt.erase(opt.begin() + i);
//
//            i--;
//        }
//    }
//   
//    for (int i = 0; i < opt.size(); i++) {
//        if (opt[i] == b) {
//            long long sum = 0;
//            sum += cal(b, sub[i - cnt], sub[i - cnt + 1]);
//            sub[i - cnt] = sum;
//            sub.erase(sub.begin() + i - cnt + 1);
//            opt.erase(opt.begin() + i);
//            i--;
//        }
//    }
//    
//    for (int i = 0; i < opt.size(); i++) {
//        if (opt[i] == c) {
//           long long sum = 0;
//            sum += cal(c, sub[i - cnt], sub[i - cnt + 1]);
//            sub[i - cnt] = sum;
//            sub.erase(sub.begin() + i - cnt + 1);
//            opt.erase(opt.begin() + i);
//            i--;
//        }
//    }
//    ans = sub[0];
//  /*  for (int i = 0; i < sub.size(); i++) {
//        cout << sub[i] << " ";
//    }
//    for (int i = 0; i < opt.size(); i++) {
//        cout << opt[i] << " ";
//    }*/
//}
//
//long long solution(string expression) {
//    long long answer = 0;
//
//    int num = 0;
//   
//
//    for (int i = 0; i < expression.length(); i++) {
//        if (expression[i] >= '0' && expression[i] <= '9') {
//            num += expression[i] - '0';
//            num *= 10;
//        }
//        else {
//            oper.push_back(expression[i]);
//            num /= 10;
//            v.push_back(num);
//            num = 0;
//        }
//    }
//    num /= 10;
//    v.push_back(num);
//    num = 0;
//
//  
//
//    char a = '+', b = '-', c = '*';
//    
//    solve(a, b, c); 
//    if (answer < abs(ans))answer = abs(ans);
//    ans = 0;
//    
//    solve(a, c, b); 
//    if (answer < abs(ans))answer = abs(ans);
//    ans = 0;
//    solve(b, a, c); 
//    if (answer < abs(ans))answer = abs(ans);
//    ans = 0;
//    solve(b, c, a); 
//    if (answer < abs(ans))answer = abs(ans);
//    ans = 0;
//    solve(c, a , b); 
//    if (answer < abs(ans))answer = abs(ans);
//    ans = 0;
//    solve(c, b, a); 
//    if (answer < abs(ans))answer = abs(ans);
//    ans = 0;
//
//    return answer;
//}
//
//int main() {
//
//    cout << solution("100-200*300-500+20") << endl;
//}
//
