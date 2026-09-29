#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
     srand(time(0));
      n = rand() % 100 + 1;
      int user, no=0;
      do{
        printf("enter guess");
        scanf("%d",&user);
        

        if(user>n){
        printf("guess low");
      }
      else if(n>user){
        printf("guess high");
      }
      else if (n==user)
      {
    printf("cool used it in %d",no);
      } no++;
      }while(n!=user);
      
      
}
