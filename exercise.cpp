#include <iostream>

using namespace std;

int names [10];

int main(){
// declare an array of 10 integers and fill it up with users input using a for loop
// find and print the highest and smallest number within this array
//for each number tell if it is even or odd

int number;

for (int i = 0; i < 10; i++){
cout << "Enter a number \n";
cin >> number;
names[i] = number;
}

//for highest
if((names[0]>names[1])&&(names[0]>names[2])&&(names[0]>names[3])&&(names[0]>names[4])&&(names[0]>names[5])&&(names[0]>names[6])&&(names[0]>names[7])&&(names[0]>names[8])&&(names[0]>names[9])){
    cout << "The first element is the greatest";
}
else if((names[1]>names[0])&&(names[1]>names[2])&&(names[1]>names[3])&&(names[1]>names[4])&&(names[1]>names[5])&&(names[1]>names[6])&&(names[1]>names[7])&&(names[1]>names[8])&&(names[1]>names[9])){
    cout << "The second element is the greatest";
}
else if((names[2]>names[0])&&(names[2]>names[1])&&(names[2]>names[3])&&(names[2]>names[4])&&(names[2]>names[5])&&(names[2]>names[6])&&(names[2]>names[7])&&(names[2]>names[8])&&(names[2]>names[9])){
    cout << "The third element is the greatest";
}
else if((names[3]>names[0])&&(names[3]>names[1])&&(names[3]>names[2])&&(names[3]>names[4])&&(names[3]>names[5])&&(names[3]>names[6])&&(names[3]>names[7])&&(names[3]>names[8])&&(names[3]>names[9])){
    cout << "The fourth element is the greatest";
}
else if((names[4]>names[0])&&(names[4]>names[1])&&(names[4]>names[2])&&(names[4]>names[3])&&(names[4]>names[5])&&(names[4]>names[6])&&(names[4]>names[7])&&(names[4]>names[8])&&(names[4]>names[9])){
    cout << "The fifth element is the greatest";
}
else if((names[5]>names[0])&&(names[5]>names[1])&&(names[5]>names[2])&&(names[5]>names[3])&&(names[5]>names[4])&&(names[5]>names[6])&&(names[5]>names[7])&&(names[5]>names[8])&&(names[5]>names[9])){
    cout << "The sixth element is the greatest";
}
else if((names[6]>names[0])&&(names[6]>names[1])&&(names[6]>names[2])&&(names[6]>names[3])&&(names[6]>names[4])&&(names[6]>names[5])&&(names[6]>names[7])&&(names[6]>names[8])&&(names[6]>names[9])){
    cout << "The seventh element is the greatest";
}
else if((names[7]>names[0])&&(names[7]>names[1])&&(names[7]>names[2])&&(names[7]>names[3])&&(names[7]>names[4])&&(names[7]>names[5])&&(names[7]>names[6])&&(names[7]>names[8])&&(names[7]>names[9])){
    cout << "The eight element is the greatest";
}
else if((names[8]>names[0])&&(names[8]>names[1])&&(names[8]>names[2])&&(names[8]>names[3])&&(names[8]>names[4])&&(names[8]>names[5])&&(names[8]>names[6])&&(names[8]>names[7])&&(names[8]>names[9])){
    cout << "The ninth element is the greatest";
}
else if((names[9]>names[0])&&(names[9]>names[1])&&(names[9]>names[2])&&(names[9]>names[3])&&(names[9]>names[4])&&(names[9]>names[5])&&(names[9]>names[6])&&(names[9]>names[7])&&(names[9]>names[8])){
    cout << "The tenth element is the greatest";
}

cout << endl;

//for least
if((names[0]<names[1])&&(names[0]<names[2])&&(names[0]<names[3])&&(names[0]<names[4])&&(names[0]<names[5])&&(names[0]<names[6])&&(names[0]<names[7])&&(names[0]<names[8])&&(names[0]<names[9])){
    cout << "The first element is the lowest";
}
else if((names[1]<names[0])&&(names[1]<names[2])&&(names[1]<names[3])&&(names[1]<names[4])&&(names[1]<names[5])&&(names[1]<names[6])&&(names[1]<names[7])&&(names[1]<names[8])&&(names[1]<names[9])){
    cout << "The second element is the lowest";
}
else if((names[2]<names[0])&&(names[2]<names[1])&&(names[2]<names[3])&&(names[2]<names[4])&&(names[2]<names[5])&&(names[2]<names[6])&&(names[2]<names[7])&&(names[2]<names[8])&&(names[2]<names[9])){
    cout << "The third element is the lowest";
}
else if((names[3]<names[0])&&(names[3]<names[1])&&(names[3]<names[2])&&(names[3]<names[4])&&(names[3]<names[5])&&(names[3]<names[6])&&(names[3]<names[7])&&(names[3]<names[8])&&(names[3]<names[9])){
    cout << "The fourth element is the lowest";
}
else if((names[4]<names[0])&&(names[4]<names[1])&&(names[4]<names[2])&&(names[4]<names[3])&&(names[4]<names[5])&&(names[4]<names[6])&&(names[4]<names[7])&&(names[4]<names[8])&&(names[4]<names[9])){
    cout << "The fifth element is the lowest";
}
else if((names[5]<names[0])&&(names[5]<names[1])&&(names[5]<names[2])&&(names[5]<names[3])&&(names[5]<names[4])&&(names[5]<names[6])&&(names[5]<names[7])&&(names[5]<names[8])&&(names[5]<names[9])){
    cout << "The sixth element is the lowest";
}
else if((names[6]<names[0])&&(names[6]<names[1])&&(names[6]<names[2])&&(names[6]<names[3])&&(names[6]<names[4])&&(names[6]<names[5])&&(names[6]<names[7])&&(names[6]<names[8])&&(names[6]<names[9])){
    cout << "The seventh element is the lowestt";
}
else if((names[7]<names[0])&&(names[7]<names[1])&&(names[7]<names[2])&&(names[7]<names[3])&&(names[7]<names[4])&&(names[7]<names[5])&&(names[7]<names[6])&&(names[7]<names[8])&&(names[7]<names[9])){
    cout << "The eight element is the lowest";
}
else if((names[8]<names[0])&&(names[8]<names[1])&&(names[8]<names[2])&&(names[8]<names[3])&&(names[8]<names[4])&&(names[8]<names[5])&&(names[8]<names[6])&&(names[8]<names[7])&&(names[8]<names[9])){
    cout << "The ninth element is the lowest";
}
else if((names[9]<names[0])&&(names[9]<names[1])&&(names[9]<names[2])&&(names[9]<names[3])&&(names[9]<names[4])&&(names[9]<names[5])&&(names[9]<names[6])&&(names[9]<names[7])&&(names[9]<names[8])){
    cout << "The tenth element is the lowest";
}

cout << endl << endl;

//even and odd
int e;
cout << "Input an element to check: \n";
cin >> e;
int f = e - 1;
switch(e){
    case 1:
    if ((names[f]%2)==0){
    cout << "The " << e <<"st element is even";
}
else if ((names[f]%2)!=0){
    cout << "The " << e <<"st element is odd";
}
break;
  case 2:
    if ((names[f]%2)==0){
    cout << "The " << e <<"nd element is even";
}
else if ((names[f]%2)!=0){
    cout << "The " << e <<"nd element is odd";
}
break;
case 3:
    if ((names[f]%2)==0){
    cout << "The " << e <<"rd element is even";
}
else if ((names[f]%2)!=0){
    cout << "The " << e <<"rd element is odd";
}
break;
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
    if ((names[f]%2)==0){
    cout << "The " << e <<"th element is even";
}
else if ((names[f]%2)!=0){
    cout << "The " << e <<"th element is odd";
}
break;

}
return 0;

}