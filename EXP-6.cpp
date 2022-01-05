#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

vector<int> comp(int a[], int n, int uni[], int u){
    map<int,int>complement;
    for(int i=0;i<n;i++){
        complement[a[i]]++;
    }

    for(int i=0;i<u;i++){
        complement[uni[i]]++;
    }

    vector<int>final;
    for(auto i:complement){
        if(i.second==1){
            final.push_back(i.first);
        }
    }
    return final;
}

// int no is a parameter, just to find union complemet or intersection complement 
// this function is to find (A^B)' or (A U B)'
vector<int> _comp(int a[] , int n, int b[], int m, int uni[],int u,int no){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }

    for(int i=0;i<m;i++){
        mp[b[i]]++;
    }

    for(int i=0;i<u;i++){
        mp[uni[i]]++;
    }
    vector<int> v;
    // 0 => intersection
    if(no == 0){
        for(auto i:mp){
            if(i.second != 3){
                v.push_back(i.first);
            }
        }       
    }
    // 1 => union
    else if(no==1){
        for(auto i:mp){
            if(i.second ==1){
                v.push_back(i.first);
            }
        }
    }
    return v; 
}

// int no is a parameter to decide what to do Union or Intersection
// this function is to find (A' ^ B') or (A' U B')
vector<int> Acomp__Bcomp(int a[] , int n, int b[], int m, int uni[],int u,int no){
    vector<int>A_comp = comp(a,n,uni,u);
    vector<int>B_comp = comp(b,m,uni,u);

    map<int,int>acomp__bcomp;
    for(auto i:A_comp){
        acomp__bcomp[i]++;
    }
    for(int i:B_comp){
        acomp__bcomp[i]++;
    }
    vector<int>final;
    // 1 => union
    if(no==1){
        for(auto i:acomp__bcomp){
            final.push_back(i.first);
        }
    }
    // 0 => intersection
    else if(no == 0){
        for(auto i:acomp__bcomp){
            if(i.second == 2)
            final.push_back(i.first);
        }
    }
    return final;
}

bool compare(vector<int> &v1, vector<int> &v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int u;
    cout<<"Enter the size of Universal Set"<<endl;
    cin>>u;
    int n;
    cout<<"Enter the size of set A"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the size of set B"<<endl;
    cin>>m;

    int uni[u],a[n],b[m];
    cout<<"Enter the elements to Universal Set"<<endl;
    for(int i=0;i<u;i++)    cin>>uni[i];
    cout<<"Enter the elements to Set A"<<endl;
    for(int i=0;i<n;i++)    cin>>a[i];
    cout<<"Enter the elements to Set B"<<endl;
    for(int i=0;i<n;i++)    cin>>b[i];

    int choice;
    cout<<"Enter the choice =>\n";
    cout<<"1. (A ^ B)' == (A' U B')\n";
    cout<<"2. (A U B)' == (A' ^ B')\n";
    cin>>choice;

    if(choice==1){
        vector<int> intersec_comp = _comp(a,n,b,m,uni,u,0);
        cout<<"(A ^ B)' = {";
        for(auto i:intersec_comp){
            cout<<i<<", ";
        }
        cout<<"}"<<endl;
        vector<int> uniondds = Acomp__Bcomp(a,n,b,m,uni,u,1);
        cout<<"(A' U B') = {";
        for(auto i:uniondds){
            cout<<i<<", ";
        }
        cout<<"}"<<endl;

        if(compare(intersec_comp, uniondds)){
            cout<<"Both the sets are equal, Proved!!!!\n";
        }    
    }
    else if(choice ==2){
        vector<int> union_c = _comp(a,n,b,m,uni,u,1);
        cout<<"(A ^ B)' = {";
        for(auto i:union_c){
            cout<<i<<", ";
        }
        cout<<"}"<<endl;
        vector<int> interdds = Acomp__Bcomp(a,n,b,m,uni,u,0);
        cout<<"(A ^ B)' = {";
        for(auto i:interdds){
            cout<<i<<", ";
        }
        cout<<"}"<<endl;
        if(compare(union_c, interdds)){
            cout<<"Proved\n";
        }
    }
    else{
        cout<<"Invalid choice\n";
    }

    getch();
    return 0;
}