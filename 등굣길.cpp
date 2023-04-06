#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long arr[110][110] = {0, };
int g_m, g_n;

void DP(){
    arr[1][1] = 1;
    for(int i=2;i<=g_m;i++){
        if(arr[1][i] == -1){
            //arr[1][i] = 0;
            break;
        }
    
        arr[1][i] = 1;

    }
    
    for(int i=2;i<=g_n;i++){
        if(arr[i][1] == -1){
            //arr[i][1] = 0;
            break;
        }
        
        arr[i][1] = 1;
    }
    
    for(int i=2;i<=g_n;i++){
        for(int j=2;j<=g_m;j++){
            if(arr[i][j] == -1)
                continue;
            
            long long sum = 0;
            
            if(arr[i-1][j] != -1)
                sum += arr[i-1][j];
            
            if(arr[i][j-1] != -1)
                sum += arr[i][j-1];
            
            arr[i][j] = sum % 1000000007;
        }
    }
    
}

int solution(int m, int n, vector<vector<int>> puddles) {

    g_m = m;
    g_n = n;
    
    for(int i=0;i<puddles.size();i++){
        arr[puddles[i][1]][puddles[i][0]] = -1;
    }
    
    DP();
    
//    for(int i=1;i<=g_n;i++){
//        for(int j=1;j<=g_m;j++){
//            cout << arr[i][j];
//        }
//        cout << endl;
//    }
    
    return arr[n][m] % 1000000007;
}
