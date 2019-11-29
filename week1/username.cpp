#include<cstdio>
#include<cstring>
using namespace std;
int ans[100003],k;
void solve(){
    char c;
    char ss[1000];
    int n,len;
    c = getchar();
    while((scanf("%d",&n)) != EOF && n){
        //if(n == 0) break;
        bool f;
        f = false; len = 0;
        memset(ss,0,sizeof(ss));        
        c = getchar();
        while((c = getchar()) != EOF && c != '(' ){
            ss[++len] = c;
            if(len == 1) 
                if(c >= 'a' && c <= 'z') f = true;
                else f = false;
            else{
                if((c == '_' || c == '-' || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) && f == true) f = true;
                else f = false;
            }
        }
        if(len < 5 || len > 20)  f = false;
        if(f == true) ans[++k] = n;
    }
    return;
}
void print(){
	for(int i=1;i<=k;i++) printf("%d ",ans[i]);
}
int main(){
    solve();
    print();
    printf("\n");
    return 0;
}