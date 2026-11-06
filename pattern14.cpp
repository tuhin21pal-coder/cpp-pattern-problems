#include<iostream>

int main(){
    int num;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                num = 1;
            }
            else{
                num = 0;
            }
            std::cout<<num;
        }
        std::cout<<"\n";
    }
    return 0;
}