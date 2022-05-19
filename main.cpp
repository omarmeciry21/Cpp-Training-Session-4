#include <iostream>

using namespace std;
/* //A.
int getSum(int num1,int num2){
    return  num1 +num2;
}*/



/* //B.
void printNumbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
string res="";

void getNumbers(int n){
    for(int i=1;i<=n;i++){
        res.append(to_string(i)+" ");
    }
}*/

/*//E.
void printSwappedNumbers(int &num1,int &num2){
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}*/

int main()
{
    int x,y;
    cin>>x>>y;

    printSwappedNumbers(x,y);

    cout<<x<<" "<<y;

    return 0;
}
