#include<stdio.h>

int main(){
    int n,suma=0,sumb=0,mina=99999,minb=99999;
    scanf("%d",&n);
    while(n--){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a<mina) mina=a;
        if(b<minb) minb=b;
        suma+=a;
        sumb+=b;
    }
    suma+=minb;
    sumb+=mina;
    if(suma > sumb) printf("%d",suma);
    else printf("%d",sumb);

}
