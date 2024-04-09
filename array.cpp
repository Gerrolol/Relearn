#include <iostream>

int searchArray(int num, int size, int array[]);

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]); 

    int index;
    int myNum;

    std::cout << "what number are u looking for" <<std::endl;
    std::cin >> myNum;

    index = searchArray(myNum,size, numbers);

    std::cout << "index is " << index << std::endl;
}

int searchArray(int num, int size, int array[]){
    int index = 0;
    for(int i =0; i<size; i++){
        if(array[i] != num){
            index++;
        }
        else{
            break;
        }
    }
    return index;
}

