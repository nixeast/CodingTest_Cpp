#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = 0;
    
    for(int i=0 ; i < arr.size(); i ++)
    {
        if(i < idx)
        {
            continue;
        }
        
        if(arr[i] == 1)
        {
            answer = i;
            return answer;
        }
        
        answer = -1;
        
    }
    
    return answer;
}