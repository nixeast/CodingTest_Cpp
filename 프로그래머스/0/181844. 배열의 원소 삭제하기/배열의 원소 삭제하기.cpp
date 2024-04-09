#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    vector<int> deleteInexes;
    
    for(int i = 0 ; i < arr.size() ; i++)
    {
        for(int j = 0; j < delete_list.size() ; j++)
        {
            if(arr[i] == delete_list[j])
            {
                deleteInexes.push_back(i);
                break;
            }
        }
    }
    
    for(int i = 0; i < deleteInexes.size() ; i++)
    {
        printf("%d ",deleteInexes[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < deleteInexes.size() ; i++)
    {
        arr.erase(arr.begin() + deleteInexes[i] - i);
    }
    
    for(int i = 0 ; i < arr.size() ; i++)
    {
        printf("%d ", arr[i]);    
    }
    
    answer = arr;
    
    return answer;
}