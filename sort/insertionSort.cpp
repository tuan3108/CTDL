#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a = {6, 8, 9, 6, 1, 2, 4, 3};
    for ( int i = 1; i<a.size(); i++) {
        int min = a[i];
        int j = i - 1;
        while ( j >= 0 && a[j] > min)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = min;
    }
    for ( auto x : a) 
        cout << x << " ";
}
