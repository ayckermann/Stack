#include <iostream>
#define MAX 10
using namespace std;


int stack[MAX];
int n = -1;

void push(){
    if(n== MAX-1){
        cout << " Stack penuh\n";
    }
    n++;
    cout << "Masukan nilai : ";
    cin >> stack[n];
}
void pop(){
    if(n==-1){
        cout<< "Stack kosong\n";
    }
    else{
    stack[n--];
    }
}
int clear(){
    return n = -1;
}
void cetak(){
    int nomor=0;
    if(n==-1){
        cout << "Stack kosong\n";
    }
    else{
        cout << "Stack :\n";
        for(int i = n; i >= 0;i--){
            
            cout << ++nomor << ". "<< stack[i] << "\n";
            
        }
        cout << "=============\n";
    }
}

int main(){
    int input=0;
    do{
        cetak();
        cout << "1. PUSH\n"
            << "2. POP\n"
            << "3. CLEAR\n"
            << "4. EXIT\n";

        cout << "Masukan operasi : ";cin >> input;
        switch (input)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            clear();
            break;
        case 4:
            break;
        default:
            cout << "Kesalahan dalam input operasi\n";
            break;
        }
        system("cls");
    }
    while (input!=4);
    return 0;
}
