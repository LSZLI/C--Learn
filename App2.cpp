#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    cout << "lsz 随机抽" << endl;
    cout << "3" << endl;
    cout << "2" << endl;
    cout << "1" << endl;
    srand(time(NULL));
    int random = rand()%4;
    if(random == 1)
    {
        cout << "恭喜抽到https://www.bilibili.com/bangumi/play/ep744327?theme=movie&spm_id_from=333.337.0.0 "<< endl;
    }
    if(random == 2)
    {
        cout << "恭喜抽到https://www.bilibili.com/bangumi/play/ss5978?spm_id_from=333.337.0.0" << endl;
    }
    if(random == 3)
    {
        cout << "恭喜抽到https://www.bilibili.com/bangumi/play/ss28770?spm_id_from=333.337.0.0" << endl;
    }
    cout <<random<< endl;
}
    