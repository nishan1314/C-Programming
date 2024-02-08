#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    sort(str.begin(),str.end());

    int size = str.size();

    for(int i=0;i<size;i++){
     char c=str[i];
     int counter=1;
     while(str[i]==str[++i]){
        counter++;
        
     }
     i--;
     
     cout<<c<<" : "<<counter<<endl;
    }
}