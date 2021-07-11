#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct node{
char data[42];
struct node *left;
struct node *right;

};
int count=0;


struct node *insert(struct node *root,char ar[42]){

if(root==NULL){

    root=(struct node *)malloc(sizeof(struct node));
    strcpy(root->data,ar);
    root->left=NULL;
    root->right=NULL;
    return root;
}
else{

    printf("do you want this under %s\n?(y/n):",root->data);
    getchar();
    char ans;
    scanf("%c",&ans);
    printf("\n");
    if(ans=='y'){
            if(root->left!=NULL & root->right==NULL){

                root->right = insert(root->right,ar);
                //printf("%s ->right is %s\n",root->data,root->right->data);
            }
            else if(root->left==NULL){

        root->left = insert(root->left,ar);
        //printf("%s ->left is %s\n",root->data,root->left->data);
            }
            else{
                   if(insert(root->left,ar)!=NULL){

                   }
                   else
                    insert(root->right,ar);
            }
    }
    else{

        return NULL;
    }
}
//printf("ROOT IS %s\n",root->data);
return root;
}

void print_leftnodes(struct node *root){
struct node *temp=root;


printf("%s->",temp->data);

while(temp->left!=NULL){
        temp=temp->left;
    printf("%s->",temp->data);


}
printf("\n");

}
void print_rightnodes(struct node *root){
struct node *temp=root;


printf("%s->",temp->data);

while(temp->right!=NULL){
        temp=temp->right;
    printf("%s->",temp->data);


}
printf("\n");

}
void inorder(struct node *root,int count){
if(root==NULL)
    return;
printf("%s -> %s   ---   %s-> %s\n",root->data,root->left->data,root->data,root->right->data);
inorder(root->left,count);

count++;
inorder(root->right,count);

}

int main(){




struct node *root=NULL;
char c[42];
char d[]={'x','\0'};
while(1){

    printf("1. insert\n");
    printf("2. print\n");
    printf("3. print left nodes\n");
    printf("4. print right nodes\n");
    int choice;
    scanf("%d",&choice);
switch(choice){
case 1:
    printf("Enter the data to be inserted:\n");
    getchar();
    scanf("%[^\n]s",&c);
    //fgets(c,40,stdin);
    count++;
    root = insert(root,c);
    strcpy(c,d);
    break;
case 2:
    //printf("\t\t\t %s\n",root->data);

    inorder(root,count);
    break;
case 3:

    print_leftnodes(root);

    break;
case 4:

    print_rightnodes(root);
        break;
case 99:
    exit(1);


    }
}

return 0;
}
