#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    int start = 0;
    int end = 0;
    
    for(int i=0 ; i < my_strings.size() ; i++)
    {
        start = parts[i][0];
        end = parts[i][1];
        
        for(int j = start ; j <= end ; j++)
        {
            printf("%c ",my_strings[i][j]);
            answer.push_back(my_strings[i][j]);
        }
        
        printf("\n");
        
    }
    
    return answer;
}