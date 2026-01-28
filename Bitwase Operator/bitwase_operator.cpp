#include<iostream>
using namespace std;
int main()
{
    int a=4 ,b=8;
    cout<<(a&b)<<endl;//bitwise and operator//output 0

    cout<<(a|b)<<endl;//bitwise or operator //output 12

    cout<<(a^b)<<endl;//bitwise or operator //output 12

    cout<<(4 << 1)<<endl; //left shift operator //output 8

    cout<<(4 >> 1)<<endl; //right shift operator //output 2

    /*operator precedence
      scope->
       //-local variable
       //-global variable
     -data type modifiers-> changes meaning of data types
      .long-> 4 bytes
      .sort->2 bytes
      .long long->8 bytes
      .singed
      .unsinged

      */
      cout<<sizeof(int)<< endl;
      cout<<sizeof(long int)<< endl;
      cout<<sizeof(short int)<< endl;
      cout<<sizeof(long long int)<< endl;
      cout<<sizeof(int)<< endl;

      //figure out how to find if a number is power of 2 without any loop

       int n=16;
       bool ispower=1;
       if(n>0 &&(n&(n-1))==0){
          ispower==1;
        cout << n << " is a power of 2" << endl;
       }
       else
        cout << n << " is not power of 2" << endl;

}
