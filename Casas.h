//Header file de Casas
#include<iostream>

class Casa{
    public:
        //Constructores
        Casa();
        Casa(std::string, std::string, int, int, int, int, std::string, int, int, std::string);

        //Setters
        void setUrl(std::string);
        void setTitulo(std::string);
        void setPrecio(int);
        void setHabitaciones(int);
        void setEstacionamiento(int);
        void setNbathroom(int);
        void setColor(std::string);
        void setMeters(int);
        void setAntiguedad(int);
        void setUbicacion(std::string);
        
        //Getters
        std::string getUrl();
        std::string getTitulo();
        int getPrecio();
        int getHabitaciones();
        int getEstacionamiento();
        int getNbathroom();
        std::string getColor();
        int getMeters();
        int getAntiguedad();
        std::string getubicacion();

        //Metodos propios
        void mostrarDatos(); //Muestra la informacion de la casa
        void marcarFavorito(); 
        void Vr360(); //Funcion de casa en realidad virtual
        void contactarDueno(); //Ponerse en contacto con el dueño
        void solicitarVisita(); //Solicitar visita guiada
        void mostrarMapa(); //Mostrar la ubicacion de la casa en un mapa




    protected:
        std::string url_imagen;
        std::string titulo;
        int precio;
        int numhabitaciones;
        int cajon_estacionamiento;
        int num_bathroom;
        std::string color;
        int m2;
        int antiguedad;
        std::string ubicacion;

};

class Boton: public Casa{ //Se crean los botones que contienen la informacion de las casas
    public:
        Boton();
        Boton(std::string, std::string);
        void click();

    protected:
        std::string nombre;
        Casa info;
};

class Pagina{
    public:
    //Constructores
    Pagina();
    Pagina(Boton);

    //Metodos
    void mostrarPagina();
    Pagina cambiarPagina(); //Cambia el numero de pagina y regresa los datos de la pagina siguiente para que se pueda mostrar



    private:
        Boton casas[10]; //Se muestran 10 casas por cada pagina del sitio web
};