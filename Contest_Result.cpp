#include <bits/stdc++.h>
using namespace std;

int main(){
int N,M,sum = 0;
cin >> N >> M;

int A[N],B[M];

for(int i=0; i<N; i++){
    cin >> A[i];
}
for(int i=0; i<M; i++){
    cin >> B[i];
    int ind = B[i]-1;
    sum += A[ind];

}
//int sum=0;
/*for(int i=0; i<M; i++){
    int ind = B[i]-1;
    sum += A[ind];
}*/
cout << sum << endl;

return 0;
}
