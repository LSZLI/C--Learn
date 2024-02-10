#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    cout << "lsz 随机抽" << endl;
    cout << "3" << endl;
    cout << "2" << endl;
    cout << "1" << endl;
    srand(NULL);
    int random = rand()%5;
    switch (random)
    {
        case 1:
            cout << "恭喜抽到https://www.bilibili.com/bangumi/play/ep744327?theme=movie&spm_id_from=333.337.0.0 "<< endl;
        case 2:
            cout << "恭喜抽到https://www.bilibili.com/bangumi/play/ss5978?spm_id_from=333.337.0.0" << endl;
        case 3:
            cout << "恭喜抽到https://www.bilibili.com/bangumi/play/ss28770?spm_id_from=333.337.0.0" << endl;
        case 4:
            cout << "恭喜抽到https://www.bilibili.com/bangumi/play/ep744327?theme=movie&spm_id_from=333.337.0.0" << endl;
        case 5:
            cout << "恭喜抽到https://www.bilibili.com/bangumi/play/ep744327?theme=movie&spm_id_from=333.337.0.0" << endl;
    }
}
