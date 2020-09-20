#include <stdio.h>
#include <stdlib.h>

typedef struct TNode  //begin
{
	int					data;
	struct TNode	*next;
} TNode;

typedef struct
{
	TNode	*first;
	TNode	*last;
} TList;
//end
typedef struct
{
    int Data;
    Node *pnext;

}Node;


struct SinhVien //begin
{
    char Ten[30];
    int MaSV;
};

struct SVNode
{
    SinhVien data;
    SVNode *pNext;
};
//end



// tao mot node moi


Node* getNode(DataType x)
{
    Node *p;
    p = new Node; // Cấp phát vùng nhớ cho node
    if(p==NULL)
    {
        printf("Khong du bo nho!");
        return NULL;
    }
    p->Data = x;
    p->pnext= NULL;
    return p;
}


//tạo một danh sách rỗng

void Init(list &1)
{
    1.pHead = 1.pTail = NULL;
}


//Thêm 1 phần tử vào danh sách
// thêm phần tử đầu

pHead = pTail = new_node;

// thêm vào đầu

