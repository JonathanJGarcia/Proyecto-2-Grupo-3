#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include "Cartas.h"
#include <locale.h>
#include <wchar.h>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;


class metodos
{
    //Estructura Pila
    struct Nodes1
    {
        //Datos del Nodo
        Cartas data;

        //Siguiente del Nodo
        Nodes1* next;
    };


private:
    Nodes1* frente = NULL;
    Nodes1* fin = NULL;


public:
    //Metodo para exportar el archivo
    void ExportarArchivo(std::string nombre, string data) {
        ofstream archivo;
        archivo.open(nombre, ios::out);

        if (archivo.fail()) {
            exit(1);
        }
        string datos = data;
        archivo << datos;
        archivo.close();
    }

    //Metodo para mandar la informacion del nodo leido al nodo principal
    void AgregaraLista(Nodes1* lineas)
    {
        Nodes1* ValNuevo = new Nodes1();
        ValNuevo->data.Codigo = lineas->data.Codigo;
        ValNuevo->data.Nombre = lineas->data.Nombre;
        ValNuevo->data.seleccion = lineas->data.seleccion;
        ValNuevo->data.Marcada = false;
        if (ValNuevo->data.Marcada == false) {
            ValNuevo->data.Mar = "False";
        }
        else {
            ValNuevo->data.Mar = "True";
        }
        ValNuevo->data.Repeticiones = 0;
        ValNuevo->data.Rep = "0";

        if (lineas->data.Codigo != "" && lineas->data.Codigo != " ")
        {
            if (frente == nullptr)
            {
                ValNuevo->next = nullptr;
                frente = ValNuevo;
            }
            else
            {
                Nodes1* Moment = frente;
                while (Moment->next)
                {
                    Moment = Moment->next;
                }
                Moment->next = ValNuevo;
            }
        }
    }

    //Metodo que retorna la informacion al buscar por codigo
    string BuscarCodigo(string cod) {
        string carta;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;
        int contador = 0;
        while (Nodo) {
            if (cod == Nodo->data.Codigo) {
                carta = Nodo->data.Codigo + " - " + Nodo->data.Nombre + " - " + Nodo->data.Mar + " - " + Nodo->data.Rep;
            }
            Nodo = Nodo->next;
        }
        if (carta == "") {
            carta = "No se econtro la carta";
        }
        return carta;
    }

    string ListadoSeleccion(string seleccion) {
        string listado;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;

        while (Nodo) {
            if (Nodo->data.seleccion == seleccion) {
                listado += Nodo->data.Codigo + " - " + Nodo->data.Nombre + " - " + Nodo->data.Mar + " - " + Nodo->data.Rep + "\r\n";
            }
            Nodo = Nodo->next;
        }
        return listado;
    }

    string ListadoSeleccionRep(string seleccion) {
        string listado;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;

        while (Nodo) {
            if (Nodo->data.seleccion == seleccion && Nodo->data.Repeticiones > 0) {
                listado += Nodo->data.Codigo + " - " + Nodo->data.Nombre + " - " + Nodo->data.Mar + " - " + Nodo->data.Rep + "\r\n";
            }
            Nodo = Nodo->next;
        }
        return listado;
    }

    string ListadoSeleccionFal(string seleccion) {
        string listado;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;

        while (Nodo) {
            if (Nodo->data.seleccion == seleccion && Nodo->data.Repeticiones == 0) {
                listado += Nodo->data.Codigo + " - " + Nodo->data.Nombre + " - " + Nodo->data.Mar + " - " + Nodo->data.Rep + "\r\n";
            }
            Nodo = Nodo->next;
        }
        return listado;
    }

    string ListadoRepetidas() {
        string listado;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;

        while (Nodo) {
            if (Nodo->data.Repeticiones > 0) {
                listado += Nodo->data.Codigo + " - " + Nodo->data.Nombre + " - " + Nodo->data.Mar + " - " + Nodo->data.Rep + "\r\n";
            }
            Nodo = Nodo->next;
        }
        return listado;
    }

    string ListadoFaltantes() {
        string listado;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;

        while (Nodo) {
            if (Nodo->data.Repeticiones == 0) {
                listado += Nodo->data.Codigo + " - " + Nodo->data.Nombre + " - " + Nodo->data.Mar + " - " + Nodo->data.Rep + "\r\n";
            }
            Nodo = Nodo->next;
        }
        return listado;
    }

    string BuscarNombre(string nom) {
        string carta;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;
        int contador = 0;
        while (Nodo) {
            if (nom == Nodo->data.Nombre) {
                carta = Nodo->data.Codigo + " - " + Nodo->data.Nombre + " - " + Nodo->data.Mar + " - " + Nodo->data.Rep;
            }
            Nodo = Nodo->next;
        }
        if (carta == "") {
            carta = "No se econtro la carta";
        }
        return carta;
    }

    int Faltantes() {
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;
        int contador = 0;
        while (Nodo) {
            if (Nodo->data.Marcada == false) {
                contador = contador + 1;
            }
            Nodo = Nodo->next;
        }
        return contador;
    }

    int Marcadas() {
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;
        int contador = 0;
        while (Nodo) {
            if (Nodo->data.Marcada == true) {
                contador = contador + 1;
            }
            Nodo = Nodo->next;
        }
        return contador;
    }
    void Marcar(string Marcada) {
        msclr::interop::marshal_context context;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;
        while (Nodo) {
            if (Marcada == Nodo->data.Codigo) {
                if (Nodo->data.Marcada == true) {
                    Nodo->data.Repeticiones = Nodo->data.Repeticiones + 1;

                    String^ repe = Convert::ToString(Nodo->data.Repeticiones);
                    Nodo->data.Rep = context.marshal_as<std::string>(repe);
                }
                Nodo->data.Marcada = true;
                Nodo->data.Mar = "True";
            }
            Nodo = Nodo->next;
        }
    }

    void DesMarcar(string DesMarcada) {
        msclr::interop::marshal_context context;
        Nodes1* Nodo = new Nodes1();
        Nodo = frente;
        while (Nodo) {
            if (DesMarcada == Nodo->data.Codigo) {
                if (Nodo->data.Marcada == true && Nodo->data.Repeticiones > 0) {
                    Nodo->data.Repeticiones = Nodo->data.Repeticiones - 1;
                    String^ repe = Convert::ToString(Nodo->data.Repeticiones);
                    Nodo->data.Rep = context.marshal_as<std::string>(repe);
                }
                else if (Nodo->data.Marcada == true && Nodo->data.Repeticiones == 0) {
                    Nodo->data.Repeticiones = 0;
                    String^ repe = Convert::ToString(Nodo->data.Repeticiones);
                    Nodo->data.Rep = context.marshal_as<std::string>(repe);
                    Nodo->data.Marcada = false;
                    Nodo->data.Mar = "False";
                }
            }
            Nodo = Nodo->next;
        }
    }

    std::string ImprimirCartas()
    {
        setlocale(LC_ALL, "spanish");
        std::string Mostrar = "";
        Nodes1* Canci = new Nodes1();
        Canci = frente;
        while (Canci)
        {

            Mostrar += Canci->data.Codigo + " - " + Canci->data.Nombre + " - " + Canci->data.Mar + " - " + Canci->data.Rep + "\r\n";
            Canci = Canci->next;
        }
        return Mostrar;


    }

    void MarcarArchivo(std::string nombre) {
        setlocale(LC_ALL, "spanish");
        std::fstream archivo;
        int totalLines = 0;
        archivo.open(nombre, std::ios_base::in);
        std::string linea;
        char delimitadort = ',';
        static Nodes1 CartasMundial[570];
        while (archivo.good())
        {
            getline(archivo, linea, delimitadort);
            Marcar(linea);
        }
    }


    //Leer el archivo de texto para migrar datos a la pila
    Nodes1* LeerArchivo(std::string nombre) {

        setlocale(LC_ALL, "spanish");
        std::fstream archivo;
        int totalLines = 0;
        archivo.open(nombre, std::ios_base::in);
        std::string linea;
        char delimitador = '-';
        char delimitadort = ',';
        static Nodes1 CartasMundial[570];
        string tipolinea = "Tipos";
        std::string lineaT = "";
        string code = "";
        string seleccion = "";
        while (archivo.good())
        {
            getline(archivo, linea);
            std::stringstream X(linea);
            Nodes1* lineas = new Nodes1;
            int countT = 0;

            if (tipolinea == "Tipos") {
                while (getline(X, lineaT, delimitadort)) {
                    if (countT == 0) {
                        countT++;
                        seleccion = lineaT;
                    }
                    else {
                        code = lineaT;
                    }
                }
                tipolinea = "";
            }
            else
            {
                //Linea de cartas
                string linea2;
                while (getline(X, lineaT, delimitadort)) {
                    std::stringstream Y(lineaT);
                    int contador = 0;
                    while (getline(Y, linea2, delimitador)) {
                        if (contador == 0) {
                            lineas->data.Codigo = code + linea2;
                            contador++;
                        }
                        else {
                            lineas->data.Nombre = linea2;
                            lineas->data.seleccion = seleccion;
                            AgregaraLista(lineas);
                        }

                    }
                }
                tipolinea = "Tipos";
            }

        }
        archivo.close();
        return CartasMundial;
    }
};
