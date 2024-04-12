#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int multiple=1;
    int sumxsum=0;
    
    for(int i=0 ; i < num_list.size() ; i++)
    {
        
        multiple = multiple * num_list[i];
        sumxsum = sumxsum + num_list[i];
    }
    
    sumxsum = sumxsum * sumxsum;
    
    if(multiple < sumxsum)
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }
    
    return answer;
}