#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer=arr;
    bool flag = true;
    for(int q: query){
        if(flag){
            answer.assign(answer.begin(), answer.begin() + q + 1);
        }
        else{
            answer.assign(answer.begin() + q, answer.end());
        }
        flag = !flag;
    }
    return answer;
}