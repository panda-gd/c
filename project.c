#include <stdio.h>
#include <time.h>

void multiplication();
void primeNumber();
void customizePrimeNumber();
int  checkPrimeNumber(int num);

int main(){
	//multiplication();
	//primeNumber();
	//customizePrimeNumber();
	
	int num;
	printf("请输入一个整数:");
	scanf("%d",&num);
	if(checkPrimeNumber(num) == 1){
		printf("%d是素数！\n",num);
	}else{
		printf("%d不是素数！\n",num);
	}
}

/*
* 九九乘法表
*/
void multiplication(){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
}

/*
* 100-200之间的素数
*/
void primeNumber(){
	int i,j;
	time_t startTime;
	time_t endTime;
	time ( &startTime );
	printf("开始的时间:%d\n",startTime);	
	printf("100-200之间的素数为:\n");
	for(i=101;i<200;i++){
		int flag = 0;
		for(j=2;j<i;j++){
			if(i%j == 0){
				flag++;
			}
		}
		if(flag == 0){
			printf("%d\t",i);
		}
	}
	printf("\n");
	time ( &endTime );
	printf("结束的时间:%d\n",endTime);	
}


/*
* 求两个数之间的数，升级版
*/
void customizePrimeNumber(){
	int i,j,lowerNum,upperNum;
	printf("请输入较小的数:");
	scanf("%d",&lowerNum);
	printf("请输入较大的数:");
	scanf("%d",&upperNum);
	printf("%d-%d之间的素数为:\n",lowerNum,upperNum);
	for(i=lowerNum;i<=upperNum;i++){
		int flag = 0;
		for(j=2;j<i;j++){
			if(i%j == 0){
				flag++;
			}
		}
		if(flag == 0 && i != 1){
			printf("%d\t",i);
		}
	}
	printf("\n");
}

/*
* 判断一个数是不是素数
*/
int checkPrimeNumber(int num){
	int i,j,flag;
	for(i=2;i<num;i++){
		if(num%i == 0){
			flag++;
		}
	}
	if(num >1 && flag == 0){
		return 1;
	}
	return 0;
}
