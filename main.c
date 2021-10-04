#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  //create an array for 10 ints
  int arr[10];

  //set first value to 0
  arr[0]=0;

  int i;

  //generate random number for the rest of the array
  srand(time(NULL));
  for (i=1;i<10;i++){
    arr[i] = rand();
  }

  //print out arr
  printf("[");
  for(i=0;i<10;i++){
    printf("%d, ",arr[i]);
  }
  printf("]\n");

//new array for 10 ints
int ray[10];

//pointer to each
int* arrp = arr;
int* rayp = ray;


//put ray reverse order of arr
for(i=9;i>=0;i--){
  ray[i]=*arrp;
  arrp++;
}

//print out ray with []
printf("with []: [");
for(i=0;i<10;i++){
  printf("%d, ",ray[i]);
}
printf("]\n");

//print out ray with *
printf("with *: [");
for(i=0;i<10;i++){
  printf("%d, ",*rayp);
  rayp++;
}
printf("]\n");

  return 0;
}
