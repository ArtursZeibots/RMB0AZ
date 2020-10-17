#include<stdio.h>

void main(){
char array[8] = "00000000";
printf("%s\n", array);
array[1] = '1';
printf("%s\n", array);
for(int sk = 8;sk>0;sk--){
array[sk] = '1';
printf("%s\n", array);

}





}
