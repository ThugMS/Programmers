#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int N;
vector<vector<int>> arr;
vector<int> diceA, diceB;
vector<int> sumA, sumB;

void Initialize()
{
    diceA.clear();
    diceB.clear();
    sumA.clear();
    sumB.clear();
}

void CalculateSum(int index, int totalSum, bool IsDiceA, const vector<int>& selected)
{
    if (index >= N / 2)
    {
        IsDiceA ? sumA.push_back(totalSum) : sumB.push_back(totalSum);
        return;
    }

    for (int i = 0; i < 6; i++)
    {
        int diceIdx = selected[index];
        CalculateSum(index + 1, totalSum + arr[diceIdx][i], IsDiceA, selected);
    }
}

vector<int> solution(vector<vector<int>> dice) {
    N = dice.size();
    arr = dice;

    vector<int> answer(N / 2);

    int AWinMaxCnt = 0;

    vector<int> tmp(N, 1);
    for (int i = 0; i < N / 2; i++)
    {
        tmp[i] = 0;
    }

    do {
        Initialize();

        for (int i = 0; i < N; i++)
        {
            if (tmp[i] == 0)
                diceA.push_back(i);
            else
                diceB.push_back(i);
        }

        CalculateSum(0, 0, true, diceA);
        CalculateSum(0, 0, false, diceB);

        sort(sumB.begin(), sumB.end());

        map<int, int> cache;
        int AWinCnt = 0;

        for (int sum : sumA)
        {
            if (cache.count(sum))
            {
                AWinCnt += cache[sum];
                continue;
            }

            int low = 0;
            int high = sumB.size();

            while (low + 1 < high)
            {
                int mid = (low + high) / 2;

                if (sum > sumB[mid])
                {
                    low = mid;
                }
                else
                {
                    high = mid;
                }
            }

            cache[sum] = low;
            AWinCnt += low;
        }

        if (AWinCnt > AWinMaxCnt)
        {
            AWinMaxCnt = AWinCnt;

            for (int i = 0; i < diceA.size(); i++)
            {
                answer[i] = diceA[i] + 1;
            }
        }


    } while (next_permutation(tmp.begin(), tmp.end()));

    sort(answer.begin(), answer.end());

    return answer;
}