//create an empty array of 5 elements 
//using for loop and pointer assign elements to them 
//using another for loop print out the elements of the array

#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int *p = arr;
    cout << p << endl;
    int num;
    for (int i = 0; i < 5; i++){
        cin >> num;
        p[i] = num;
        //*p = num;
        //p++;
    }
 cout << endl;
    for (int a = 0; a < 5; a++){
        cout << arr[a] << endl;
    }

    return 0;
}