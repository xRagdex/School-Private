/*
*	This program is a translation from Assambly to C from"ifElseHW.s"
*	@author: Edgar Orozco
*	Course: COMP B13 (FALL 2015)
*	Professor: Halrold Mendoza
*	Source: ifElseHW.c
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv){

    int potatoe=0;
    potatoe = atoi(argv[1]);

if(potatoe==4){
   potatoe+=20;
   }else if(potatoe <=6){
    if(potatoe==0){
                potatoe=44;
    }}else if(potatoe>9){
         }else if(potatoe!=-1){
            potatoe=99;
        }else{
            potatoe=-44;
        }
 printf("%d" ,potatoe);
return 0;
}
