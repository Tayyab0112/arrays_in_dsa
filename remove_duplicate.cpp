#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1,1,2,2,3,4};
    int n  = 6;
    int i = 0;
    for(int j= 0; j<n;j++){
        if(arr[j] != arr[i+1]){
            i++;
        }
    }
    cout<<i+1;
    return 0 ;
}