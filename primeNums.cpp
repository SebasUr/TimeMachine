//
// Created by ASUS on 11/09/2023.
//

#include "primeNums.h"

bool primeNums::isPrime(int num) {
    int i;
    bool prime = true;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            prime = false;
            break;
        }
    }
    return prime;
}

bool primeNums::isCoprime(int num1, int num2) {
    int i;
    bool coprime = true;
    for(i=2;i<=num1/2;i++){
        if((num1%i==0 && num2%i==0) || (num1==num2)){
            coprime = false;
            break;
        }
    }
    return coprime;
}
