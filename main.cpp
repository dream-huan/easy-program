#include<iostream>
#include<algorithm>

bool login(){
    std::string id,pw;
    std::cout<<"Please enter your id and password\nid:";
    std::cin>>id;
    std::cout<<"password:";
    std::cin>>pw;
    return 0;
}
//we
bool jc(std::string a){
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
    std::string id,pw;
    std::cout<<"Please enter your id and password,warning:id must be greater than 6 bits and less than 22 bits,\npassword must be greater than 12 bits and less than 72 bits and contain three of the characters,uppercase letters,lowercase letters and numbers\nid:";
    std::cin>>id;
    while(id.length()<6||id.length()>22) std::cout<<"It seems that your id violate our stipulate,Please try again.\nid:",std::cin>>id;
    std::cout<<"password:";
    std::cin>>pw;
    while(!jc(pw)) std::cout<<"It seems that your password violate our stipulate,Please try again.\npassword:",std::cin>>pw;
    std::cout<<"Confirm your information......"<<std::endl<<"Setting up your account"<<std::endl<<"go to login......."<<std::endl;
    login();
    return 1;
}

int main(){
    std::ios::sync_with_stdio(false);
    //std::cin.tie(0);std::cout.tie(0);
    std::cout<<"Do you have our platform id?if yes,enter 1.if no,enter 0.";
    std::string yzs;
    std::cin>>yzs;
    if(yzs.length()==1) yzs[0]-'0'==1?login():regist();
    else regist();
    return 0;
}
