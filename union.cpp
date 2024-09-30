#include <iostream>
#include <vector>
#include<set>
using namespace std;
int main()
{
    vector<int >a = {1,2,2,3,4,5};
    vector<int >b = {1,2,3,3,4,5,6};

    int n1 = a.size();
    int n2 = b.size();
    ;

    set<int> st;
    for(int i = 0 ; i<n1; i++){
        st.insert(a[i]);
    }
    for(int i = 0 ; i<n2; i++){
        st.insert(b[i]);
    }

    vector<int >temp;
    for(auto it :temp){
        temp.push_back(it);
    }
    return 0 ;
}