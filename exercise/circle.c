#include <stdio.h>

int main(void){
  float r;
  float pi = 3.14;
  printf("请输入圆的半径:\n"); 
  scanf("%f",&r);

  printf("圆的周长为：%.2f\n",2 * pi * r);
  printf("圆的面积为：%.2f\n",pi * r * r);
 
 return 0;
}
