#include<iostream>

int main(){
    for(int i=1;i<=5;i++){
        for(int k = 1;k<=i;k++){
            std::cout<<"*";
        }
        for(int j=8;j>=2*i-1;j--){
            std::cout<<" ";
        }
        for(int k = 1;k<=i;k++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }

    for(int i=4;i>=1;i--){
        for(int k=1;k<=i;k++){
            std::cout<<"*";
        }
        for(int j=8;j>=2*i-1;j--){
            std::cout<<" ";
        }
        for(int k=1;k<=i;k++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}