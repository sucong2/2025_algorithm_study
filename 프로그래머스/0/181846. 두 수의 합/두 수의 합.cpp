#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int carry = 0;
    int i=a.size()-1;
    int j=b.size()-1;
    
    while(i>=0 || j>=0 || carry){
        int digitA = (i>=0) ? a[i--]-'0':0;
        int digitB = (j>=0) ? b[j--]-'0':0;
        int sum = digitA + digitB + carry;
        
        answer += sum%10 + '0';
        carry = sum/10;
    }
    reverse(answer.begin(), answer.end());
    return answer;
}