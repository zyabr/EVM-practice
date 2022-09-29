#include <iostream>

using namespace std;
#include <iostream>
 
int sqrt(int arg){
    int sqr=0;
    if (arg<0) cout<<"Доигрался!""\n";
        else {
            while (sqr*sqr<=arg){
                sqr=sqr+1;
            }
        }return sqr-1;
}
int main()
{
    int arg;
    cin>>arg;
    cout << sqrt(arg);
}
