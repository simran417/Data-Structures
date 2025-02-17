#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;


int main(){
    // creation:
    unordered_map<string , int> m;

    // insertion type 1:
    pair<string,int>p=make_pair("love",1);
    m.insert(p);

    // insertion type 2
    pair<string,int> p2("babbar",2);
    m.insert(p2);

    // insertion type 3:
    m["mera"]=1;

    // search:
    // type 1:
    cout<<m["mera"]<<endl;
    cout<<m["love"]<<endl;
    cout<<m["babbar"]<<endl;

    // type 2:
    cout<<m.at("babbar")<<endl;

    // when we pass a key which is not present then:
    // cout<<m.at("unknown")<<endl;   //give error
    cout<<m["unknown"]<<endl;  //crete an entry corresponding to zero
    
    // to find size:
    cout<<"size is: "<<m.size()<<endl;

    // to check presence:
    cout<<"key is present or not: "<<m.count("love")<<endl;   //1 means present or 0 means not present

    // erase:
    m.erase("mera");
    cout<<"size after erase: "<<m.size()<<endl;

    // to print whole maps(traverse):
    // type 1:
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
     
    // type 2:
    unordered_map<string, int> :: iterator it=m.begin();

    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



    // // maps:
    // // creation:
    // map<string , int> m;

    // // insertion type 1:
    // pair<string,int>p=make_pair("love",1);
    // m.insert(p);

    // // insertion type 2
    // pair<string,int> p2("babbar",2);
    // m.insert(p2);

    // // insertion type 3:
    // m["mera"]=1;

    // // type 2:
    // map<string, int> :: iterator it=m.begin();

    // while(it != m.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     it++;
    // }
    
}