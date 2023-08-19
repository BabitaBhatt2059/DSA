#include<stdio.h>
#include<conio.h>
#define SIZE 5
 int Top=Top-1;
int_arry[SIZE];
void push();
void pop();
void peak();
int main()
{
    int choice;
    while (1){

    
    printf("\n operation to be performed");
    printf("\n1.for push\n2.for pop\n3. for peak");
    printf("enter ur choice");
    scanf("%d",choice);
    }
    return 0;


}
void push(){
    int x;
    if(Top==SIZE-1){
        printf("\stack overflow");
        }

    
    else{
        printf("\n insert element",&x);
      Top=Top+1;
      int_arry[SIZE]=x;
    }
}
void pop(){
    int x;
    if(Top==-1){
        printf("\stack unerflow");}

    
    else {
      Top=Top-1;
      printf("\n pop element",&int_arry[Top]);
      int_arry[Top]=x;
    }
}
void peak(){
    if(Top==-1){
        printf("\n stack underflow");
    }
    else{
        printf("\n show",&int_arry[Top]);
    }
}

