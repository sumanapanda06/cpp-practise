#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter value of a: ";
    cin>>a;

    int b;
    cout<<"Enter value of b: ";
    cin>>b;

    char opr;
    cout<<"Enter operator: ";
    cin>>opr;
    // for multiple operators, loop is required which hasnt been taught yet
    
    switch(opr) {
        case '+' : {
            int add=a+b;
            cout<<"Sum: "<<add;
            break;
        }

        case '-' : {
            int diff=a-b;
            cout<<"Diff: "<<diff;
            break;
        }

        case '*' : {
            int prod=a*b;
            cout<<"Prod: "<<prod;
            break;
        }

        case '/' : {

            switch(b) {
                case(0) : {
                    cout<<"Invalid result";
                    break;
                }
                default : {
                    int div=a/b;
                    cout<<"Div: "<<div;
                    break;
                }
            }
            break;
        }
        default : {
            cout<<"Invalid operator";
            break;
        }

    }
}
