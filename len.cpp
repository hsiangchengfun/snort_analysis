#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

#define ll long long
using namespace std;

int main(){

    ifstream fp;
    ofstream fout;
    fout.open("2len.txt");

    vector<long double> vec(600,0);
    fp.open("len.txt");
    ll a,b,tt=0;
    for(ll i=1;i<=600;i++){
        fp>>vec[i];
        tt+=vec[i];
    }

    sort(vec.begin(),vec.end(),greater<long double>());
    for(ll i=1;i<=600;i++){
        // fout<<vec[i]<<" ";
        vec[i]/=tt;
        fout<<vec[i]<<endl;
    }




    cout<<tt<<endl;


    return 0;
}