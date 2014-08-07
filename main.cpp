#include <iostream>
#include <vector>
#include "Personaje.h"
#include "Guerrero.h"
#include "Tanque.h"
#include "Mago.h"
#include "Arquero.h"
using namespace std;

int main()
{
    vector<Personaje*>personajes;

    personajes.push_back(new Arquero(10,60));

    while(true)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
        for(int i=0; i<personajes.size();i++)
        {
            cout<<personajes[i]->tipo<<endl;
            cout<<"atk: "<<personajes[i]->ataque<<endl;
            cout<<"hp: "<<personajes[i]->vida<<endl;
            personajes[i]->especial();
        }

        cout<<"Agregar: "<<endl;
        int opcion;
        cin>>opcion;
        if(opcion==1)
            personajes.push_back(new Mago(10,40));
        if(opcion==2)
            personajes.push_back(new Guerrero(10,40));
        if(opcion==3)
            personajes.push_back(new Tanque(10,40));
    }

    return 0;
}
