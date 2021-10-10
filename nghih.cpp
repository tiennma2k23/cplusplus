#include <iostream>
using namespace std;
#include <algorithm>
//#include <vector>

const int MAX = 1e6 + 5;

int arr[MAX];

int main(){
    int minN = 1;
    int maxN = 1e6;
    // Ban co the su dung vector thay mang
    int N = maxN - minN + 1;
    // vector<int> v;
    for(int i = minN; i <= maxN; ++i){
        arr[i - minN] = i;
//        v.push_back(i);
    }
    random_shuffle(arr, arr + N);
//    random_shuffle(v.begin(), v.end());

    int take = 50;
    for(int i = 0; i < take; ++i){
        cout << arr[i] << " ";
//        cout << v[i] << " ";
    }
}
