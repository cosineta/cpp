#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//二叉树的结点设计
typedef struct   Node
{
	char data;
	struct Node *LChild;
	struct Node *RChild;
} BiTNode,*BiTree;

//初始化节点
void InitList(BiTree *l)
{
	*l= (BiTree)malloc(sizeof(BiTNode));
	(*l)->LChild = NULL;
	(*l)->RChild = NULL;
}

void CreateBiTree(BiTree *bt) //先序创建二叉树 
{
	char ch;
	ch = getchar();
	if (ch == '#') *bt = NULL;
	else
	{
		*bt = (BiTree)malloc(sizeof(BiTNode));
		(*bt)->data = ch;
		CreateBiTree(&((*bt)->LChild));
		CreateBiTree(&((*bt)->RChild));
	}
}

void PreOrder(BiTree root)//输出先序遍历 
{
	if (root != NULL)
	{
		printf("%c", root->data);
		PreOrder(root->LChild);
		PreOrder(root->RChild);
	}
}

void InOrder(BiTree root)//输出中序遍历 
{
	if (root != NULL)
	{
		InOrder(root->LChild);
		printf("%c", root->data);
		InOrder(root->RChild);
	}
}

void PostOrder(BiTree root)//输出后序遍历 
{
	if (root != NULL)
	{
		PostOrder(root->LChild);
		PostOrder(root->RChild);
		printf("%c", root->data);
	}
}

int main()
{

	BiTree bt;

	InitList(&bt);

	CreateBiTree(&bt);
	PreOrder(bt);//先序
	printf("\n");
	InOrder(bt);//中序
	printf("\n");
	PostOrder(bt);//后序
	printf("\n");
	
	
	return 0;
}
