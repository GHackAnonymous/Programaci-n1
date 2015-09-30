#include <stdio.h>
int main (int argc, char* argv[]){
  
  int n1 = 0, n2 = 0, n3 = 0;
  char linea[180];
  
  printf("Intruduce el primer numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n1);
  
  printf("Intruduce el segundo numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n2);
  
  printf("Intruduce el tercedo numero entero: ");
  fgets(linea, 180, stdin);
  sscanf(linea, "%d", &n3);
  

  if(n1 < n2 && n2 < n3 && n1 < n3){
    printf("%d ",n1);
    printf("%d ",n2);
    printf("%d ",n3);
    printf("\n");
  }else if(n2 < n1 && n2 < n3 && n1 < n3){
    printf("%d ",n2);
    printf("%d ",n1);
    printf("%d ",n3);
    printf("\n");
  }else if(n3 < n2 && n3 < n1 && n2 < n1){
    printf("%d ",n3);
    printf("%d ",n2);
    printf("%d ",n1);
    printf("\n");
  }else if(n1 < n2 && n3 < n2 && n1 < n3){
    printf("%d ",n1);
    printf("%d ",n3);
    printf("%d ",n2);
    printf("\n");
  }else if(n3 < n1 && n1 < n2){
    printf("%d ",n3);
    printf("%d ",n1);
    printf("%d ",n2);
    printf("\n");
  }else if(n2 < n3 && n3 < n1 && n3 < n1){
    printf("%d ",n2);
    printf("%d ",n3);
    printf("%d ",n1);
    printf("\n");
  }
	
  printf("Pulsa Cuanquier tecla para terminal: ");
  fgets(linea, 180, stdin);

}