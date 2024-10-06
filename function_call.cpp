#include<bits/stdc++.h>
using namespace std;
void gun(){
    cout<<"Hello CW"<<endl;
}
void fun(int n){
    if(n==0) return;
    cout<<"Hello PW"<<endl;
    fun(n-1);
    
}

int main(){
    fun(5);
    
}