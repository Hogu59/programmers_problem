#include <string>
#include <vector>

using namespace std;

long long solution(int N) {
    long long tot(4),a(0),b(1), tmp;

    for(int i=1;i<=N;i++){
        tot += (a+b)*2;
        tmp = b;
        b = a+b;
        a = tmp;
    }
    return tot;
}
