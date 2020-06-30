#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#define MYVAR 200


int MAX = 100;
static int an = 2;

void prime(){
   int n = 50, i = 3, count, c;

   if ( n >= 1 ){
      printf("2\n");
   }

   for ( count = 2 ; count <= n ;  ){
      for ( c = 2 ; c <= i - 1 ; c++ ){
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         count++;
      }
      i++;
   }
}

int pointerStuff(){
    int n, i, *ptr, sum = 0;

    n = 100;

    // dynamic memory allocation using malloc()
    ptr = (int *) malloc(n*sizeof(int));

    if(ptr == NULL) // if empty array
    {
        return 0;   // end of program
    }

    for(i = 0; i < n; i++)
    {
        // storing elements at contiguous memory locations
        sum = sum + *(ptr + i);
    }

    // printing the array elements using pointer to the location
    for(i = 0; i < n; i++)
    {
    }

    /*
        freeing memory of ptr allocated by malloc
        using the free() method
    */

    free(ptr);

}


typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

// A Stack has array of Nodes, capacity, and top
typedef struct Stack {
    int top;
    int capacity;
    Node* *array;
} Stack;


long factorial(int n){
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

void loopunroll(){
    int m;
    for(int i = 0; i < 100; i++){
        int j;
        m ++;
    }

   int k  =0;
  for (int i = 0; i < 100; i++)
  {
      k += i;
  }
    printf("%d", k);

}


void reverseFibonacci(int n) {
    int a[n];

    // assigning first and second elements
    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i < n; i++) {

        // storing sum in the
        // preceding location
        a[i] = a[i - 2] + a[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {

    }
}

void strength(){
  int x, y, z, i, h, w;
  x = w % 8;
  y = x*2;
  z = y * 33;
  for (i = 0; i < 10; i++)
  {
      h = 14 * i;
      printf("%d", h);
  }
}

int foo(int a, int b)  {
  a = a - b;
  b++;
  a = a * b;
  return a;
}

int bar(){
    for(int i = 0; i < 50; i++){
        foo(i, i+1);
    }
}

int unussed_var = 1821;
int unussed_arr[100] = {0,};

void loop_jamming(){
   int i, j;
    int a[MAX][MAX];
  for (i = 0; i < MAX; i++)   /* initialize 2d array to 0's */
      for (j = 0; j < MAX; j++)
          a[i][j] = 0.0;
  for (i = 0; i < MAX; i++)   /* put 1's along the diagonal */
      a[i][i] = 1.0;

}

float *ke;

float kinetic_Energy(int mass,int vel)
{
    ke = (float*)malloc(1*sizeof(float));
    float sum;

    sum = 0.5*mass*vel;

    *ke = sum;

    return *ke;

}

void calculate()
{
        float k[1000];

        for(int i =0;i<1000;i++)
        {
            k[i] = kinetic_Energy(i+4,i+1);
        }

}


int main(){
    prime();
    calculate();
    loopunroll();
    factorial(39);
    pointerStuff();
    bar();
    int unussed_var1 = 1821;

    reverseFibonacci(30);
    strength();
    return 0;

}
