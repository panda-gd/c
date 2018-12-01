#include <stdio.h>

int main(void){
    
    char c;   
 
    printf("请输入一个小写字母：\n");
   
    c = getchar();
    
    if(c >= 97 && c <= 122){
       c = c - 32;
    }else{
        printf("您输入的字母不是小写英文字母！请输出输入.\n");
        return 0;
    }

    printf("这个小写字母对应的大写字母为：%c\n",c);

    return 0;
}
