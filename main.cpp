#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;


string dec2hex(int n){
    stringstream ss;
    ss << hex << n;
    string res(ss.str());
    return res;
}

string dec2oct(int n){
    stringstream ss;
    ss << oct << n;
    string res(ss.str());
    return res;
}

char dec2char(int n){
//    char ch = n;
    n = char(n);
    return n;
}



int main(){

    //map<int,pair<pair<string , string>, char>> table;

    vector<pair<pair<string ,string>,char>> table;


    char po = char(po);
    //table.emplace_back({(make_pair(make_pair("p","i"),"Y"))});
    pair <string ,string > pair1;
    pair<pair<string ,string >,char> pair2;
    table.push_back(pair2);

    for (int i = 0; i < 128; ++i) {
        pair1.first = dec2hex(i);
        pair1.second = dec2oct(i);
        pair2.first = pair1;
        pair2.second = dec2char(i);
        table.push_back(pair2);

    }

    //for (int j = 0; j < 128; ++j) {
      //  cout << j << ":" << table[j+1].first.first << ":" << table[j+1].first.second << ":" << table[j+1].second << endl;
    //}
    cout << left << setw(5) << "Dec"
    << left << setw(5) << "Hex"
    << left  << setw(8)<< "Octal"
    << left << setw(10) << "Char"
    << endl;


    for(int j = 0; j<128 ; j++){
        cout << left <<setw(5) << j
        << left << setw(5) << table[j+1].first.first
        << left <<  setw(8) << table[j+1].first.second
        << left  << setw(10) << table[j+1].second << endl;
    }



}