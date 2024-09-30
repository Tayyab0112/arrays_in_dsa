#include <iostream>
using namespace std;
int main()
{   
    int arr[5] = {1,0,3,0,5};
    int size = 5;
     int startindex = 0;
    for (int i = 0; i < size; i++)
    {
     if(arr[i] != 0){
        swap(arr[startindex], arr[i]);
        startindex ++; 
     }   
    }

    for (int i = 0; i < size; i++)
    {

    }
    
    for(int i = 0; i<size; i ++){
        cout<<arr[i]<<" ";
    }
    
    return 0 ;
}