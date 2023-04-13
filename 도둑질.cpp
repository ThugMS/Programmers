#include <string>
#include <vector>

using namespace std;

int DP1[1000001];
int DP2[1000001];
int num;

int solution(vector<int> money) {
    int answer = 0;
    
    num = money.size() - 1;
    
    DP1[0] = money[0];
    DP1[1] = DP1[0];
    DP2[0] = 0;
    DP2[1] = money[1];
    
    for(int i=2;i<num;i++){
        DP1[i] = max(DP1[i-2] + money[i] , DP1[i-1]);
    }
    
    for(int i=2;i<=num;i++){
        DP2[i] = max(DP2[i-2] + money[i] , DP2[i-1]);
    }

    return max(DP1[num-1], DP2[num]);
}
