/*
 ============================================================================
 Name        : x.c
 Author      : Trifan Ion
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main () {
	//numarul de examene
 int register numar_examen;

   time_t t;
   srand((unsigned) time(&t));

    int my_array[1];
   int w;
   	for (w = 0; w< 1; w++) {
   	    my_array[w] = 1+rand() % 10;
   	}
   	for(w=0;w<1;w++){
   		printf("numarul de examene este: %d\n",my_array[0]);
   	}

numar_examen=my_array[0];


//notele la examen
 int note[10];
int y;
	for (y = 0; y< numar_examen; y++) {
	    note[y] = 1+rand() % ((4 + 1 - 3)) + 3;
	}
	for(y=0;y<numar_examen;y++){
		printf("nota la examenul %d  este: %d\n",y+1,note[y]);
	}
//suma notelor
int sum=0;
	for (y = 0; y< numar_examen; y++) {
		sum=sum+note[y];
	}
	printf("Suma notelor: %d",sum);
	//media notelor
float med;
med=(float)sum/numar_examen;
printf("\nmedia este %.2f",med);

if(med==3){
	printf("\nNONE");
}else if(med>3&&med<4){
	printf("\nCommon");
}else if(med>=4&&med<4.5){
	printf("\nHIGH");
}else
	printf("\nNAMED");


   return(0);
}
