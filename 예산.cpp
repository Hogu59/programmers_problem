#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> budgets, int M) {
    int answer = M/budgets.size();
    sort(budgets.begin(),budgets.end());
    
    if(budgets.back()<=answer)
        return budgets.back();
    
    for(int i=0;i<budgets.size();i++){
        if(answer>budgets[i]){
            M -= budgets[i];
            answer = M/(budgets.size()-(i+1));
        }else
            break;
    }
    return answer;
}
