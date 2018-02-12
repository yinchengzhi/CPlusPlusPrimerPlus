#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct node{
    int data;
    struct node*pnext;
}Node;

typedef Node* LinkList;

LinkList initNode(){
    LinkList l = (LinkList)malloc(sizeof(Node));
    l->data = 0;
    l->pnext = NULL;
    printf("初始化成功!\n\n");
    return l;
}

LinkList CreateList(LinkList l, int n){
    LinkList temp,p;
    temp = l;
    for(int i=1;i<=n;i++){
        p = (LinkList)malloc(sizeof(LinkList));
        temp->pnext = p;
        temp = p;
        p->data = i;
        printf("%d\n",p->data);
    }
    temp->pnext = NULL;
    printf("create List over!\n\n");
    return l;
}
void ShowList(LinkList l){
    while(l->pnext!=NULL){
        printf("%d\n",l->data);
        l = l->pnext;
    }
    printf("%d\n",l->data);
    printf("show over!\n\n");
}

void InsertNode(LinkList l,Node* d,int n){
    LinkList pre = l;
    for(int i=0;i<n-1;i++){
        pre = pre->pnext;
    }
    d->pnext = pre->pnext;
    pre->pnext = d;
    printf("Insert Node over!\n\n");
}

void DeleteNode(LinkList l,int n){
    LinkList temp = l;
    /* 单链表删除只支持2以上的位置...*/
    for(int i=0;i<n-2;i++){
        temp = temp->pnext;
    }
    /* 删除下一个节点 */
    LinkList freeNode = temp->pnext;
    temp->pnext = temp->pnext->pnext;
    freeNode->pnext = NULL;
    free(freeNode);
    printf("Delete Node over!\n\n");
}

int main(){
    LinkList l= initNode();
    printf("%d\n",l->data);
    CreateList(l,10);
    ShowList(l);
    Node d;
    d.data = 99;
    d.pnext = NULL;
    InsertNode(l,&d,4);
    ShowList(l);
    DeleteNode(l,2);
    ShowList(l);

    return 0;
}
