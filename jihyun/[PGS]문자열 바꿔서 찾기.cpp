#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string changed = "";
    
    for(int i = 0; i < myString.length(); i++){
        if(myString[i] == 'A')
            changed += 'B';
        else
            changed += 'A';
            
    }
    
    if(myString.find(pat)) answer = 1;
    return answer;
}