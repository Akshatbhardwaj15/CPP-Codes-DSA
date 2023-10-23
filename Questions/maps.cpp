#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m) {
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first << " " << pr.second << endl;
    }//O(nlog(n))
}
int main()
{
    map<int, string> m;
    m[1] = "abc"; //O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";
   // m["abcbd"] = "abcbd"; // s.size() * log(n)
    auto it = m.find(3);//O(log(n))
    if(it != m.end())
        m.erase(it); //m.erase (it/3 anything) --> m.find(7) => 7 is not present //O(log(n))
    m.clear();
    //if(it == m.end()){
    //    cout<<"No Value";
    //}
    //else{
        cout<<(*it).first << " " << (*it).second;
    //}
    print(m);
}