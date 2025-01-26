#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mul = 1;
    int sqr_sum = 0;
    for (int i: num_list){
        mul *= i;
        sqr_sum += i;
    }
    sqr_sum = sqr_sum * sqr_sum;
    answer = mul<sqr_sum;
    return answer;
}
