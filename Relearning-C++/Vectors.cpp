/**
 * Author: Katleho Nyoni
 * 
 * Description: Learning about vector data structure
 * 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<int> v0 = {5,7,9,4,6,8};
    
    for(int i = 0; i < v0.size(); ++i){
        cout << v0[i] << '\n';
        for(int i = 0; i < v0.size(); ++i){
        cout << i << '\n';
        }
    }

    printf("************************************************** \n");

    for(int x: v0){
        cout << x << '\n';
    }

    return 0;
}

