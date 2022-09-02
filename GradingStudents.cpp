//Mame-kakuma
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int len , temp , val ; 
    cin >> len ;
    while( len-- ){
        cin >> val ;
        temp = val+2 ;
        temp -= temp%5 ;
        if( temp >= val and temp > 39 )
            val = temp ;
        cout << val << "\n" ;
    }
}