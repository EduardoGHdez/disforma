#include <iostream>
 
 using namespace std;
 
 int main(){
     for (int i=1; i<=100; i++ ){
         if (!(i%3)){
             if(!(i%5))
                 cout << "disforma" << endl;
             else
                 cout << "dis" << endl;
             continue;
         }
         if (!(i%5)){
             cout << "forma" << endl;
             continue; 
         } 
         cout << i << endl;
    }
 }

