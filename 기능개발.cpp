#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> tmp;
    
    for(int i=0;i<progresses.size();i++)
        tmp.push_back(ceil(100-progresses[i])/speeds[i]);
    
    int temp = tmp[0];
    
    int k=1;
    for(int i=1; i<tmp.size();i++){
        if(temp >= tmp[i]){
            k++;
        }else{
            answer.push_back(k);
            k=1;
            temp = tmp[i];
        }
        if(i == tmp.size()-1)
            answer.push_back(k);
    }
    
    return answer;
}
