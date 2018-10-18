#include <iostream>
#include <math.h>
using namespace std;

 main(){

    int selec;
    cout<<"Wich formule you want to use?\n1.- Basic Formula\n2.- Heron's Formula\n3.- Having one side and the hipotenuse"<<endl;
    cin>>selec;

        switch(selec){
            case 1:
                int base, altura, total;
                cout<<"Input the base"<<endl;
                cin>>base;
                cout<<"Input the heigth"<<endl;
                cin>>altura;
                total = (base*altura)/2;
                cout<<"The area is: "<<total<<endl;
            break;
            case 2:
                int a,b,c,s;
                cout<<"Input a"<<endl;
                cin>>a;
                cout<<"Input b"<<endl;
                cin>>b;
                cout<<"Input c"<<endl;
                cin>>c;
                s = (a+b+c)/2;
                a = s-a;
                b = s-b;
                c = s-c;
                total = sqrt(s*a*b*c);
                cout<<"The area is: "<<total<<endl;
            break;
            case 3:
                // a,b,c;
                cout<<"Input the side"<<endl;
                cin>>a;
                cout<<"Input the hipotenuse"<<endl;
                cin>>c;
                b=sqrt((c*c)-(a*a));
                cout<<"The area is: "<<b<<endl;
            break;
            default: cout<<"The option selectionated isn't in the option ";
        }
}