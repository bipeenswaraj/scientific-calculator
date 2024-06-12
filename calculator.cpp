
#include<iostream>
#include<cmath>
using namespace std;
double add(double a, double b){
    return a+b;
}
double subtract(double a, double b){
    return a - b;
}
double multiply(double a, double b){
return a*b;
}
double divide(double a, double b){
    if(b==0){
        cout<<"cannot divide by zero";
        return 0;
    }
    else{
    return a/b;
    } 
}
double sine(double angle){
    return sin(angle);
}
double cosine(double angle){
    return cos(angle);
}
double tangent(double angle){
    return tan(angle);
}
double natural_log(double value){
    if (value <= 0) {
        cout << "not defined" << endl;
        return 0; 
    } else {
        return log(value);
    }
}
double log_base10(double value){
    if (value <= 0) {
        cout << "not defined" << endl;
        return 0; 
    } else {
        return log10(value);
}
}
double power(double base, double exponent){
    return pow(base,exponent);
}
long factorial(int n){
    if (n == 0) {
       
        return 1; 
    }
    
    else{
        return n  * factorial(n-1);
    }
    
}
int main(){
int a,b;
cout<<"write two no to add";
cin>>a>>b;
cout<<"add :"<<add(a,b)<<endl;
cout<<"write two no to subtract";
cin>>a>>b;
cout<<"subtract :s"<<subtract(a,b)<<endl;
cout<<"write two no to multiply";
cin>>a>>b;
cout<<"multiplication :"<<multiply(a,b)<<endl;
cout<<"write two no to divide";
cin>>a>>b;
cout<<"divide:"<<divide(a,b)<<endl;
cout<<"find value of sine of :";
cin>>a;
cout<<"sin :"<<sine(a)<<endl;
cout<<"find value of cos of :";
cin>>a;
cout<<"cos :"<<cosine(a)<<endl;
cout<<"find value of tan of :";
cin>>a;
cout<<"tan :"<<tangent(a)<<endl;
cout<<"find value of log of";
cin>>a;
cout<<"natural log :"<<natural_log(a)<<endl;
cout<<"find value of log base 10 of";
cin>>a;
cout<<"base 10 log :"<<log_base10(a)<<endl;
cout<<"find the power of number :";
cin>>a>>b;
cout<<"power :"<<power(a,b)<<endl;
return 0;
}
