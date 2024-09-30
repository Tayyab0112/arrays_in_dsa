#include <iostream>
using namespace std;
int main()
{
    int arr[5 ] ={1,4,6,2,1};
    int n = 5;
    for(int i = 0; i<=n-2; i++){
        int mini = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
                swap(arr[mini], arr[i]);
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }

    return 0 ;
}