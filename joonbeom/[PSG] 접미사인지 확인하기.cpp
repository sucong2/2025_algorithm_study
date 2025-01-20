#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int length = is_suffix.length();
    if (length > my_string.length()) {
        return 0;
    }
    
    if(my_string.substr(my_string.length()-length, length) == is_suffix){
        return 1;
    }
    return 0;
}
