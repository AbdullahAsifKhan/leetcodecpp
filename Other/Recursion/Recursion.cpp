#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==0){
        cout<<"return";
        return 0;
    }
    else{
    return n + sum(n-1);
    }
}

int main(){
    int n;
    cin >> n;

    cout<<sum(n);
}


//--without return ----
//#include <iostream>
//using namespace std;
//
//int sum(int n,int ans){
//        if(n==1){
//            cout<<ans;
//            cout<<"Return";
//            return 0;
//        }
//        
//        sum(n-1,ans+n);   
//}
//
//int main(){
//    int n;
//    cin >> n;
//
//    sum(n,1);
//
//
//}