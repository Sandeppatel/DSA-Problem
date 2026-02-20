#include <iostream>
using namespace std;

void fibonachiSeries(int n ) {
int i =0 , j =1 ;
cout << i  << " " << j <<" " ;
for(int k = 0 ; k <n ; k++){
    int next = i ; 
    i = j ;
    j = next + j ;
    cout << j << " " ;
}

}

int main() {
    fibonachiSeries(10);
    return 0;
}