#include"ainclude.h"
using namespace std;


class cube{
    private:
        int m_h;
        int m_a;
        int m_b;
    public:
        void ma (int a){
            m_a = a;
        }

        void mb (int a){
            m_b = a;
        }

        void mh (int a){
            m_h = a;
        }
        int m_v(){
            return m_h*m_a*m_b;
        }        
        bool v_pt(int v2){
            if(m_v() == v2)  return true;
            else return false;
        }
};
bool v_pt(int v1,int v2){
    if(v1 == v2)  return true;
    else return false;
}
int main(){
    cube cube1,cube2;
    cube1.ma(10);
    cube1.mb(10);
    cube1.mh(10);
    cube2.ma(10);
    cube2.mb(10);
    cube2.mh(10);
    cout<<cube1.m_v()<<ENDL;
    cout<<cube2.m_v()<<ENDL;
    cout<<v_pt(cube1.m_v(),cube2.m_v())<<ENDL;
}

