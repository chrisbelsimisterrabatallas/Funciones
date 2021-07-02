#include <iostream>

//funciones realizan un proceso y devuelven un valor.

using namespace std;

//funcion que calcula la potencia de un numero.
//2 ^ 5 = 2 * 2 * 2 * 2 * 2 = 32

double potencia (double base, int exponente)
{
    double resultado =1;
    for(int i=1; i<=exponente; i++)
    {
        resultado = resultado * base;
    }
    return resultado;
}

//funcion factorial(5) = 1x2x3x4x5
int  factorial (int num)
{
    int fac=1;
    for(int i=1; i<=num; i++)
        fac=fac*i;

    return fac;
}

//funcion que calcula la serie
double sumaserie(int x)
{
    double suma=0;
            suma = x - (potencia(x,3) / factorial(x))
                     + (potencia(x,3) / factorial(x))
                     - (potencia(x,3) / factorial(x));
    return suma;
}

//funcion que recibe como parametro el nombre d euna persona y su edad
// y devuel un saludo, indicando ademas si es o no mayor de edad.
string saludos(string nombre, int edad) {
    string mensaje = "Bienvenido " + nombre;
    if (edad >= 18)
        mensaje = mensaje + ", usted es mayor de edad";
    else
        mensaje = mensaje + ", usted es menor de edad";

    return mensaje;
}

//una funcion como parametros el nombre de una persona
//el dia y mes de nacimiento. La funcion debe devolver el nombre
//de la persona, indicando el signo del zodiaco al que pertenece
//Ejemplo. Hola Juan, tu signo del zodiaco es acuario.
//Aries (21 de marzo-20 de abril)
//Tauro (21 de abril- 21 de mayo)
//Géminis (22 de mayo-21 de junio)
//Cáncer (22 de junio-22 de julio)
//Leo (23 de julio-23 de agosto)
//Virgo (24 de agosto-23 de septiembre)
//Libra (24 de septiembre-23 de octubre)
//Escropio (23 de octubre - 21 de noviembre)
//Sagitario (22 de noviembre - 21 de diciembre)
//Capricornio (22 de diciembre - 19 de enero)
//Acuario (20 de enero - 18 de febrero)
//Piscis (19 de febrero - 20 de marzo)


string signo_zodiacal(string nombre, int mes, int dia) {
    string mensaje = "Hola " + nombre + " , ";

    if (((mes == 3 && dia >= 21)) || ((mes == 4) && (dia <= 20)))
    mensaje += "Tu signo del zodiaco es Aries";
    else if (((mes == 4 && dia >= 21)) || ((mes == 5) && (dia <= 21)))
    mensaje += "Tu signo del zodiaco es Tauro";
    else if (((mes == 5 && dia >= 22)) || ((mes == 6) && (dia <= 21)))
    mensaje += "Tu signo del zodiaco es Geminis";
    else if (((mes == 6 && dia >= 22)) || ((mes == 7) && (dia <= 22)))
    mensaje += "Tu signo del zodiaco es Cancer";
    else if (((mes == 7 && dia >= 23)) || ((mes == 8) && (dia <= 23)))
    mensaje += "Tu signo del zodiaco es Leo";
    else if (((mes == 8 && dia >= 24)) || ((mes == 9) && (dia <= 23)))
    mensaje += "Tu signo del zodiaco es Virgo";
    else if (((mes == 9 && dia >= 24)) || ((mes == 10) && (dia <= 23)))
    mensaje += "Tu signo del zodiaco es Libra";
    else if (((mes == 10 && dia >= 23)) || ((mes == 11) && (dia <= 21)))
    mensaje += "Tu signo del zodiaco es Escorpio";
    else if (((mes == 11 && dia >= 22)) || ((mes == 12) && (dia <= 21)))
    mensaje += "Tu signo del zodiaco es Sagitario";
    else if (((mes == 12 && dia >= 22)) || ((mes == 1) && (dia <= 19)))
    mensaje += "Tu signo del zodiaco es Capricornio";
    else if (((mes == 1 && dia >= 20)) || ((mes == 2) && (dia <= 18)))
    mensaje += "Tu signo del zodiaco es Acuario";
    else if (((mes == 2 && dia >= 19)) || ((mes == 3) && (dia <= 20)))
    mensaje += "Tu signo del zodiaco es Piscis";

    return mensaje;

}

    int main() {

    int mes, dia;
    string nombre;
        cout<<endl<<"Ingresa tu nombre: ";
        getline(cin, nombre);
        cout<<endl<<"Ingresar mes de nacimiento: ";cin>>mes;
        cout<<endl<<"Ingresar el dia de nacimiento: ";cin>>dia;

    cout<<endl<<signo_zodiacal("Juan", 22, 3);
    cout<<endl<<signo_zodiacal(nombre, mes, dia);

    cout<<endl<<"El factorial de 5 es "<<factorial(5);
    cout<<endl<<"El factorial de 6 es "<<factorial(6);
    cout<<endl<<"El factorial de 10 es "<<factorial(10);

     cout<<endl<<potencia(5,3);
     cout<<endl<<potencia(2,5);
     cout<<endl<<potencia(9,2);

     double x, y;
     cout<<endl<<"Ingresa la base: "; cin>>x;
     cout<<endl<<"Ingresa el exponente: "; cin>>y;
     cout<<endl<< x << " elevado a la potencia "<< y <<" es "<<potencia(x,y);


     cout<<endl<<"La sumatoria de la series es: "<<sumaserie(5);


     cout<<endl<<saludos("Juan Gracia", 20);
     cout<<endl<<saludos("Ana Isabel", 15);


        string nomb;
        cout<<endl<<"Ingresa tu nombre: ";
        getline(cin, nombre);
        cout<<endl<<saludos(nombre, 22);


    return 0;
}



