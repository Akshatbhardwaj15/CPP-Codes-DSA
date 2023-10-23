#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for(int i = 0; i< v.size(); ++i){
        cout<< v[i] << " ";
    }
    cout<<endl;
    //we can also iterate a vector using iterator-->above line of code is iterating through loops but below line is using iterator.
    //vector<int> ::iterator it = v.begin();
    //for(it = v.begin(); it != v.end(); ++it){
    //    cout<< (*it) << endl;
    //}

    //iterators can point to pairs.
    vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}, {4,5}};
    vector<pair<int, int>> :: iterator it;
    for(it = v_p.begin(); it != v_p.end(); ++it){
        //cout<<(*it).first << " " << (*it).second << endl;
        //or
        cout<<(it->first)<< " " << (it->second) << endl;
    }
}