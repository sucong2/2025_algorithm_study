#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(vector<int> v: queries){
        int ans=1000001;
        for (int i=v[0]; i<=v[1]; i++){
            if(arr[i]>v[2] && arr[i]<ans){
                ans = arr[i];
            }
        }
        if(ans == 1000001){
            answer.push_back(-1);
        }
        else{
            answer.push_back(ans);
        }
    }
    return answer;
}
