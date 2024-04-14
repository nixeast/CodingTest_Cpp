#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp = "";
    for(int i=0; i < myString.size() ; i++)
    {
        if(myString[i] != 'x')
        {
            temp.push_back(myString[i]);
            
            if(i == myString.size()-1)
            {
                answer.push_back(temp);
            }
        }
        else
        {
            if(temp.size() != 0)
            {
                answer.push_back(temp);
                temp = "";
            }
            
        }
        
        
    }
    sort(answer.begin(), answer.end());
    return answer;
}