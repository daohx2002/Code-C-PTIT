#include<stdio.h>
#include<math.h>

struct thisinh{
    int ma;
    char ten[50];
    float A,B,C,tong;
};

struct thisinh ds[1000];int n;

void chucnang1(){
    int t;
    scanf("%d",&t);
    n=t;
    for(int i=0; i<t; i++){
        ds[i].ma=i+1;
        scanf("\n");
        gets(ds[i].ten);
        scanf("%f%f%f",&ds[i].A,&ds[i].B,&ds[i].C);
        ds[i].tong= ds[i].A+ds[i].B+ds[i].C;
    }
    printf("%d\n",t);
}

void chucnang2(){
    int t;
    scanf("%d\n",&t);
    t--;
    
    gets(ds[t].ten);
    scanf("%f%f%f",&ds[t].A,&ds[t].B,&ds[t].C);
    ds[t].tong= ds[t].A+ds[t].B+ds[t].C;
    printf("%d\n",t+1);
}

void sapxep(){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (ds[j].tong < ds [i].tong){
                struct thisinh tmp=ds[i];
                ds[i]=ds[j];
                ds[j]=tmp;
            }
        }
    }
}

void chucnang3(){
    sapxep();
     for (int i=0;i<n;i++) printf("%d %s %.1f %.1f %.1f\n",ds[i].ma,ds[i].ten,ds[i].A,ds[i].B,ds[i].C);
}

int main(){
    int z;
    while (z!=3){
       scanf("%d",&z);
       if(z==1) chucnang1();
       if(z==2) chucnang2();
    }
    chucnang3();
}
