#include"ainclude.h"

class obj1{
    public:
       static obj1& Get() {//延长生命周期
            static obj1 o1;
            return o1;
        }
    void Hello(){}
};  
/*
void func(){
    int var1 = 1;
    var1++;
    printf("%d\n",var1);
}

void func2(){
    static int var2 = 1;
    printf("%d\n",var2);
       //func();
       //printf(ENDL);
       func2();
    var2++;
    printf("%d\n",var2);
}
*/

int main(){
   /*
    for (int i = 0;i < 10;i++){
       //func();
       //printf(ENDL);
       func2();
    }
    */
   obj1::Get().Hello();
   std::cin.get();
}
