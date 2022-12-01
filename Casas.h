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

class Pagina{
    public:




    private:
        Casa Casa1;
};