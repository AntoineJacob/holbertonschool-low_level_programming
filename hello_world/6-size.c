#include<stdio.h>
int main(void){
int intType;
float floatType;
long longType;
unsigned long unsignedlongType;
char charType;
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
printf("Size of long int: %zu byte(s)\n", sizeof(longType));
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of long long int: %zu byte(s)\n", sizeof(unsignedlongType));

return (0);
}
