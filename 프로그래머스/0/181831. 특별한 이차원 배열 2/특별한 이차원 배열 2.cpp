#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr[0].size();j++){
            if(arr[i][j]!=arr[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

