#include <bits/stdc++.h>
using namespace std;
int main(){

  int N,P,Q,R,S;
  cin >> N >> P >> Q >> R >> S;

  int arr[N+1];
  for(int i=1; i<=N; i++){
    cin >> arr[i] ;
  }
  for(int i=1; i<=P-1; i++){
    cout << arr[i] << " ";
  }
  for(int i=R; i<=S; i++){
    cout << arr[i] << " " ;
  }
  for(int i=Q+1; i<=R-1; i++){
    cout << arr[i] << " " ;
  }
  for(int i=P; i<=Q; i++){
    cout << arr[i] << " " ;
  }
  for(int i=S+1; i<=N; i++){
    cout << arr[i] << " " ;
  }

  cout << endl;

return 0;
}
