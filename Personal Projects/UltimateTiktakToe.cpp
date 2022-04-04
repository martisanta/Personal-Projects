#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
bool check( char a[3][3], bool *win1, bool *win2){
    if(a[0][0] == 'X' && a[0][1] == 'X'&& a[0][2] == 'X'){
         return *win1 = true;
    }
    if(a[1][0] == 'X' && a[1][1] == 'X'&& a[1][2] == 'X'){
         return *win1 = true;
    }
    if(a[2][0] == 'X' && a[2][1] == 'X'&& a[2][2] == 'X'){
         return *win1 = true;
    }
    if(a[0][0] == 'X' && a[1][0] == 'X'&& a[2][0] == 'X'){
        return *win1 = true;
    }
    if(a[0][1] == 'X' && a[1][1] == 'X'&& a[2][1] == 'X'){
         return *win1 = true;
    }
    if(a[0][2] == 'X' && a[1][2] == 'X'&& a[2][2] == 'X'){
         return *win1 = true;
    }
    if(a[0][0] == 'X' && a[1][1] == 'X'&& a[2][2] == 'X'){
         return *win1 = true;
    }
    if (a[2][0] == 'X' && a[1][1] == 'X'&& a[0][2] == 'X'){
         return *win1 = true;
    }
    //checking for win2 now
    if(a[0][0] == 'O' && a[0][1] == 'O'&& a[0][2] == 'O'){
         return *win2 = true;
    }
    if(a[1][0] == 'O' && a[1][1] == 'O'&& a[1][2] == 'O'){
         return *win2 = true;
    }
    if(a[2][0] == 'O' && a[2][1] == 'O'&& a[2][2] == 'O'){
         return *win2 = true;
    }
    if(a[0][0] == 'O' && a[1][0] == 'O'&& a[2][0] == 'O'){
         return *win2 = true;
    }
    if(a[0][1] == 'O' && a[1][1] == 'O'&& a[2][1] == 'O'){
         return *win2 = true;
    }
    if(a[0][2] == 'O' && a[1][2] == 'O'&& a[2][2] == 'O'){
         return *win2 = true;
    }
    if(a[0][0] == 'O' && a[1][1] == 'O'&& a[2][2] == 'O'){
         return *win2 = true;
    }
    if (a[2][0] == 'O' && a[1][1] == 'O'&& a[0][2] == 'O'){
         return *win2 = true;
    }
    else{
        return *win1 = false;
        return *win2 = false;
    }
    return *win1;
    return *win2;
}
    
void game( string player1, string player2){
    char position1;
    string string1;
    string string2;
    char position2;
    string array;
    bool win1;
    bool win2;
    char a[3][3] = {{'a','b','c'},{'d','e','f'},{'g','h','i'}};
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << player1 << " What position would you like to choose?"<< endl;
    cin  >> position1;
    while(position1 != 'a' && position1 != 'b' && position1 != 'c' && position1 != 'd' && position1 != 'e' && position1 != 'f' && position1 != 'g' && position1 != 'h' && position1 != 'i'){
        cout << "That's not an option sweetheart. Try again." << endl;
        cin >> position1;
    }
    switch(position1){
        case 'a':
        a[0][0] = 'X';
        string1 = 'a';
        array = 'a';
        break;
        case 'b':
        a[0][1] = 'X';
        string1 = 'b';
        array = 'b';
        break;
        case 'c':
        a[0][2] = 'X';
        string1 = 'c';
        array = 'c';
        break;
        case 'd':
        a[1][0] = 'X';
        string1 = 'd';
        array = 'd';
        break;
        case 'e':
        a[1][1] = 'X';
        string1 = 'e';
        array ='e';
        break;
        case 'f':
        a[1][2] = 'X';
        string1 = 'f';
        array = 'f';
        break;
        case 'g':
        a[2][0] = 'X';
        string1 = 'g';
        array = 'g';
        break;
        case 'h':
        a[2][1] = 'X';
        string1 = 'h';
        array = 'h';
        break;
        case 'i':
        a[2][2] = 'X';
        string1 ='i';
        array = 'i';
        break;
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Groovy. "<< player2 << " what position would you like to choose?"<< endl;
    cin >> position2;
    while(position2 != 'a' && position2 != 'b' && position2 != 'c' && position2 != 'd' && position2 != 'e' && position2 != 'f' && position2 != 'g' && position2 != 'h' && position2 != 'i'){
        cout << "That's not an option sweetheart. Try again." << endl;
        cin >> position2;
    }
    switch(position2){
        case 'a':
        a[0][0] = 'O';
        string2 = 'a';
        array += 'a';
        break;
        case 'b':
        a[0][1] = 'O';
        string2 = 'b';
        array += 'b';
        break;
        case 'c':
        a[0][2] = 'O';
        string2 = 'c';
        array += 'c';
        break;
        case 'd':
        a[1][0] = 'O';
        string2 = 'd';
        array += 'd';
        break;
        case 'e':
        a[1][1] = 'O';
        string2 = 'e';
        array += 'e';
        break;
        case 'f':
        a[1][2] = 'O';
        string2 = 'f';
        array += 'f';
        break;
        case 'g':
        a[2][0] = 'O';
        string2 = 'g';
        array += 'g';
        break;
        case 'h':
        a[2][1] = 'O';
        string2 = 'h';
        array += 'h';
        break;
        case 'i':
        a[2][2] = 'O';
        string2 ='i';
        array += 'i';
        break;
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Ok best friend. "<< player1 << " Your turn!!"<< endl;
    cin >> position1;
    while(position1 != 'a' && position1 != 'b' && position1 != 'c' && position1 != 'd' && position1 != 'e' && position1 != 'f' && position1 != 'g' && position1 != 'h' && position1 != 'i'){
        cout << "That's not an option sweetheart. Try again." << endl;
        cin >> position1;
    }
    switch(position1){
        case 'a':
        a[0][0] = 'X';
        string1 += 'a';
        array += 'a';
        break;
        case 'b':
        a[0][1] = 'X';
        string1 += 'b';
        array += 'b';
        break;
        case 'c':
        a[0][2] = 'X';
        string1 += 'c';
        array += 'c';
        break;
        case 'd':
        a[1][0] = 'X';
        string1 += 'd';
        array += 'd';
        break;
        case 'e':
        a[1][1] = 'X';
        string1 += 'e';
        array += 'e';
        break;
        case 'f':
        a[1][2] = 'X';
        string1 += 'f';
        array += 'f';
        break;
        case 'g':
        a[2][0] = 'X';
        string1 += 'g';
        array += 'g';
        break;
        case 'h':
        a[2][1] = 'X';
        string1 += 'h';
        array += 'h';
        break;
        case 'i':
        a[2][2] = 'X';
        string1 +='i';
        array += 'i';
        break;
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Hmmmm, interesting choice... "<< player2 << " , your turn girlboss."<< endl;
    cin >> position2;
    while(position2 != 'a' && position2 != 'b' && position2 != 'c' && position2 != 'd' && position2 != 'e' && position2 != 'f' && position2 != 'g' && position2 != 'h' && position2 != 'i'){
        cout << "That's not an option sweetheart. Try again." << endl;
        cin >> position2;
    }
   switch(position2){
        case 'a':
        a[0][0] = 'O';
        string2 = 'a';
        array += 'a';
        break;
        case 'b':
        a[0][1] = 'O';
        string2 = 'b';
        array += 'b';
        break;
        case 'c':
        a[0][2] = 'O';
        string2 = 'c';
        array += 'c';
        break;
        case 'd':
        a[1][0] = 'O';
        string2 = 'd';
        array += 'd';
        break;
        case 'e':
        a[1][1] = 'O';
        string2 = 'e';
        array += 'e';
        break;
        case 'f':
        a[1][2] = 'O';
        string2 = 'f';
        array += 'f';
        break;
        case 'g':
        a[2][0] = 'O';
        string2 = 'g';
        array += 'g';
        break;
        case 'h':
        a[2][1] = 'O';
        string2 = 'h';
        array += 'h';
        break;
        case 'i':
        a[2][2] = 'O';
        string2 ='i';
        array += 'i';
        break;
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    while(win1 == false && win2 == false && array.length() != 9){
cout << "Ok "<< player1 << " Your turn!!"<< endl;
while(position1 != 'a' && position1 != 'b' && position1 != 'c' && position1 != 'd' && position1 != 'e' && position1 != 'f' && position1 != 'g' && position1 != 'h' && position1 != 'i'){
        cout << "That's not an option sweetheart. Try again." << endl;
        cin >> position1;
    }
    cin >> position1;
    switch(position1){
        case 'a':
        a[0][0] = 'X';
        string1 += 'a';
        array += 'a';
        break;
        case 'b':
        a[0][1] = 'X';
        string1 += 'b';
        array += 'b';
        break;
        case 'c':
        a[0][2] = 'X';
        string1 += 'c';
        array += 'c';
        break;
        case 'd':
        a[1][0] = 'X';
        string1 += 'd';
        array += 'd';
        break;
        case 'e':
        a[1][1] = 'X';
        string1 += 'e';
        array += 'e';
        break;
        case 'f':
        a[1][2] = 'X';
        string1 += 'f';
        array += 'f';
        break;
        case 'g':
        a[2][0] = 'X';
        string1 += 'g';
        array += 'g';
        break;
        case 'h':
        a[2][1] = 'X';
        string1 += 'h';
        array += 'h';
        break;
        case 'i':
        a[2][2] = 'X';
        string1 +='i';
        array += 'i';
        break;
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    check(a, &win1, &win2);
 
    if(win1 == true){
        cout << "Congratulations "<< player1 << " YOU won!! I was rooting for your the whole time btw."<< endl;
        break;
    }
    if(win2 != true && win1 != true && array.length() == 9){
        cout << "A tie. How dissapointing." << endl;
        break;
    }
    cout << "HMMM intense... "<< player2 << " , your turn."<< endl;
    cin >> position2;
    while(position2 != 'a' && position2 != 'b' && position2 != 'c' && position2 != 'd' && position2 != 'e' && position2 != 'f' && position2 != 'g' && position2 != 'h' && position2 != 'i'){
        cout << "That's not an option sweetheart. Try again." << endl;
        cin >> position2;
    }
    switch(position2){
        case 'a':
        a[0][0] = 'O';
        string2 = 'a';
        array += 'a';
        break;
        case 'b':
        a[0][1] = 'O';
        string2 = 'b';
        array += 'b';
        break;
        case 'c':
        a[0][2] = 'O';
        string2 = 'c';
        array += 'c';
        break;
        case 'd':
        a[1][0] = 'O';
        string2 = 'd';
        array += 'd';
        break;
        case 'e':
        a[1][1] = 'O';
        string2 = 'e';
        array += 'e';
        break;
        case 'f':
        a[1][2] = 'O';
        string2 = 'f';
        array += 'f';
        break;
        case 'g':
        a[2][0] = 'O';
        string2 = 'g';
        array += 'g';
        break;
        case 'h':
        a[2][1] = 'O';
        string2 = 'h';
        array += 'h';
        break;
        case 'i':
        a[2][2] = 'O';
        string2 ='i';
        array += 'i';
        break;
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    check(a, &win1, &win2);
    if (win2 == true){
         cout << "Congratulations "<< player2 << " YOU won!! I was rooting for you the whole time btw."<< endl;
    }
    if(win2 != true && win1 != true && array.length() == 9){
        cout << "A tie. How dissapointing." << endl;
    }
}
}

int main(){
char position1;
string player1;
char a[3][3] = {{'a','b','c'},{'d','e','f'},{'g','h','i'}};
    string player2;
    string string1;
    char play;
    cout << "**** Welcome to the Ultimate Tik Tak Toe Show Down! ****" << endl;
    cout << "Wanna play? (y/n)" << endl;
    cin >> play;
    while(play == 'y'){
    cout << "Player 1 Name: "<< endl;
    cin  >> player1;
    cout << "Player 2 Name: "<< endl;
    cin >> player2;
    game(player1, player2);
    cout << "Play again? (y/n)"<< endl;
    cin >> play;
    }
    if(play != 'y' && play != 'n'){
        cout << "that's not even an option... bye."<< endl;
    }
    else{
        cout << "Ok bye." << endl;
    }
return 0;
}
