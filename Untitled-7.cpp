#include<bits/stdc++.h>
using namespace std;
class Part{
    private :
    float a,b;
    public :
    void get();
    void show(float a1,float b1){
        double power;
        a=a1;
        b=b1;
    }
};
void Part::get(){
    double power=1;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        power=power*i;
    }
    cout<<"The Power fxn is "  <<power<<endl;
    
}
int main(){
    Part p;
    p.show(2,3);
    p.get();
    return 0;
}
   