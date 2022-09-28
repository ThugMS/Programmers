#include <string>
#include <vector>
#include <iostream>

using namespace std;

int deliverMax = 0;
int pickupMax = 0;

vector<pair<int, int>> del;
vector<pair<int, int>> pic;

void FindDeliverMax(vector<int> deliveires) {
    for (int i = deliverMax; i >= 0; i--) {
        if (del[i].first > 0) {
            deliverMax = i;
            return;
        }
    }
    deliverMax = -1;

}

void FindPickUpMax(vector<int> pickups) {
    for (int i = pickupMax; i >= 0; i--) {
        if (pic[i].first > 0) {
            pickupMax= i;
            return;
        }
    }
    pickupMax = -1;
}

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;

    deliverMax = n - 1;
    pickupMax = n - 1;
    
    for (int i = 0; i < n; i++) {
        if (deliveries[i] > 0)
            del.push_back({ deliveries[i], i });

        if (pickups[i] > 0)
            pic.push_back({ pickups[i], i });
    }
    
    deliverMax = del.size() - 1;
    pickupMax = pic.size() - 1;

    while (!(deliverMax == -1 && pickupMax == -1)) {
        int deliverSum = cap;
        int pickupSum = cap;

        for (int i = deliverMax; i >= 0; i--) {
            if (del[i].first > 0) {
                if (deliverSum - del[i].first <= 0) {
                    del[i].first -= deliverSum;
                    break;
                }
                else {
                    deliverSum -= del[i].first;
                    del[i].first = 0;
                }
            }
        }
        
        for (int i = pickupMax; i >= 0; i--) {
            if (pic[i].first > 0) {
                if (pickupSum - pic[i].first <= 0) {
                    pic[i].first -= pickupSum;
                    break;
                }
                else {
                    pickupSum -= pic[i].first;
                    pic[i].first = 0;
                }
            }
        }
        //for (int i = 0; i < deliveries.size(); i++) {
        //    cout << deliveries[i] << " ";
        //}
        //cout << endl;

        //for (int i = 0; i < pickups.size(); i++) {
        //    cout << pickups[i] << " ";
        //}
        //cout << endl;
        
        answer += del[deliverMax].second > pic[pickupMax].second ? (del[deliverMax].second + 1) * 2 : (pic[pickupMax].second + 1) * 2;
        
        FindDeliverMax(deliveries);
        FindPickUpMax(pickups);
    }
    cout << answer << endl;
    return answer;
}

int main() {
    solution(
        4, 5, { 4, 4, 4, 4, 4 }, { 4, 4, 4, 4, 4 });
}