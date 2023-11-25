#include <stdio.h>
#include <string.h>
#define max 9999
int main(){
    char str[max];
    scanf("%s",&str);
    int m,i,k;
    int flowertype[13],check[12][26] = {0};
    int lenght = strlen(str);
    for(k='1',m=0;k<='9',m<9;k++,m++){
        flowertype[m] = 0;
        for(i=0;i<lenght;i+=2){
    if(str[i] == k){
    char flower = str[i+1];
    if(check[k-'1'][flower-'A'] == 0){
    check[k-'1'][flower-'A'] = 1;
    flowertype[m]++;
    }}} printf("%d\n",flowertype[m]);}

    for(k='A',m=10;k<='C',m<13;k++,m++){
        flowertype[m] = 0;
        for(i=0;i<lenght;i+=2){
            if(str[i] == k){
            char flower = str[i+1];
            if(check[k-'1'][flower-'A'] == 0){
            check[k-'1'][flower-'A'] = 1;
            flowertype[m]++;
            }
            }
        }printf("%d\n",flowertype[m]);

    }
    int maksud = 0;
    for (m=0;m<12;m++){
        if(flowertype[m]>maksud){
            maksud = flowertype[m];
        }
    }
    printf("%d",maksud);

    return 0;
   
}