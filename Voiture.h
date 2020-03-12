//
// Created by e1701567 on 12/03/2020.
//

#ifndef PROJET_VOITURE_H
#define PROJET_VOITURE_H


class Voiture {
public :
    Voiture();

    void setDirection(int d);
    int direction() const;
    int id() const ;
    
private:
    int d_direction;
    int d_id;
};


#endif //PROJET_VOITURE_H
