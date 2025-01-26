#include <vector>
#include <unordered_set>


//이중 for문-> 시간복잡도 O(nm)
//unordered set -> O(1)
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    unordered_set<int> to_delete(delete_list.begin(), delete_list.end());
    
    for (int num : arr) {
        if (to_delete.find(num) == to_delete.end()) {
            answer.push_back(num);
        }
    }
    return answer;
}