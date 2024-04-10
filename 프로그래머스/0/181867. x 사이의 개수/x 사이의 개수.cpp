#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int num_x = 0;
    int count = 0;
    for(int i=0 ; i < myString.length() ; i++)
    {
        if(myString[i] == 'x')
        {
            num_x = i;
            answer.push_back(count);
            count = 0;
        }
        else
        {
            count++;
        }
        
        if(i == myString.length()-1)
        {
            answer.push_back(count);
        }
    }
    return answer;
}