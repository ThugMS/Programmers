#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> p) {
    vector<int> answer;
    vector<int> num(1001, 0);

    int min_;
    int index;

    for (int i = 0; i < p.size() - 1; i++) {
        min_ = p[i];
        for (int j = i+1; j < p.size(); j++) {
            if (min_ > p[j]) {
                index = j;
                min_ = p[j];
            }
        }
        if (min_ != p[i]) {
            int sub = p[i];
            p[i] = min_;
            p[index] = sub;

            num[i]++;
            num[index]++;
        }
    }

    for (int i = 0; i < p.size(); i++) {
        answer.push_back(num[i]);
    }

    return answer;
}