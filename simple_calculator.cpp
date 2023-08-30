#include <iostream>

using namespace std;

int main()

{
        char op;
        float a,b;
        cout<<"enter operator +,*,/,-:";
        cin>>op;
        
        cout<<"enter two opearands = ";
        cin>>a>>b;
        
        
        switch(op){
                
                case '+':
                    cout<<"sum of "<<a<<" + "<<b<<" is="<<a+b<<endl;
                     break;
                
                
                case '-':
                    cout<<"substraction of "<<a<<" - "<<b<<" is= "<<a-b<<endl;
                    break;
                
                
               
                case '/':
                    cout<<"division of "<<a<<" / "<<b<<" is= "<<a/b<<endl;
                    break;
                
               
                case '*':
                    cout<<"product of "<<a<<" * "<<b<<" is= "<<a*b<<endl;
                    break;
                
                
                default:
                      cout<<"ERROR!! opeartor is not correct ";
                       break;
                
        }
    
    return 0;
}

