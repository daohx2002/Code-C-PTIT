#include<stdio.h>
#include<math.h>

struct thisinh{
    char ten[100];
   int ma;
   double tong;
   char lop[100];
   float d1,d2,d3;
   char ns[100];
};

struct thisinh ds[1000]; int n;

void nhap(){
    scanf("%d",&n);
    scanf("\n");
    for (int i=0;i<n; i++){
        ds[i].ma=i+1;
        gets(ds[i].ten);
        scanf("%s",ds[i].ns);
        scanf("%f%f%f\n",&ds[i].d1,&ds[i].d2,&ds[i].d3);
        ds[i].tong =ds[i].d1+ds[i].d2+ds[i].d3;
    }
}

void sapxep(){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (ds[j].tong > ds [i].tong){
                struct thisinh tmp=ds[i];
                ds[i]=ds[j];
                ds[j]=tmp;
            }
        }
    }
}
void in(){
    for (int i=0;i<n;i++) printf("%d %s %s %s %.1f\n",ds[i].ma,ds[i].ten,ds[i].lop,ds[i].ns,ds[i].tong);
}
int main(){
    nhap();
    sapxep();
    in();
}
