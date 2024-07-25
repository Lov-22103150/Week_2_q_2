#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"enter the string "<<endl;
    getline(cin,s);

    cout<<s;
    reverse(s.begin(),s.end());

    cout<<"reverse string is : "<<endl;
    cout<<s;

    return 0;



}
