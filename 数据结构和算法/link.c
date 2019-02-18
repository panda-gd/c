#include <stdio.h>
#include <stdlib.h>

//定义节点的结构
typedef struct node{
	int element;
	struct node *next;
}node;

typedef int elemType;
typedef int status;
typedef node *linkList;

//初始化
linkList initNode(){
	linkList n = (linkList)malloc(sizeof(node));
	if(!n){
		printf("初始化失败！");
		exit(0);
	}
	n->next =NULL;
	return n;
}

//在任意位置插入
linkList insertNode(){

}

//头插法
linkList insertHeadNode(linkList n,elemType element){
	linkList s = initNode();
	s->element = element;
	s->next = n->next;
	n->next = s;
}

//尾插法
linkList insertTailNode(linkList n,elemType element){
	linkList s = initNode();
	s->element = element;
	s->next = n->next;
	n = s;
}

//删除节点
linkList deleteNode(){


}

//更新节点
linkList changeNode(){


}

//获取第i个元素的值
int getElem(linkList n,int i){
	int j = 1;
	linkList p = n->next;
	while(p && j<i){
		p = p->next;
		j++;
	}

	if(!p || j>i){
		printf("查找位置不合法！");
		exit(0);
	}
	
	return p->element;

}

//打印单链表
void displayLinkList(linkList n){
	linkList p = n->next;
	while(p){
		printf("%d",p->element);
		p = p->next;
	}
	printf("\n");
}

//主函数调用
int main(){
	linkList n = initNode();
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
				printf("请输入插入的元素：");
				scanf("%d",&element);
				insertHeadNode(n,element);
				break;
			case 2:
				printf("请输入删除的元素：");
				break;
			case 3:
				printf("请输入修改的位置->数值(1->20)：");
				break;
			case 4:
				printf("请输入查找的位置：");
				break;
			case 5:
				printf("请输入要查找的元素：");
				break;
			case 6:
				break;
			case 7:
				displayLinkList(n);
				break;
			default:
				exit(0);
				break;
		}
	}
	return 0;
}
