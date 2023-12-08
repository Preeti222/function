// void myfunction(){
//     printf("hello this is my first program in function");
// }
// int main(){
//     myfunction();
//     return 0;
// }


// void myfunction(char name[],int age){
//     printf("hello %s. you are %d year old. \n", name, age);
// }
// int main(){
//     myfunction("liam",3);
//     myfunction("shivam",4);
//     myfunction("aman",7);
//     return 0;
// }

// void myFunction(char name[], int age) {
//   printf("Hello %s. You are %d years old.\n", name, age);
// }

// int main() {
//   myFunction("Liam", 3);
//   myFunction("Jenny", 14);
//   myFunction("Anja", 30);
//   return 0;
// }

// void myfunction(int a[6]) {
//     for(int i=0; i<6; i++) {
//         printf("%d \n",a[i]);
//     }
// }
// int main() {
//     int a[6] = {1,2,3,4,5,6};
//     myfunction(a);
//     return 0;
// }

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}