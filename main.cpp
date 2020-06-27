#include<iostream>
#include<algorithm>
using namespace std;

bool login(){
    string id,pw;
    cout<<"Please enter your id and password\nid:";
    cin>>id;
    cout<<"password:";
    cin>>pw;
    return 0;
}

bool jc(string a){
    int dx=0,xx=0,zm=0,zf=0;
    if(a.length()<12||a.length()>72) return 0;
    for(int i=0;i<a.length();i++){
        if((int)a[i]>=97&&(int)a[i]<=125) dx=1;
        else if((int)a[i]>=65&&(int)a[i]<=91) xx=1;
        else if((int)a[i]>=48&&(int)a[i]<=57) zm=1;
        else zf=1;
    }
    if(dx+xx+zm+zf>=3) return 1;
    else return 0;
}

bool regist(){
    string id,pw;
    cout<<"Please enter your id and password,warning:id must be greater than 6 bits and less than 22 bits,\npassword must be greater than 12 bits and less than 72 bits and contain three of the characters,uppercase letters,lowercase letters and numbers\nid:";
    cin>>id;
    while(id.length()<6||id.length()>22) cout<<"It seems that your id violate our stipulate,Please try again.\nid:",cin>>id;
    cout<<"password:";
    cin>>pw;
    while(!jc(pw)) cout<<"It seems that your password violate our stipulate,Please try again.\npassword:",cin>>pw;
    cout<<"Confirm your information......"<<endl<<"Setting up your account"<<endl<<"go to login......."<<endl;
    login();
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    //cin.tie(0);cout.tie(0);
    cout<<"Do you have our platform id?if yes,enter 1.if no,enter 0.";
    bool temp;cin>>temp;
    temp&1?login():regist();
    return 0;
}
