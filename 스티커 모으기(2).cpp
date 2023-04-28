#include <iostream>
#include <vector>
using namespace std;

int dp[100010];


int solution(vector<int> sticker)
{
    int answer =0;

    int stickerLength = sticker.size();
    
    if (stickerLength == 1) {
        return sticker[0];
    }
    
    dp[0] = sticker[0];
    dp[1] = sticker[0];
    
    for(int i=2;i<stickerLength - 1; i++){
        dp[i] = (dp[i-2] + sticker[i] > dp[i-1]) ? dp[i-2] + sticker[i] : dp[i-1];
    }
    answer = dp[stickerLength - 2];
    
    dp[0] = 0;
    dp[1] = sticker[1];
    
    for(int i=2;i<stickerLength; i++){
        dp[i] = (dp[i-2] + sticker[i] > dp[i-1]) ? dp[i-2] + sticker[i] : dp[i-1];
    }
    answer = (answer > dp[stickerLength - 1]) ? answer : dp[stickerLength - 1];
    
    return answer;
}
