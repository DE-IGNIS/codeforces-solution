#include <iostream>
#include <vector>
using namespace std ;
 
int main()
{
    int n ; 
    cin >> n ;
    
    vector<int> arr ;
    
    while(n--){
        int t; 
        cin >> t ;
        arr.push_back(t);
    }
    
    int curr = 1 ;
    int prev = 0 ;
    int ans = 0  ;
    
    for (int i = 1 ; i < arr.size() ; i++){
        if (arr[i] == arr[i-1]){
            curr++;
        }else {
            ans = max(ans , 2 * min(curr , prev));
            prev = curr ; 
            curr = 1;
        }
    }
    ans = max(ans , 2 * min(curr , prev));
    cout << ans;
    return 0;
}