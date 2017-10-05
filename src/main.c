#include <stdio.h>
//Julio Vanzella Pasinatto Ra:171329

int main() {
  int a[5];
  int n,w=1;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */

  if (i%a[0]==0){
    printf("%d", 0);
    w++;
  }
  if (i%a[1]==0){
    printf("%d", 1);
    w++;
  }
  if (i%a[2]==0){
    printf("%d", 2);
    w++;
  }
  if (i%a[3]==0){
    printf("%d", 3);
    w++;
  }
  if (i%a[4]==0){
    printf("%d", 4);
    w++;
  }
  if (1%w==0){
    printf("-\n");
  }
  else{
    printf("\n");
  }
  w=1;
  }



  return 0;
}
