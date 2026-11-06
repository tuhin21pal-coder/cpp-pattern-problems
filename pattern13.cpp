#include<iostream>

int main(){
    int count=1;
    for(int i=1;i<=5;i++){
        for(int j= 1;j<=i;j++){
            std::cout<<count;
            count++;
        }
        std::cout<<"\n";
    }
    return 0;
}