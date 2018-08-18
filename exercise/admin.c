#include <stdio.h>

int main(void){
    char name;
    int pwd;

    printf("请输入用户名：");
    scanf("%c",&name);
    printf("请输入密码：");
    scanf("%d",&pwd);
   
    printf("----交换机管理系统----\n");
    printf("1.登陆\n");
    printf("2.创建新账号\n");
    printf("3.退出\n");
    
    return 0;
}
