/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
   int N;
   cin >> N;
   int num_of_days = 0;
   for (int i=0; i<N; i++){
       int A,B;
       cin >> A >> B;
       if (B>A){
         num_of_days++;
       }
    }
    
   cout << num_of_days << endl;
    return 0;
}



