#include<iostream>
// #include<bits/c++.h>  we should only use those header whith is used in code other wise we will get errors
#include<vector>
using namespace std;

int main (){
    //1st way to declear vector

    // vector<int> vac;
    // cout<<vac[0];

    //2nd way

    // vector<int> vac = { 1, 2, 3 };

    // cout<<vac[0]<<endl;
    // cout<<vac[1]<<endl;     
    // cout<<vac[2]<<endl;
    // cout<<vac[4]<<endl;

    //3rd way

    // vector<int> vac (5 ,0); first argument is size of the vector and second argument is value which is going to stored

    // cout<<vac[0]<<endl;
    // cout<<vac[1]<<endl;     
    // cout<<vac[2]<<endl;
    // cout<<vac[3]<<endl;
    // cout<<vac[4]<<endl;

    //we can use for each loop on vector

    //example

    // vector<char> vac = { 'a', 'b', 'c'};

    // for(char i : vac){
    //     cout<< i <<endl;
    // }

    //there are various functions that we can use on vector

    //1 . size - it give the size of the vector

    // vector<int> vac = { 1, 2, 3};

    // cout<<"size = "<<vac.size()<<endl;

    //2 . push_back - it help to push element at the last index

    // vector<int> vac = { 1, 2};
    // cout<<"size = "<<vac.size()<<endl;
    // vac.push_back(3);
    // for(int i : vac){
    //     cout<< i <<endl;
    // }
    // cout<<"size = "<<vac.size()<<endl;

    //3 . pop_back - it help to delete element which is at last index

    // vector<int> vac = { 1, 2, 3};
    // cout<<"size = "<<vac.size()<<endl;
    // vac.pop_back();
    // for(int i : vac){
    //     cout<< i <<endl;
    // }
    // cout<<"size = "<<vac.size()<<endl;

    //4 .front() - it shows first value in vector

    // cout<<vac.front()<<endl;

    //5 . back() -  it shows last value in vector

    // cout<<vac.back()<<endl;

    //6 . at() - it help to assces value at sertain index just like vac[i]

    // cout<<vac.at(2)<<endl;

    //size and cabacity

    vector<int> vac;

    vac.push_back(20);
    vac.push_back(21);
    vac.push_back(22);

    cout<<vac.size()<<endl; //to check size of vac
    cout<<vac.capacity()<<endl; // to check capacity of vac
    
    return 0;
}