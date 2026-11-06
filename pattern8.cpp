#include<iostream>

int main(){
    for(int i=1;i<=9;i+=2){
        for(int j=1;j<i;j+=2){
            std::cout<<" ";
        }
        for(int k=9;k>=i;k--){
            std::cout<<"*";
        }
        std::cout<<'\n';
    }
    return 0;
}