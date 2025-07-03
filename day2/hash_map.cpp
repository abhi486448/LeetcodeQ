#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //creation
    unordered_map<string,int> m;

    //insertion

    //1
    pair<string,int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string,int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //what will happen
    m["mera"] = 2; //it will only update key value allong with mera but not create new map

    //Search
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    cout << m.at("unknown")
    return 0;
}