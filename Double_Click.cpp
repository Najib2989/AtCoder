#include <bits/stdc++.h>
using namespace std;
int main(){
   int N,D;
   cin >> N >> D;

   int arr[N];
   for(int i=0; i<N; i++){
    cin >> arr[i];
   }

   int ans = -1;
   for(int i=0; i<N-1; i++){
    int x1 = arr[i],x2 = arr[i+1];
    if(x2-x1<=D){
        ans = x2;
        break ;
    }
   }
   cout << ans << endl;
return 0;
}
