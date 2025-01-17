#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    //arr 길이 홀수
    if(arr.size() % 2 != 0){
        for(int i = 0; i < arr.size(); i++)
            if(i % 2 == 0){
                arr[i] += n;
                answer.push_back(arr[i]);
            }else
                answer.push_back(arr[i]);
    }else{
        for(int i = 0; i < arr.size(); i++)
            if(i % 2 != 0){
                arr[i] += n;
                answer.push_back(arr[i]);
            }else
                answer.push_back(arr[i]);
    }
    return answer;
}