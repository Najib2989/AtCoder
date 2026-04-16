#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N * 7];

    for(int i = 0; i < N * 7; i++)
    {
        cin >> A[i];
    }

    int index = 0;

    for(int i = 0; i < N; i++)
    {
        int sum = 0;

        for(int j = 0; j < 7; j++)
        {
            sum = sum + A[index];
            index++;
        }

        cout << sum << endl;
    }

    return 0;
}
