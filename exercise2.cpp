#include <iostream>

using namespace std;

int main(void) {

//(while and if(and operation)) || uisng switch case
//create  password array such that it opens if index 2 and 3 are y and i respectively

    char password[15];
while(1){
    
    cout << "Input password: " << endl;
    cin >> password;

    while (password[2] == 'y' && password[3] == 'i')
    {
    int y, z;
    cout << "Input two numbers \n";
    cin >> y;
    cin >> z;

    while(1)
    {
        char x;
        cout << "Pick an arithmetic operation \n";
        cin >> x;
        switch (x)
        {
            case '+':
            cout << y + z << endl;
            break;

            case '-':
            cout << y - z << endl;
            break;

            case '*':
            cout << y * z << endl;
            break;

            case '%':
            cout << y % z << endl;
            break;

            case '/':
            cout << y / z << endl;
            break;

            default:
            cout << "Pick a correct operation \n";
            
        }
    }
}

cout << "Wrong passord \n";

}
    return 0;
}