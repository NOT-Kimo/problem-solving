#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,maxy=0,miny=0,maxind,minind,sec=0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    maxy = arr[0];
    maxind=0;
    miny = arr[n-1];
    minind=n-1;
    for (int i = 0; i < n; i++){
        if(arr[i]>maxy){
            maxy = arr[i];
            maxind=i;
        }else if (arr[i]<=miny){
            miny=arr[i];
            minind=i;
        }
            
    }
    bool flag = true;
    while ( arr[0] != maxy || arr[n-1]!= miny){

        if(arr[n-1] != miny){
            if (minind+1==maxind && flag == true){
                swap(arr[minind],arr[minind+1]);
                minind++;
                maxind--;
                sec++;
                flag = false;

            }
            else{swap(arr[minind],arr[minind+1]);
            minind++;
            sec++;
            }
        }

        if(arr[0] != maxy){
            if (maxind-1== minind && flag == true){
                swap(arr[maxind],arr[maxind-1]);
                maxind--;
                minind++;
                sec++;
                flag = false;
                

            }
            else { 
                swap(arr[maxind],arr[maxind-1]);
                maxind--;
                sec++;
            }
        }
        
    }

cout << sec << endl;

return 0;
}

