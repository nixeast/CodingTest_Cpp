#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    string temp = "ad";
    int n_strArr = strArr.size();
    
    for(int i=0;  i < n_strArr; i++)
    {
        if(strArr[i].find("ad") != string::npos)
        {
            printf("found..\n");
            strArr.erase(strArr.begin() + i);
            i--;
            n_strArr = strArr.size();
        }
    }
    answer = strArr;
    return answer;
}