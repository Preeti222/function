                                                                                                                                   hh n// int fact(int num);

// int main(){
//     int result=fact(5);
//     printf("%d",result);
// }

// int fact(int num){
//     if (num==1){
//         return 1;
//     }
//     else{
//         return num*fact(num-1);
//     }
// }

#include<stdio.h>
int count(int num);

int main(){
    int result=count(1234534435366);
    printf("%d",result);
}

int count(int num){
    if (num<10){
        return 1;
    }else{
        return count(num/10)+1;
    }
}