#include"ainclude.h"
//#define N 18
int N = 18;
char str[18];

void clear(){
    char ch;
    do{
        ch = getchar();
    }while(ch != '\n');		//读到回车退出循环
}
int main(){
//    FILE * fp = fopen("./test.txt","r");//只读
    FILE * fp = fopen(".//test.txt","a+");//追加（往后写）
//    FILE * fp = fopen("./test.txt","w");//重写
    if(fp = NULL){
        printf("YOU CANT FIND THIS FLIE\n");
    }
    else{
        printf("NB\n");
//       clear();
//        fread(str,N,1,fp);
//        printf("%c",str[N]);
        fputs("NB",fp);
        fcloseall();
    }
//    printf("%s",str);
    printf("OK\n");
}