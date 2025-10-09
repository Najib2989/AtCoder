#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int total = 0;
    int X;
    cin >> X;
    for (int i=0; i<N; i++){
        int score;
        cin >> score;
        if(score <= X){
            total += score;
        }
    }
    cout << total << endl;
 return 0;
}
