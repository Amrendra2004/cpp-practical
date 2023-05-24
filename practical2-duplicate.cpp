#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array:-";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<"enter element of array:-";
        cin>>A[i];
    }
    
    set<int> s;
    for (int i: A) {
        s.insert(i);
    }
 
    for (int i: s) {
        cout << i << " ";
    }
 
    return 0;
}
