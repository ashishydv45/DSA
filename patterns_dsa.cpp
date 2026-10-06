#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    //pattern 1
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/
   //pattern 2
   /*for (int i=1;i<n;i++){
          for (int j=1;j<=i;j++){
              cout<<j<<"";
          }
    cout<<endl;
   }*/
  //pattern 3
  /*for (int i=1;i<n;i++){
          for (int j=1;j<=i;j++){
              cout<<i<<"";
          }
    cout<<endl;
   }*/
  //pattern 4
   for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
   }
   
    return 0;

}