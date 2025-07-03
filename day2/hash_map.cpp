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

    // cout << m.at("unknown") << endl; // this will show arror that means this value pair not exist in map
    cout << m["unknown"] << endl; //but this will search for that value pair if not exist then create with value 0
    cout << m.at("unknown") << endl;

    //Size
    cout << m.size() << endl;

    //to check presence
    cout << m.count("love") << endl; //if present then 1 if not then 0

    //erase
    m.erase("love");
    cout << m.size() << endl;

    //iterater
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
    return 0;
}