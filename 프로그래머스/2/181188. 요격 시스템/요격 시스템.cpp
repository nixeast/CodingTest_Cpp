#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//미사일의 시작점 기준으로 순서대로 나열한다.
//최초 미사일의 끝을 미사일의 최초 요격구간으로 정한다.
//다음 미사일의 시작점이 이전 미사일의 끝보다 적은경우 요격구간이 겹치므로 발사횟수를 증가시키지 않는다.
//다음 미사일의 시작점이 이전 미사일의 끝보다 큰 경우 기존요격구간에서 벗어나므로 발사횟수를 증가시킨다.
//마지막 미사일까지 반복한다.

int solution(vector<vector<int>> targets) {
    
    int answer = 0;
    int count_targets = targets.size();
    int fireCount = 1;
    int defendArea = 0;
    
    sort(targets.begin(), targets.end());
    
    for(int i=0 ; i < count_targets ; i++)
    {
        //printf("[%d][%d]\n",targets[i][0], targets[i][1]);
    }
    
    defendArea = targets[0][1];
    
    for(int i=1 ; i < count_targets ; i++)
    {
        if(targets[i][0] >= defendArea)
        {
            fireCount++;
            defendArea = targets[i][1];
        }
        else if(targets[i][1] < defendArea)
        {
            defendArea = targets[i][1];
        }
    }
    
    answer = fireCount;
    
    return answer;
}