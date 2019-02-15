#include <stdio.h>
#include <stdlib.h>

#define Size 10

//定义一个int类型的顺序表
//顺序表结构主要包含1.定义顺序表空间所分配的长度2.实际数据所占用的长度3.索引
typedef struct Table{
	int *head;
	int length;
	int size;
}table;

//初始化顺序表
table initTable(table *t)
{
	t->head = (int*)malloc(Size * sizeof(int));
	if(!t->head){
		printf("初始化失败");
		exit(0);
	}
	t->length = 0;
}

//根据索引插入元素
table addTable(table *t,int pos,int element){
	if(pos<0 || pos>t->length){
		printf("插入位置不合法！\n");
		exit(0);
	}
	for(int i=t->length-1;i>=pos;i--){
		t->head[i+1] = t->head[i];
	}
	t->head[pos] = element;
	t->length++;
}

//根据索引删除元素
table deleteTable(table *t,int pos){	
	if(pos<0 || pos>t->length){
		printf("删除位置不合法！\n");
		exit(0);
	}
	for(int i=pos;i<=t->length-1;i++){
		t->head[i] = t->head[i+1];
	}
	t->length--;
}

//根据索引修改元素
table changeTable(table *t,int pos,int element){
	if(pos<0 || pos>t->length){
		printf("删除位置不合法！\n");
		exit(0);
	}
	t->head[pos] = element;
}

//根据索引查找元素
int findTable(table t,int pos){
	if(pos<0 || pos>t.length-1){
		printf("查找位置不合法！\n");
		exit(0);
	}
	return t.head[pos];
}

//查找元素所在的位置
int findIndex(table t,int element){
	for(int i=0;i<t.length;i++){
		if(t.head[i] == element){
			return i;
		}
	}
	return -1;
}

//反转顺序表
table reverseTable(table *t){
	int temp;
	int j = t->length-1;
	for(int i=0;i<(t->length)/2;i++){
		temp = t->head[i];
		t->head[i]   = t->head[j-i];
		t->head[j-i] = temp;	
	}
}

//打印顺序表
void displayTable(table t){
	for(int i=0;i<t.length;i++){
		printf("[%d]->%d ",i,t.head[i]);
	}
	printf("\n");
}

//主函数
int main(){
	table t; 
	initTable(&t);
	int num,pos,element;
	printf("初始化成功！\n====================================顺序表操作======================================\n");
	printf("1.插入元素\n2.删除元素\n3.更新元素\n4.查找元素\n5.获取元素下标\n6.反转顺序表\n7.打印顺序表\n0.退出\n");
	while(1){
		printf("请选择您要进行的操作：");
		scanf("%d",&num);
		switch(num){
			case 0:
				printf("感谢您的使用!\n");
				exit(0);
			case 1:
				printf("请输入插入的位置->数值(1->20)：");
				scanf("%d->%d",&pos,&element);
				addTable(&t,pos,element);
				break;
			case 2:
				printf("请输入删除的位置->数值(1->20)：");
				scanf("%d",&pos);
				deleteTable(&t,pos);
				break;
			case 3:
				printf("请输入修改的位置->数值(1->20)：");
				scanf("%d->%d",&pos,&element);
				changeTable(&t,pos,element);
				break;
			case 4:
				printf("请输入查找的位置：");
				scanf("%d",&pos);
				element = findTable(t,pos);
				printf("%d\n",element);
				break;
			case 5:
				printf("请输入要查找的元素：");
				scanf("%d",&element);
				pos = findIndex(t,element);
				printf("%d\n",pos);
				break;
			case 6:
				reverseTable(&t);
				break;
			case 7:
				displayTable(t);
				break;
			default:
				printf("无效的指令！\n");
				exit(0);
		}	
	}
	return 0;
}
