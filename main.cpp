#include <iostream>
using namespace std;

int main() {
    int x=0,n=0,k=1,y=1;
    cin>>n;
    cout<<1<<endl;
    while (k<n) {
        if (n>(x+y)) {
            cout << x + y << endl;
            if (x < y) {
                x = x + y;
            } else {
                y = x + y;
            }
            k++;
        }
    }
    return 0;
}
