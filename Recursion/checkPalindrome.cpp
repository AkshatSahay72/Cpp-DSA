#include<iostream>
using namespace std;

bool magic(string str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }else{
        return magic(str, s + 1, e - 1);
    }
}

int main(){
    string str = "abadaboa";
    cout << magic(str, 0, str.length()-1);
}