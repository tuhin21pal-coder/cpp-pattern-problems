#include<iostream>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<5;j++){
            std::cout<<" ";
        }

        for(int k=i;k>=1;k--){
            std::cout<<k;
        }
        for(int l=2;l<=i;l++){
            std::cout<<l;
        }
        std::cout<<'\n';

    }
    return 0;
}