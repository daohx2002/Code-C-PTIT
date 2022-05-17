#include<stdio.h>
#include<string.h>
 
struct tu{
    char nd[50];
    int solan;
};
struct tu ds[1000]; int n=0;
int tim(char s[100]){
    for (int i=0; i<n; i++) if(strcmp(ds[i].nd, s)==0) return i;
    return -1;
}
 
int check(char s[]){
    for (int i=0; i<strlen(s)-1; i++) if(s[i]> s[i+1]) return 0;
    return 1;
}
 
void sapxep(){
    for (int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(ds[j].solan > ds[i].solan){
                struct tu temp=ds[i];
                ds[i]=ds[j];
                ds[j]=temp;
            }
        }
    }
}
int main(){
    char s[50];
    while(scanf("%s", s)!=-1){
        if(check(s)){
            int i=tim(s);
            if(i==-1){
                strcpy(ds[n].nd,s);
                ds[n].solan=1;
                n++;
            }
            else ds[i].solan++;
        }
    }
    sapxep();
    for(int i=0; i<n; i++) printf("%s %d\n",ds[i].nd,ds[i].solan);
 
}
