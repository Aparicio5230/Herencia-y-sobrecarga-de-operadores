#include <iostream>
#include <istream>
#include <ostream>

using namespace std;

class Mamifero {
    private:

        string comida;
        string fechaNacimiento;
        string lugarNacimiento;
        string nombreDueno;
        string nombreAnimal;
        string razaAnimal;
        string lugarResidencia;

    public:
        Mamifero();

        string dameComida()const;
        string dameFechaNacimiento()const;
        string dameLugarNacimineto()const;
        string damenombreDueno()const;
        string dameNombreAnimal()const;
        string dameRazaAnimal()const;
        string dameLugarResidencia()const;

        void fijaComida(string&);
        void fijaFechaNacimiento(string&);
        void fijaLugarNacimineto(string&);
        void fijanombreDueno(string&);
        void fijaNombreAnimal(string&);
        void fijaRazaAnimal(string&);
        void fijaLugarResidencia(string&);

        void imprimeDieta() {
            cout<<"Dieta o Comida del aniamal"<<endl;
            cout<<comida;
            }
        void cambiaPropietario(string&);
        void cambiaRecidencia(string&);

        friend Mamifero& operator + (Mamifero&x, Mamifero& y) {

            }

        friend Mamifero& operator == (Mamifero&x, Mamifero& y) {

            }

        friend Mamifero& operator != (Mamifero&x, Mamifero& y) {

            }

        friend Mamifero& operator < (Mamifero&x, Mamifero& y) {


            }

        friend Mamifero& operator > (Mamifero&x, Mamifero& y) {

            }



        friend istream& operator >> (istream &x, Mamifero &y) {
            cin.ignore();
            cout<<"Nombre: ";
            x>>y.nombreAnimal;
            cout<<"Raza: ";
            x>>y.razaAnimal;
            cout<<"Fecha Nacimineto: ";
            x>>y.fechaNacimiento;
            cout<<"Lugar Nacimineto: ";
            x>>y.lugarNacimiento;
            cout<<"Nombre del Propietario: ";
            x>>y.nombreDueno;
            cout<<"Comida o dieta del animal: ";
            x>>y.comida;

            return x;

            }

        friend ostream& operator << (ostream &x, Mamifero& y) {

            x<<"\nNombre del animal: "<<y.nombreAnimal<<endl;
            x<<"Raza del animal: "<<y.razaAnimal<<endl;
            x<<"Fecha de nacimiento: "<<y.fechaNacimiento<<endl;
            x<<"Lugar de residencia: "<<y.lugarResidencia<<endl;
            x<<"Nombre del dueno: "<<y.nombreDueno<<endl;
            x<<"Dieta o Comida: "<<y.comida<<endl;

            return x;

            }

    };

Mamifero::Mamifero() {

    }

string Mamifero::dameComida() const {
    return comida;
    }

string Mamifero::dameFechaNacimiento() const {
    return fechaNacimiento;
    }

string Mamifero::dameLugarNacimineto() const {
    return lugarNacimiento;
    }

string Mamifero::damenombreDueno() const {
    return nombreDueno;
    }

string Mamifero::dameNombreAnimal() const {
    return nombreAnimal;
    }

string Mamifero::dameRazaAnimal() const {
    return razaAnimal;
    }

string Mamifero::dameLugarResidencia() const {
    return lugarResidencia;
    }

void Mamifero::fijaComida(string& c) {
    comida = c;
    }

void Mamifero::fijaFechaNacimiento(string& fN) {
    fechaNacimiento = fN;
    }

void Mamifero::fijaLugarNacimineto(string& lN) {
    lugarNacimiento = lN;
    }

void Mamifero::fijanombreDueno(string& nD) {
    nombreDueno = nD;
    }

void Mamifero::fijaNombreAnimal(string& nA) {
    nombreAnimal = nA;
    }

void Mamifero::fijaRazaAnimal(string& rA) {
    razaAnimal = rA;
    }

void Mamifero::fijaLugarResidencia(string& lR) {
    lugarResidencia = lR;
    }

void Mamifero::cambiaPropietario(string& nuevo) {
    nombreDueno = nuevo;
    }

void Mamifero::cambiaRecidencia(string& nuevo) {
    lugarResidencia = nuevo;
    }


class Felino : public Mamifero{
    private:

    public:
    Felino() : Mamifero() { }

    };

class GatoDomestico : public Felino {
    private:

    public:

    GatoDomestico() : Felino() { }
    };

int menu();

int opcion;

int main() {

    GatoDomestico minino;
    Felino estrellaDeCirco;
    cout<<"Datos minino:"<<endl;
    cin.ignore();
    cin>>minino;
    cout<<"Datos estrellad e circo:"<<endl;
    cin.ignore();
    cin>>estrellaDeCirco;

    int opcionSwitch;

    do {
        opcionSwitch = menu();

        switch(opcionSwitch) {

            case 1: {
                cout<<"Dieta"<<endl<<endl;
                cout<<"Minino"<<endl;
                minino.imprimeDieta();
                cout<<endl<<"Estrella de Circo"<<endl;
                estrellaDeCirco.imprimeDieta();
                }
            break;
            case 2: {
                cin.ignore();
                cout<<"Fecha y lugar de nacimiento"<<endl<<endl;
                cout<<"Minino"<<endl;
                cout<<"Fecha: "<<minino.dameFechaNacimiento()<<endl;
                cout<<"Lugar: "<<minino.dameLugarNacimineto()<<endl;
                cout<<"Estrella de circo"<<endl;
                cout<<"Fecha: "<<estrellaDeCirco.dameFechaNacimiento()<<endl;
                cout<<"Lugar: "<<estrellaDeCirco.dameLugarNacimineto()<<endl;

                }
            break;
            case 3: {
                cin.ignore();
                string cadena;
                cout<<"Cambio de propietario"<<endl<<endl;
                cout<<"Dueno anterior: "<<minino.damenombreDueno()<<endl;
                cout<<"Nuevo dueno: ";
                getline(cin,cadena);
                minino.fijanombreDueno(cadena);
                }
            break;
            case 4: {
                cin.ignore();
                cout<<"Raza"<<endl<<endl;
                cout<<"Minino: "<<minino.dameRazaAnimal()<<endl;
                cout<<"Estrella de circo: "<<estrellaDeCirco.dameRazaAnimal();

                }
            break;
            case 5: {
                cin.ignore();
                string cadena;
                cout<<"Cambiar lugar de residencia"<<endl;
                cout<<"Lugar Anterior: "<<estrellaDeCirco.dameLugarResidencia();
                cout<<"Nuevo lugar: ";
                getline(cin,cadena);
                estrellaDeCirco.fijaLugarResidencia(cadena);
                }
            default:
                ;
            }
        }
    while(opcionSwitch != 6);

    return 0;
    }

int menu() {
    system("cls");
    cout<<"1.-Imprime dieta"<<endl;
    cout<<"2.-Imprime lugar y fecha de nacimineto"<<endl;
    cout<<"3.-Cambiar el propietario"<<endl;
    cout<<"4.-Imprime raza"<<endl;
    cout<<"5.-Cambiar nombre de recidencia"<<endl;
    cout<<"6.-Salir"<<endl;
    cout<<"Opcion-> ";
    cin>>opcion;

    return opcion;
    }

