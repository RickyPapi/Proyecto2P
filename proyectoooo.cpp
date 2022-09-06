
#include <iostream>
#include "iomanip"
#include <conio.h> 

using namespace std;

// Clase de figura
class Figura 
{
public:
    int X;
    int Y;
    int longitud;

};
//Clase de Cuadrado
class Cuadrado : public Figura 
{
public:
    int llenoVacio;
    void dibujarCuadrado(int, int, int, int);

};
//Clase de Triangulo
class Triangulo : public Figura
{
public:

    void dibujarTriangulo(int, int, int );
};
//Clase de Rectangulo
class Rectangulo : public Figura 
{
public:
    int ancho;
    void dibujarRectangulo(int, int, int, int);
};
//Clase para Menú
class Menu 
{
public:
    int entrada;
    void iniciarMenu();
};
//Objects
Menu objetoMenu;
Cuadrado objetoCuadrado;
Triangulo objetoTriangulo;
Rectangulo objetoRectangulo;

int main()
{
    
    for (size_t i = 0; i < 100000000; i++)
    {
        objetoMenu.iniciarMenu();
    }
    
    
}
//Menú
void Menu::iniciarMenu() 
{
    system("CLS");
    cout << "Qué figura quieres dibujar ? " << endl << "1.- Cuadrado" << endl << "2.- Triangulo" << endl << "3.- Rectangulo" << endl;
    cin >> entrada;

    if (entrada == 1) //Cuadrado
    {
        system("CLS");
        cout << "Ingresa la longitud del cuadrado" << endl;
        cin >> objetoCuadrado.longitud;

        system("CLS");
        cout << "1.- Vacio" << endl << "2.- Releno" << endl;
        cin >> objetoCuadrado.llenoVacio;

        system("CLS");
        cout << "Ingresa la coordenada X en donde empezará la figura" << endl;
        cin >> objetoCuadrado.X;

        system("CLS");
        cout << "Ingresa la coordenada Y en donde empezará la figura" << endl;
        cin >> objetoCuadrado.Y;

        objetoCuadrado.dibujarCuadrado(objetoCuadrado.longitud, objetoCuadrado.llenoVacio, objetoCuadrado.X, objetoCuadrado.Y);

    }

    if (entrada == 2)// Triangulo
    {
        system("CLS");
        cout << "Ingresa la longitud del Triangulo" << endl;
        cin >> objetoTriangulo.longitud;

        system("CLS");
        cout << "Ingresa la coordenada incial X" << endl;
        cin >> objetoTriangulo.X;

        system("CLS");
        cout << "Ingresa la coordenada incial Y" << endl;
        cin >> objetoTriangulo.Y;

        objetoTriangulo.dibujarTriangulo(objetoTriangulo.longitud, objetoTriangulo.X, objetoTriangulo.Y);

    }
    if (entrada == 3)//Rectangulo
    {
        system("CLS");
        cout << "Ingresa el largo del Rectangulo" << endl;
        cin >> objetoRectangulo.longitud;

        system("CLS");
        cout << "Ingresa el ancho del Rectangulo" << endl;
        cin >> objetoRectangulo.ancho;

        system("CLS");
        cout << "Ingresa las coordenada incial X" << endl;
        cin >> objetoRectangulo.X;

        system("CLS");
        cout << "Ingresa las coordenada incial Y" << endl;
        cin >> objetoRectangulo.Y;

        objetoRectangulo.dibujarRectangulo(objetoRectangulo.longitud, objetoRectangulo.ancho, objetoRectangulo.X, objetoRectangulo.Y);

    }
             
}
//Dibujo Cuadrado
void Cuadrado::dibujarCuadrado(int longitud, int llenoVacio, int X, int Y) 
{
    for (size_t i = 0; i < 10000000; i++)
    { 
        
        system("CLS");
        
        if (X < 0)
        {
            X = 0;
        }

        if (Y < 0)
        {
            Y = 0;
        }

        if (X > 30)
        {
            X = 30;
        }

        if (Y > 20)
        {
            Y = 20;
        }

       //Lleno o vacio
        if (llenoVacio == 1)
        {
            for (size_t a = 0; a < longitud + Y; a++)
            {
                if (a < Y)
                {
                    cout << "    ";
                }
                else
                {
                    for (size_t b = 0; b < longitud + X; b++)
                    {
                        if (b < X )
                        {
                            cout << "   ";
                        }
                        else if ( b > X && b != X && a != Y && b != X + longitud -1   && a !=Y + longitud -1 && a > Y )
                        {

                            cout << "   ";
                        }
                        else cout << " * ";

                    }
                }
                cout << endl;
            }
        }

        if (llenoVacio == 2)
        {
            //CuadradoDibj
            for (size_t i = 0; i < longitud + Y; i++)
            {
                if (i < Y)
                {
                    cout << "  ";
                }
                else
                {
                    for (size_t i = 0; i < longitud + X; i++)
                    {
                        if (i < X)
                        {
                            cout << "  ";
                        }
                        else cout << " * ";

                    }
                }

                cout << endl;
            }

        }
//Pa mover el bisne en cuadrado
        for (size_t i = 0; i < 10000000; i++)
        {   
            char tecla = _getch();
   
            if (tecla == 'A' || tecla == 'a')
            {
                X = X - 1;
                objetoCuadrado.dibujarCuadrado(longitud, llenoVacio, X, Y);
            }
            if (tecla == 'S' || tecla == 's')
            {
                Y = Y + 1;
                objetoCuadrado.dibujarCuadrado(longitud, llenoVacio, X, Y);
            }
            if (tecla == 'D'|| tecla == 'd')
            {
                X = X + 1;
                objetoCuadrado.dibujarCuadrado(longitud, llenoVacio, X, Y);
            }
            if (tecla == 'W' || tecla == 'w')
            {   
                Y = Y - 1;
                objetoCuadrado.dibujarCuadrado(longitud, llenoVacio, X, Y);
            }

            if (tecla == 'L' || tecla == 'l')
            {

                objetoMenu.iniciarMenu();
            }
        }
 
    }

}
//Triangulo
void Triangulo::dibujarTriangulo(int longitud,  int X, int Y)
{

    int contador = 0;
    for (size_t i = 0; i < 10000000; i++)
    {
      system("CLS");

        
        if (X < 0)
        {
            X = 0;
        }

        if (Y < 0)
        {
            Y = 0;
        }
        if (X > 30)
        {
            X = 30;
        }

        if (Y > 20)
        {
            Y = 20;
        }
        contador = 0;
        //Dibujo del Triangulo
        for (size_t a = 0; a < longitud + Y; a++)
        {
            if (a < Y)
            {
                cout << "    ";
            }
            else
            {
                for (size_t b = 0; b < longitud + X; b++)
                {
                    if (b < X)
                    {
                        cout << "   ";
                    }
                    else if (b > X + contador)
                    {
                        cout << "  ";
                    }
                    else
                        cout << " * ";

                }
                contador = contador + 1;
            } 
            if (contador >= longitud)
            {
                contador == longitud;
            }
            cout << endl;
        }

          //Dibuja el Triangulo 
            

        for (size_t i = 0; i < 10000000; i++)
        {
            
            char tecla = _getch();
            
            if (tecla == 'A' || tecla == 'a')
            {
                X = X - 1;
                objetoTriangulo.dibujarTriangulo(longitud, X, Y);
            }
            if (tecla == 'S' || tecla == 's')
            {
                Y = Y + 1;
                objetoTriangulo.dibujarTriangulo(longitud, X, Y);
            }
            if (tecla == 'D' || tecla == 'd')
            {
                X = X + 1;
                objetoTriangulo.dibujarTriangulo(longitud, X, Y);
            }
            if (tecla == 'W' || tecla == 'w')
            {
                Y = Y - 1;
                objetoTriangulo.dibujarTriangulo(longitud, X, Y);
            }

            if (tecla == 'L'|| tecla == 'l')
            {

                objetoMenu.iniciarMenu();
            }
        }

    }

}

void Rectangulo::dibujarRectangulo(int longitud, int ancho, int X, int Y)
{
    for (size_t i = 0; i < 10000000; i++)
    {
        
        system("CLS");

        
        if (X < 0)
        {
            X = 0;
        }

        if (Y < 0)
        {
            Y = 0;
        }

        if (X > 30)
        {
            X = 30;
        }

        if (Y > 20)
        {
            Y = 20;
        }

            //Dibujo cuadrado con wasd 
            for (size_t i = 0; i < ancho + Y; i++)
            {
                if (i < Y)
                {
                    cout << "   ";
                }
                else
                {
                    for (size_t i = 0; i < longitud + X; i++)
                    {
                        if (i < X)
                        {
                            cout << "  ";
                        }
                        else cout << " * ";

                    }
                }

                cout << endl;
            }

        
//Dibujo rectangulo con wasd 
        for (size_t i = 0; i < 10000000; i++)
        {
            
            char tecla = _getch();
            
            if (tecla == 'A' || tecla == 'a')
            {
                X = X - 1;
                objetoRectangulo.dibujarRectangulo(longitud, ancho, X, Y);
            }
            if (tecla == 'S' || tecla == 's')
            {
                Y = Y + 1;
                objetoRectangulo.dibujarRectangulo(longitud, ancho, X, Y);
            }
            if (tecla == 'D' || tecla == 'd')
            {
                X = X + 1;
                objetoRectangulo.dibujarRectangulo(longitud, ancho, X, Y);
            }
            if (tecla == 'W' || tecla == 'w')
            {
                Y = Y - 1;
                objetoRectangulo.dibujarRectangulo(longitud, ancho, X, Y);
            }

            if (tecla == 'L' || tecla == 'l')
            {
                objetoMenu.iniciarMenu();
            }
        }

    }

}




