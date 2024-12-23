// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string word ;
    string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.\n";
    for(int i=0;i<3;i++){
       getline(cin,word);
    }
    srand(time(0));
    cout << "You will get "<< grade[rand()%9] <<" in this 261102.";
return 0;
 }