//
//  main.c
//  DataStructLearn
//
//  Created by Janven Zhao on 14-7-22.
//  Copyright (c) 2014年 Janven Zhao. All rights reserved.
//

#include <stdio.h>


#pragma mark
#pragma mark 线性表的顺序存储结构

#define MAXSIZE 20

typedef int  ElemType;
typedef struct {
    ElemType data[MAXSIZE];
    int length;
} Sqlist;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int  Status;

Status GetElem(Sqlist L,int i,ElemType *e)
{
    
    if (L.length == 0 || i<1 || i>L.length) {
        return ERROR;
    }
    *e = L.data[i-1];
    return OK;
}

Status SqlistInsert(Sqlist *L,int i,ElemType e){

    int k;
    
    if (L->length  == MAXSIZE) {
        return ERROR;
    }
    if (i<1 || i>L->length+1) {
        return ERROR;
    }
    
    if (i<= L->length) {
        for (k=L->length-1; k>=i-1; k--) {
            L->data[k+1] = L->data[k];
        }
    }
    L->data[i-1] = e;
    L->length ++;
    return OK;
    
}

Status ListDelete(Sqlist *L,int i,ElemType *e){

    int k;
    if (L->length == 0) {
        return ERROR;
    }
    
    if (i<1 || i>L->length) {
        return ERROR;
    }
    
    if (i<L->length) {
        for (k=i; k<L->length; k++) {
            L->data[k-1] = L->data[k];
        }
    }
    
    L->length --;
    return OK;
    
}

#pragma mark
#pragma mark 线性表的 链式存储结构

typedef struct Node{
    ElemType data;
    struct Node *next;
} Node;


int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
//    
//    Sqlist list = {.length = 15,.data = {1,2,3,4,5}};
//    printf("----%d\n",list.data[0]);
//    
//    /**
//     *  getElement
//     */
//    ElemType *e;
//   Status sta =  GetElem(list, 3, e);
//    if (sta == OK) {
//        printf("You get The Element\n");
//    }else{
//        printf("The list have no Element\n");
//    }
//    
//    /**
//     *  Insert
//     *
//     *  @param list 线性表
//     *  @param 8    位置
//     *  @param 3    元素
//     *
//     *  @return success or Fail
//     */
//    Status stat =  SqlistInsert(&list, 8, 3);
//    if (stat == OK) {
//        printf("insert success \n");
//    }else{
//        printf("insert Failed\n");
//    }
//    
//    /**
//     *  Delete
//     */
//    ElemType *_e;
//    Status s_de =  ListDelete(&list, 8,_e);
//    if (s_de == OK) {
//        printf("delete success \n");
//    }else{
//        printf("delete Failed\n");
//    }
//    
//    
        
    
    return 0;
}


