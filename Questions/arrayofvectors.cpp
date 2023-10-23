#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for(int i=0; i<v.size(); ++i){
        //v.size-->O(1)
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int N;
    cin>>N;
    vector<int> v[N]; // array of 10 vectors are created
    for(int i = 0; i<N; ++i)
    {
        int n;
        cin>>n;
        for(int j = 0; j<n; ++j){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i = 0; i<N; ++i)
        printVec(v[i]);

}