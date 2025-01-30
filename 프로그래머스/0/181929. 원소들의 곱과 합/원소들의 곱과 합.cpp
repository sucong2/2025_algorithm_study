#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int product = 1;
    int sum = 0;
    for (auto num:num_list){
        product *= num;
        sum+=num;
    }
    return product<sum*sum ? 1:0;
}