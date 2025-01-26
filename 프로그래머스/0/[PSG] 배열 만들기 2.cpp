#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    vector<int> lib;
    for(int i=0;i<(1<<6);i++){
        int num =0;
        for (int j=5; j>=0;j--){
            if (i & (1<<j)){
                num = num*10 + 5;
            }
            else{
                num = num*10;
            }
        }
        lib.push_back(num);
    }
    
    for (int i: lib){
        if(i>=l && i<=r){
            answer.push_back(i);
        }
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}
