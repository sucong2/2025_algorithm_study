#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer = num_list;
    int l = num_list.size()-1;
    if(num_list[l] > num_list[l-1]){
        answer.push_back(num_list[l] - num_list[l-1]);
    }
    else{
        answer.push_back(num_list[l]*2); 
    }
    return answer;
}

