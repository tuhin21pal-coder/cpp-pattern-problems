#include<iostream>

int main(){
    for(int i=1;i<=9;i+=2){
        for(int j=9;j>i;j--){
            std::cout<<" ";
        }
        for(int k=1;k<=i;k++){
            if(i == 9 || k == i || k==1){
                std::cout<<"* ";
            }
            else{
                std::cout<<"  ";
            }
        }
        std::cout<<'\n';
    }
    return 0;
}