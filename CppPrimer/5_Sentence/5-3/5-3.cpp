// 5-3条件语句
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 练习5-5
    const vector<string> scores = { "F","D","C","B","A","A++" };
    string lettergrade;
    int grade = 57;
   /* if (grade < 57) {
        lettergrade = scores[0];
    }
    else {
        lettergrade = scores[(grade - 50) / 10];
    }*/
    // 练习5-6
    lettergrade = grade < 57 ? scores[0] : scores[(grade - 50) / 10];
   
    // 练习5-9 5-10 5-11 5-12
    char ch; char pre = ' ';
    int vowelCnt = 0;
    int otherCnt = 0;
    int kongeCnt = 0;
    int zhibiaoCnt = 0;
    int huanhangCnt = 0;
    int ffCnt = 0;
    while(cin>>ch){
        switch (ch)
        {
        case'a':case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':
            ++vowelCnt;
            break;
        case' ':
            ++kongeCnt;
            break;
        case'\t':
            ++zhibiaoCnt;
            break;
        case'\n':
            ++huanhangCnt;
            break;
        case'f': {
            if (pre == 'f') {
                ++ffCnt;
            }
            break;
        }
        default:
            ++otherCnt;
            break;
        }
        pre = ch;// 存储上一个字符
    }
    return 0;
}

