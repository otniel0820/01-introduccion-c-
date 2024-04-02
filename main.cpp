#include <iostream>

using namespace std;

double precio = 9.95;

int main()
{
    //cout<< "Compras\n";
    //cout<< "Dime cuantas unidades quieres comprar\n";
    //int unidades;
    //cin >> unidades;
    //std::cout<<"Hello World";
    
    //double total= unidades * precio;
    // descuento = true;
    //char nombre = 'n';
    //cout<< "Bienvenido" <<nombre<< "\n";
    //cout<< nombre;
    //cout<< "El total de la compra es:"<<total;
    
    double num1;
    double num2;
    char operador;
    int resultado;
    cout<< "Ingrese el num1\n";
    cin>> num1;
    cout<< "Ingrese el num2\n";
    cin>> num2;
    cout<< "Ingrese el operador\n";
    cin>> operador;
    
    switch (operador){
        case '+':
            resultado = num1 + num2;
            
            break;
        case '-':
            resultado = num1 - num2;
            
            break;
        case '*':
            resultado = num1 * num2;
            
            break;
        case '/':
            if(num2 != 0){
                resultado = num1 / num2;
                
            }else {
                cout << "Error: División por cero.";
                return 1;
            }
            break;
        
    }
    cout << "El resultado de " << num1 << " " << operador << " " << num2 << " es: " << resultado;
    
    return 0;
}

