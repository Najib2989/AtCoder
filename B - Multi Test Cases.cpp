#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int N;
        cin >> N;
        int arr[N];
        int count = 0;

        for(int i = 0; i < N; i++){
            cin >> arr[i];
            if(arr[i] % 2 != 0){
                count ++;
            }

        }
        cout << count << endl;
    }
return 0;
}
