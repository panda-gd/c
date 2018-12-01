#include <stdio.h>

int main(void){
    
    char username[32];
    char password[32];    

    printf("请输入用户名：\n");
    scanf("%s",username);
    printf("请输入密码：\n");
    scanf("%s",password);

    printf("用户名为:%s,密码为:%s\n",username,password);
    return 0;
}
