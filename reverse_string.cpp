#include<iostream>
using namespace std;
void reverse(string &s1){
    int n=s1.length();
    int i=0;
    while(i<n){
        swap(s1[i],s1[n-1]);
        i++;
        n--;

    }
    cout<<s1<<" ";
}
int main(){
    string s;
    cin>>s;
    reverse(s);
    return 0;
}