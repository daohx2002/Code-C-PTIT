#include<stdio.h>
#include<math.h>

struct mathang{
    char ten[100];
    int da,xp;
    int solan;
};

struct mathang ds[1000];int d=0,max=0;


int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t; i++){
        int dem=0;
        scanf("\n");
        gets(ds[i].ten);
        scanf("%d%d",&ds[i].xp,&ds[i].da);
        while (ds[i].xp <= ds[i].da){
        	ds[i].da -= ds[i].xp;
        	ds[i].da += 2;
        	d++;
        	dem++;
		}
		if (dem > max){ max=dem; ds[i].solan=dem;}
    }
    printf("%d\n",d);
    for (int i=0; i<t; i++){
        if(ds[i].solan== max)printf("%s\n",ds[i].ten);
    }
}
