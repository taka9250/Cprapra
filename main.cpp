#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int ran,kotae=10;

    srand((unsigned)time(NULL));
    ran=rand()%100+1;

do{
    cout <<"<<数当てゲーム>>1〜100"<<endl;
    cout<<"数字を入力してください=>";
    cin>>kotae;

if(kotae == ran)
        cout<<"当たり"<<endl;
    else if(kotae < ran)
        cout<<"もっと大きいよ"<<endl;
    else if(kotae > ran)
        cout<<"もっと小さいよ"<<endl;

}while(kotae != ran);

return 0;

}
