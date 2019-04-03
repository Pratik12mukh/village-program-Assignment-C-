    #include <iostream>
    #include<algorithm>
    #define ll long long
    using namespace std;
    int main() {
        ll test;
        cin>>test;
        while(test--){
            ll n;
            cin>>n;
            ll arr[n];
            for(ll i=0;i<n;i++){
                cin>>arr[i];
            }
            if(n == 1){
                cout<<arr[0]<<endl;
                continue;
            }
            else if(n == 2){
                cout<<arr[0]+arr[1]<<endl;
                continue;
            }
            sort(arr,arr+n);
            ll flag = 0;
            ll a = arr[0];
            ll b = arr[1];
            ll sum = b;
            ll count = n-2;
            ll k = n-1;
            while(count > 0){
               
                if(flag == 0){
                    if(count >= 2){
                        count -= 2;
                        ll t = a + 2*b + arr[k];
                        ll r = 2*a + arr[k] + arr[k-1];
                        k -= 2;
                        if(t >= r){
                            sum += r;
                        }
                        else{
                            sum += t;
                        }
                    }
                    else{
                        count--;
                        sum += a + arr[k];
                        break;
                    }
                }
            }
            cout<<sum<<endl;
        }
    }
