#include <iostream>
using namespace std;
int main()
{
int arr[5] = {1,4,3,6,5};
int n = 5;
    for(int i = n-1; i>=0; i--){
        for(int j = 0;j = i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=  0; i<=n; i++){
        cout<<arr[i]<<endl;
    }
    return 0 ;
}