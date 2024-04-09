#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    //k가 짝수
    if(k%2==0)
    {
        for(int i = 0 ; i < arr.size() ; i++)
        {
            arr[i] = arr[i] + k;
        }
    }
    //k가 홀수
    else
    {
        for(int i = 0 ; i < arr.size() ; i++)
        {
            arr[i] = arr[i] * k;
        }
    }
    answer = arr;
    return answer;
}