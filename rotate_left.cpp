#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1,2,3,4};
    int n = 4;
    int temp = arr[0];
    for(int i = 0; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
    return 0 ;
    // time complexity O(N);
    // space complexity :O(1);
}