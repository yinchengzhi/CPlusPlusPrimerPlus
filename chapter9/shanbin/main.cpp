#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	int id;
	char name[16];
	student* next;
};
student ss[4]=
{
	{0001,"tom",0},
	{0002,"bob",0},
	{0003,"jay",0},
	{0004,"tob",0}
};
void add(student* obj)
{
	student m_head={0};
	m_head=ss[0];
	student *p=&m_head;
	while(p->next!=NULL){
	    p=p->next;
	    printf("%s\n",p->name);
	}

    p->next=obj;
	/*
	p->id = 19;
	memset(p->name,0x00,sizeof(p->name));
	strcpy(p->name,"12323");
	printf("%s\n",p->name);
	*/

}
int main()
{
	ss[0].next=&ss[1];
	ss[1].next=&ss[2];
	ss[2].next=&ss[3];
	ss[3].next=NULL;
	student new_student={0005,"jack",0};
	student *p = &ss[0];
	while(p){
	    printf("%s\n",p->name);
        p = p->next;
	}
    printf("-------------\n");
	student *obj=NULL;
	add(obj);
	return 0;
}
