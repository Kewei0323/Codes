'''
1. reverse char and add element of zero;
2. 相加和进位；
3. reverse char, 并且杜绝AAAA等类型出现
'''

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    char a[210],b[210];
    while(scanf("%s%s",&a,&b)!=EOF){
        string sa=a,sb=b;
        int i;
        int len_a=sa.size();
        int len_b=sb.size();
        reverse(sa.begin(),sa.begin()+len_a);
        reverse(sb.begin(),sb.begin()+len_b);
        if(len_a>len_b){
            for(i=0;i<(len_a-len_b);i++){
                sb+='A';
            }
            len_b=len_a;
        }else{
            for(i=0;i<(len_b-len_a);i++){
                sa+='A';
            }
            len_a=len_b;
        }

        int temp;
        int re=0;
        string c="";
        for(i=0;i<len_a;i++){
            temp=((sa[i]-'A')+(sb[i]-'A')+re);
            if((temp/26)){
                re=1;
                c+=((temp%26)+'A');
            }else{
                re=0;
                c+=(temp+'A');
            }
        }
        if(re){
            c+='B';
        }
        reverse(c.begin(),c.begin()+c.size());
        int flag=1;
        for(i=0;i<c.size();i++){
            if(c[i]=='A'&&flag){
 
            }else{
                printf("%c",c[i]);
                flag=0;
            }
        }
        printf("\n");
    }
}
