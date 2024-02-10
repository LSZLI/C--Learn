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
    int random = rand()%3;
    switch (random)
    {
        case 1:
            cout << "恭喜抽到QT"<< endl;
        case 2:
            cout << "恭喜抽到opencv" << endl;
        
    }
}
