#include<stdio.h>
#include<math.h>
 
struct thisinh{
    char ten[100];
   int ma;
   double tong;
   char lop[100];
   float d1,d2,d3;
   char ns[100];
}hocsinh[1000];
 
struct thisinh ds[1000]; int n;
 
void nhap(){
    scanf("%d\n",&n);
    for (int i=0;i<n; i++){
        ds[i].ma=i+1;
        gets(ds[i].ten);
        scanf("%s",ds[i].ns);
        scanf("%f%f%f\n",&ds[i].d1,&ds[i].d2,&ds[i].d3);
        ds[i].tong =ds[i].d1+ds[i].d2+ds[i].d3;
    }
}
 
void in(){
    float max=0;
    for (int i=0;i<n; i++) if(ds[i].tong > max) max=ds[i].tong;
    for (int i=0;i<n;i++) if(ds[i].tong==max) printf("%d %s %s %.1f\n",ds[i].ma,ds[i].ten,ds[i].ns,ds[i].tong);
}
int main(){
    nhap();
    in();
}
