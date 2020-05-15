#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int k;
    for(int i=0; i<prices.size(); i++){
        k=0;
        if(prices[i] == 1){
            answer.push_back(prices.size()-i-1);
            continue;
        }
        for(int j=i;j<prices.size()-1; j++){
            if(prices[j]<prices[i]){
                answer.push_back(k);
                break;
            }else
                k++;
        }
        if(answer.size() != i+1)
            answer.push_back(k);
    }
    
    return answer;
}
