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
    cout <<"<<êîìñÇƒÉQÅ[ÉÄ>>1Å`100"<<endl;
    cout<<"êîéöÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢=>";
    cin>>kotae;

if(kotae == ran)
        cout<<"ìñÇΩÇË"<<endl;
    else if(kotae < ran)
        cout<<"Ç‡Ç¡Ç∆ëÂÇ´Ç¢ÇÊ"<<endl;
    else if(kotae > ran)
        cout<<"Ç‡Ç¡Ç∆è¨Ç≥Ç¢ÇÊ"<<endl;

}while(kotae != ran);

return 0;

}
