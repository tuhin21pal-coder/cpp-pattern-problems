#include<iostream>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<5;j++){
            std::cout<<" ";
        }
        for(int k=1;k<=i;k++){
            std::cout<<"*";
        }
        std::cout<<'\n';
    }
    return 0;
}