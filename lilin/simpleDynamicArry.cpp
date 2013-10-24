#include <iostream>
using namespace std;

/* 動的確保で配列の要素数を一個増やす */

struct arry
{
   int n[1];
};

int main()
{
   int *p = 0;
   
   arry dyn;
   dyn.n[0] = 4;

   int size = sizeof dyn.n / sizeof ( int );
   cout << size << '\n';

   p = new int[ size + 1 ];
      
   p[0] = 5;   p[1] = 6;

   cout << p[0] << '\n';
   cout << p[1] << '\n';
   
   delete [] p;

   return 0;
}
