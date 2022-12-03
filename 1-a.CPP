#include<iostream>
using namespace std;

void asteriks(int m){
    for(int i=0;i<m;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
void patternPrinting(int max,int min){
    int p=min;
    int no_of_lines=2*(max-min+1);
    for(int i=1;i<=no_of_lines;i++){
        for(int j=0;j<min && min<=max;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        min++;
        if(min>max){
            for(int k=0;k<max && max>=p;k++){
                cout<<"*"<<" ";
            }
            max--;
        }
    // recursive Method
    asteriks(min);
    if(min<max){
        patternPrinting(max,min+1);
    }
    asteriks(min);
    // Iterative methods-1 

    // int p=min;
    // int no_of_lines=2*(max-min+1);
    // for(int i=1;i<=no_of_lines;i++){
    //     for(int j=0;j<min && min<=max;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    //     min++;
    //     if(min>max){
    //         for(int k=0;k<max && max>=p;k++){
    //             cout<<"*"<<" ";
    //         }
    //         max--;
    //     }
    // }

    //2 method
#include<iostream>
using namespace std;

void asteriks(int m){
    for(int i=0;i<m;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
void patternPrinting(int max,int min){
    int p=min;
    int no_of_lines=2*(max-min+1);
    for(int i=1;i<=no_of_lines;i++){
        for(int j=0;j<min && min<=max;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        min++;
        if(min>max){
            for(int k=0;k<max && max>=p;k++){
                cout<<"*"<<" ";
            }
            max--;
        }
    // recursive Method
    asteriks(min);
    if(min<max){
        patternPrinting(max,min+1);
    }
    asteriks(min);
    // Iterative methods-1 

    // int p=min;
    // int no_of_lines=2*(max-min+1);
    // for(int i=1;i<=no_of_lines;i++){
    //     for(int j=0;j<min && min<=max;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    //     min++;
    //     if(min>max){
    //         for(int k=0;k<max && max>=p;k++){
    //             cout<<"*"<<" ";
    //         }
    //         max--;
    //     }
    // }

    //2 method
