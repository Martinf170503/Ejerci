#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    char buffer[100];
    int x,b;

    archivo=fopen("vector.txt","r+");
    archivo2=fopen("vector2.txt","w");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i++){
       fscanf(archivo, "%d",&x);
       b=x*3;
        fprintf(archivo2,"%d\n",b);
    }
     fclose(archivo);
     fclose(archivo2);
     return 0;
}