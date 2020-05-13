#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int last = triangle[triangle.size()-1].size()-1;
    int lasttmp = last;
    
    for(int j=0;j<lasttmp;j++){
        for(int i=0;i<last;i++){
            if(triangle[last][i]>triangle[last][i+1])
                triangle[last-1][i] += triangle[last][i];
            else
                triangle[last-1][i] += triangle[last][i+1];
        }
        last--;
    }
    
    return triangle[0][0];
}
