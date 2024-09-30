#include <iostream>
using namespace std;
bool checksorted(int arr[], int n){
for(int i = 1; i<=n; i++){
    if(arr[i]<arr[i-1]){
        return false;
    }
}
return true;

};
int main()
{
    int arr [6] = {1,2,3,4,5,1};
    int n = 5;
    bool ans = checksorted(arr,n);
    if(ans){
        cout<<"the array is sorted";
        cout<<ans;
    }
    else{
        cout<<"the array is not sorted";
        cout<<ans;
    }
    return 0 ;
}