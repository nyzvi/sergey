#include<iostream>

using namespace std;
long long typedef ll;
int main(){
    int n;
    n=50;
    ll a[50] = {12,-1  ,1 ,99 ,7 ,89 ,12 ,78 ,12 ,67 ,23 ,56 ,23 ,56 ,23 ,56 ,25 ,34 ,34 ,34, 34 ,34, 34 ,34 ,34 ,1000000000000000000,45 ,45 ,45 ,45 ,45 ,56 ,78 ,88 ,88 ,99 ,99 ,12 ,12 ,12 ,12 ,34 ,34 ,34 ,34 ,34 ,34 ,12 ,33 ,33};
     for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int v;
    
    cin >> v;
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0 && a[i] >= a[i + 1])
            swap(a[i], a[i + 1]);
 
        if (i % 2 != 0 && a[i] <= a[i + 1])
            swap(a[i], a[i + 1]);
    }
    
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}

