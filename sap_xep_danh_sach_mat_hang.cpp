#include<stdio.h>
#include<math.h>

struct mathang{
    char ten[100];
    int ma;
    float mua,ban,loi;
    char loai[100];
};

struct mathang ds[1000];


int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t; i++){
        ds[i].ma=i+1;
        scanf("\n");
        gets(ds[i].ten);
        gets(ds[i].loai);
        scanf("%f%f",&ds[i].mua,&ds[i].ban);
        ds[i].loi= ds[i].ban - ds[i].mua;
    }
    for (int i=0; i<t; i++){
        for (int j=i+1; j<t;j++){
            if(ds[i].loi < ds[j].loi) {
                struct mathang tmp=ds[i];
                ds[i]=ds[j];
                ds[j]=tmp;
            }
        }
    }
    for (int i=0; i<t; i++){
        printf("%d %s %s %.2f\n", ds[i].ma,ds[i].ten,ds[i].loai,ds[i].loi);
    }
}
