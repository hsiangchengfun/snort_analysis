#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

#define ll long long
using namespace std;

int main(){

    ifstream fp;
    ofstream fout;
    fout.open("2ratio.txt");

    vector<long double> vec(48,0);
    fp.open("ratio.txt");
    long double a,b,tt=0;
    for(ll i=0;i<48;i++){
        fp>>a>>vec[i];
        cout<<"ratio "<<i<<" "<<vec[i]<<endl;
        fout<<"ratio "<<i<<" "<<vec[i]<<endl;
        tt+=vec[i];
    }
    fout<<"total ratio "<<(long double)tt/48<<endl;
    
    cout<<"total ratio "<<(long double)tt/48<<endl;
    // sort(vec.begin(),vec.end(),greater<long double>());
    

    // cout<<tt<<endl;

    return 0;
}