#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <cstring>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<n; i++){
        if(n%i==0){
            cout<<i;
        }
    }


}