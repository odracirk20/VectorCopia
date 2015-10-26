#include<stdio.h>

int *apuntador;
  int  arreglo1[5]= {1,2,3,4,5};
  int  arreglo2[5];

void copy(int *apuntador){
  
  
   int i = 0;
   for(i = 0; i < 5; i++){
  arreglo2[i] = *apuntador+i;

}
}


int main ()
{

   copy (arreglo1);
  int i = 0;
  
  for(i = 0; i < 5; i++){

  printf(" %d\n",arreglo2[i]);
}
}

