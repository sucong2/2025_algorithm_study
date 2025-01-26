#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer=arr;
    int n = arr.size() - arr[0].size();
    if(n>0){
        for (vector<int>& v: answer){
            v.resize(v.size()+n, 0);
        }
    }
    else if(n<0){
        for (int i=0;i<-n;i++){
            answer.push_back(vector<int> (arr[0].size(), 0));
        }
    }
    return answer;
}