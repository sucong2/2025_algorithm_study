#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    while(n>0){
        answer.insert(0, 1, '0' + (n % 10));
        n= n/10;
    }
    return answer;
}