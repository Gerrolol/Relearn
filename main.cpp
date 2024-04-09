#include <iostream>
using namespace std;

int sum(int var[], int size){
    if(size == 0){
        return size;
    }else{
        return var[size] + sum(var, size-1);
    }
}

int main(void){
    int counter[5] = {0,1,2,3,4};
    
     cout << " Write your code at here" ;
}
