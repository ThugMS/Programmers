#include <string>
#include <vector>

using namespace std;
bool checking(int n) {
    for (int i = 0; i <= n; i++) {
        if (i * i > n)
            return false;
        else if (i * i == n)
            return true;
    }
    return false;
}
int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; i++) {
        if (checking(i)) {
            answer -= i;
        }
        else {
            answer += i;
        }
    }

    return answer;
}