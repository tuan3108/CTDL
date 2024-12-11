#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a = {3, 5, 1, 5, 7, 5, 8, 9, 7};
    for ( int i = 0; i < a.size(); i++) {
        int min = i;
        for ( int j = i+1; j < a.size(); j++) {
            if ( a[min] > a[j]) {
                min = j;
            } 
        }
        swap(a[i], a[min]);
    }
    for ( auto x : a) 
        cout << x << " ";
}
