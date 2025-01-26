#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;

    for (string s : order) {
        if (s == "iceamericano" || s == "americanoice" || 
            s == "hotamericano" || s == "americanohot" || 
            s == "americano" || s == "anything") {
            answer += 4500;
        } 
        else if (s == "icecafelatte" || s == "cafelatteice" || 
                 s == "hotcafelatte" || s == "cafelattehot" || 
                 s == "cafelatte") {
            answer += 5000;
        }
    }

    return answer;
}
