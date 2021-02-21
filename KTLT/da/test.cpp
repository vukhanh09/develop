#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int iTest = 1; iTest <= 100; iTest++){
    	char tmp[100];
    	sprintf(tmp, "%d", iTest);
    	string seed(tmp);
        system((string("input.exe ") + seed).c_str());
        system(string("main1.exe").c_str());
        system(string("main2.exe").c_str());
        if(system(string("fc main1.out main2.out").c_str()) != 0){
            cout << "Test " << iTest << ": WRONG!\n";
           return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
}
