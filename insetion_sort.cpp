#include <iostream>
using namespace std;
int main()
{
int arr[5] = {1,4,3,2,1};
int n = 5;
    for(int i = 0; i<n; i++ ){
        int j = i;
        while( j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int i = 0; i<n; i++){
        cout<<i<<" ";
    }
    return 0 ;
}