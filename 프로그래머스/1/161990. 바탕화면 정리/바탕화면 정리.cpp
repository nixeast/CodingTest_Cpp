#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int row_min = 99;
    int col_min = 99;
    
    int row_max = -1;
    int col_max = -1;
    
    int count=0;
    
    map<int, vector<int>> m;
    
    for(int i =0 ; i < wallpaper.size() ; i++)
    {
        for(int j = 0 ; j < wallpaper[i].length() ; j++)
        {
            if(wallpaper[i][j] == '#')
            { 
                m[count] = vector<int> {i,j};
                count++;
            }
        }
    }
    
    for(auto iter = m.begin() ; iter != m.end() ; iter++)
    {
        if(iter->second[0] < row_min)
        {
            row_min = iter->second[0];
        }
        
        if(iter->second[1] < col_min)
        {
            col_min = iter->second[1];
        }
            
        if(iter->second[0] > row_max)
        {
            row_max = iter->second[0];
        }
        
        if(iter->second[1] > col_max)
        {
            col_max = iter->second[1];
        }
        
    }
    
    answer.push_back(row_min);
    answer.push_back(col_min);
    answer.push_back(row_max+1);
    answer.push_back(col_max+1);
    
    return answer;
}