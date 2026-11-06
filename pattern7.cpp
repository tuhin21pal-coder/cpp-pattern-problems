#include<iostream>

int main(){
    for(int i=1;i<=9;i+=2){
        for(int j=i;j<9;j+=2){
            std::cout<<" ";
        }
        for(int k=1;k<=i;k++){
            std::cout<<"*";
        }
        std::cout<<'\n';
    }
    return 0;
}