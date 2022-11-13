#include <iostream>
using namespace std;

int main () {
    string username;
    string password;

    cout << "Masukan username: ";
    cin >> username;
    cout << "Masukan password: ";
    cin >> password;
    cout << "\n";

    if(username=="admin" && password=="admin123"){
            cout << "Username dan password sesuai, login berhasil!\n";
        }else if(username=="admin" && password !="admin123")
           cout << "Username sesuai, password tidak sesuai!\n";

    else if (username != "admin" && password =="admin123")
       cout << "Username tidak sesuai, password sesuai!\n";
    else{
       cout << "Username dan password tidak sesuai!\n";
    }

        return 0;
}
