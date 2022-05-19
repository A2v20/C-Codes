#include<iostream>
using namespace std;
class ComplexNumbers {
    // Complete this class
    private:
    int a,b;
    public:
    ComplexNumbers(int a1,int b1){
        a=a1;
        b=b1;

    }
    void print(){
		cout<<a<<" "<<"+"<<" "<<"i"<<b;
    }
    void plus(ComplexNumbers c2){
		a=a+c2.a;
        b=b+c2.b;
    }
    void multiply(ComplexNumbers c2){
        int a2=a;
        int b2=b;
        a=((a2*c2.a)-(b2*c2.b));
        b=((b2*c2.a)+(a2*c2.b));
        //cout<<(b*c2.a)<<endl;
        //cout<<(a*c2.b)<<endl;
        //cout<<b;
        
}
    
    
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}