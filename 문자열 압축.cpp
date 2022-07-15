#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = s.size();

    for (int i = 1; i <= s.size() / 2; i++) {
        int cnt = 1;

        string compress = "";
        string a = s.substr(0, i);

        for (int j = i; j < s.size(); j += i) {
            if (a == s.substr(j, i))
                cnt++;

            else {
                if (cnt > 1)
                    compress += to_string(cnt);

                compress += a;
                a = s.substr(j, i);
                cnt = 1;
            }
        }
        if (cnt > 1)
            compress += to_string(cnt);
        compress += a;

        answer = answer > compress.size() ? compress.size() : answer;
    }

    return answer;
}
