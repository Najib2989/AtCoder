#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    int K;
    cin >> K;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    int ind = N-K;
    for(int i=ind; i<N; i++){
        cout << arr[i] << " ";
    }

     for(int i=0; i<ind; i++){
        cout << arr[i] << " ";
     }


  return 0;
}
