#include <string>

using namespace std;

int solution(int a, int b) {
    int ab = stoi(to_string(a) + to_string(b));
    int product = 2 * a * b;
    return (ab > product) ? ab : product;
}