#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    vector<int> odd_even = {0, 0};
    
    for(int i : num_list){
        odd_even[i%2] = odd_even[i%2]*10 + i;
    }
    answer = odd_even[0] + odd_even[1];
    return answer;
}
