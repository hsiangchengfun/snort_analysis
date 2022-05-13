#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

#define ll long long
using namespace std;

int main(){

    ifstream fp;
    ofstream fout;
    fout.open("2freq.txt");

    vector<long double> vec(128,0);
    fp.open("occur.txt");
    ll a,b,tt=0;
    for(ll i=0;i<256;i++){
        fp>>vec[i/2];
        tt+=vec[i/2];
    }

    sort(vec.begin(),vec.end(),greater<long double>());
    for(ll i=0;i<128;i++){
        // fout<<vec[i]<<" ";
        vec[i]/=tt;
        fout<<vec[i]<<endl;
    }




    cout<<tt<<endl;


    return 0;
}