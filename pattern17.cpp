#include<iostream>

int main(){
    for(int i=1;i<=5;i++){
        for(int j = i;j<5;j++){
            std::cout<<" ";
        }
        for(int k=1;k<=i;k++){
            std::cout<<k;
        }
        for(int l=i;l>1;l--){
            std::cout<<l-1;
        }
        std::cout<<"\n";
    }

    for(int i=4;i>=1;i--){
        for(int j=4;j>=i;j--){
            std::cout<<" ";
        }
        for(int k=1;k<=i;k++){
            std::cout<<k;
        }
        for(int l=i;l>1;l--){
            std::cout<<l-1;
        }
        std::cout<<"\n";
    }
    return 0;
}