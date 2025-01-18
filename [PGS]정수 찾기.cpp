#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    for(int i = 0; i < num_list.size(); i++){
        if(num_list[i]==n)
            return 1;
    }
    return answer;
}

//algorithm의 find 사용
//문법 find((시작 범위, 종료 범위, 탐색 대상) != (또는 ==) 종료 범위) boolean값 반환 
// #include <algorithm>

// using namespace std;

// int solution(vector<int> num_list, int n) {
//     int answer = 0;
//     if(find(num_list.begin(), num_list.end(), n) != num_list.end())
//         return 1;
//     return answer;
// }