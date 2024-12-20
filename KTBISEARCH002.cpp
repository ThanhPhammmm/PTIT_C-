//Done
#include <bits/stdc++.h>
using namespace std;

int n, m;
pair<int, int> a[1000009];
int b[1000009];

int FindBi(int number){
    int left = 1;
    int right = n;
    while(left <= right){
        int mid = (left + right) / 2;
        if((a[mid].first == number) && (a[mid - 1].first < number)){
            return mid;
        }
        if(a[mid].first >= number){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }

    }
    return 0;
}
int main()
{
    cin>>n>>m;
    for(int i = 1;i <= n;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    for(int i = 1;i <= m;i++){
        cin>>b[i];
    }
    for(int i = 1;i <= m;i++){
        int index = FindBi(b[i]);
        cout<<a[index].second<<" ";
    }
    return 0;
}