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
    for (int i=0; i<strlen(s); i++) if(s[i]!=s[strlen(s)-1-i]) return 0;
    return 1;
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
    int m=0;
    for (int i=0; i<n; i++) if(strlen(ds[i].nd)> m) m=strlen(ds[i].nd);
    for(int i=0; i<n; i++) if(strlen(ds[i].nd)==m) printf("%s %d\n",ds[i].nd,ds[i].solan);

}
