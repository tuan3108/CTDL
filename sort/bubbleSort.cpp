#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a = {3, 5, 1, 5, 7, 5, 8, 9, 7};
    for(int i = 0; i<a.size(); i++) {
        for ( int j = 0; j < a.size() - i -1; j++) {
            if ( a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    for ( auto x : a) 
        cout << x << " ";
}
