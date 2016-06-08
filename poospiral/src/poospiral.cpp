#include<iostream>
using namespace std;
#define ROWS 5
#define COLS 5

int i,j,a[ROWS][COLS];

int main()
{
cout<<"enter the 25 elements of 5*5 matrix";
for(int i=0;i<5;i++)
{
   for(int j=0;j<5;j++)
       {
         cin>>a[i][j];
       }
}

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
       {
          cout<<a[i][j];
       }
}

int b;
int c = COLS/2;
int p,q;
p=q=c;

for(b=1; c+b<=COLS; b++)
{
    for(; q<=c+b && q<COLS; q++)
        cout<< a[p][q]<< " ";

     if(p == 0 && q == COLS)
       break;

      for(p++,q--;p<=c+b && p < COLS; p++)
          cout<< a[p][q] << " ";
      for(p--,q--; q>=c-b; q--)
          cout << a[p][q] << " ";
      for(p--,q++; p>=c-b ; p--)
          cout << a[p][q] << " ";
      p++;
      q++;
}
   cout<<endl;

return 0;
}
