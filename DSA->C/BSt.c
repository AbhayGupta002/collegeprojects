//binary search tree
#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
void preorder(struct tree *t);
void inorder(struct tree *t);
void postorder(struct tree *t);
int main(){
    struct tree *root = NULL, *node = NULL, *p = NULL;
    int e = 0;
    printf("enter an element:");
    scanf("%d",&e);
    while(e!=0){
        root=(struct tree *) malloc(sizeof(struct tree)); 
        node->data = e;
        node->left = NULL;
        node->right = NULL;
        if(root  == NULL){
            root = node;
        }else{
            p = root;
            while(p!=NULL){
                if(p->data>node->data){
                if(p->left == NULL){
                p->left = node;
                break;
                    }else{
                        p = p->left;
                    }if(p->right == NULL){
                        p->right = node;
                        break;
                    }else
                    p = p->right;
                }
            }
            printf("press 0 to stop:");
            scanf("%d",&e);
        }printf("display");
        preorder(root);
        inorder(root);
        postorder(root);
    }
}
void preorder(struct tree *t){
    if(t!=NULL){
        printf("%d",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
void inorder(struct tree *t ){
    if(t!=NULL){
    inorder(t -> left);
    printf("%d",t->data);
    inorder (t->right);
    }
}
void postorder(struct tree *t){
    if(t!=NULL){
        postorder(t->left);
        postorder(t->right);
        printf("%d",t->data);
    }
}
