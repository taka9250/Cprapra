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
    cout <<"<<�����ăQ�[��>>1�`100"<<endl;
    cout<<"��������͂��Ă�������=>";
    cin>>kotae;

if(kotae == ran)
        cout<<"������"<<endl;
    else if(kotae < ran)
        cout<<"�����Ƒ傫����"<<endl;
    else if(kotae > ran)
        cout<<"�����Ə�������"<<endl;

}while(kotae != ran);

return 0;

}
