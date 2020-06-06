#include "DatiPezzo.cpp"

class Scacchiera{
    public:
        Scacchiera(); //Costruttore
        void getInizio(); //Genera la disposizione iniziale della scacchiera
    private:
        int campo[8][8];    /*Matrice che indica i pezzi sulla scacchiera.

                            Per i bianchi sono indicati con
                            1=pedoni
                            2=torri
                            3=cavalli
                            4=alfieri
                            5=regina
                            6=re

                            Per i neri sono
                            7=pedoni
                            8=torri
                            9=cavalli
                            10=alfieri
                            11=regina
                            12=re*/
    /*    int tipo[32];       //Dati riguardanti le coordinate e il tipo per ogni pezzo
        int riga[32];       //Per il tipo sono usati gli stessi numeri della scacchiera
        int col[32];*/
        DatiPezzo pezzi[32];
};