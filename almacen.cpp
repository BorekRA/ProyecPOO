//
// Created by Mate on 31/10/2019.
//

#include "almacen.h"
#include "slots.h"
#include "tipos.h"
#include "robot.h"
#include <SFML/Graphics/RenderWindow.hpp>}
using namespace std;

void Calmacen::draw_rectangle(posicion a, posicion b, longitud x, longitud y) {
    sf::RectangleShape rect;
    rect.setSize(sf::Vector2f(x,y));
    rect.setPosition(a,b);
    rect.setFillColor(sf::Color::Black);
    rect.setOutlineThickness(2);
    rect.setOutlineColor(sf::Color::White);
    canvas->draw(rect);
}

Calmacen::Calmacen(longitud x, longitud y, valor fl, valor cl, sf::RenderWindow *cnv) {
    altura=x;
    ancho=y;
    col=cl;
    fil=fl;
    canvas=cnv;
    slots.resize(fl);
    auto wc=altura/fil;
    auto hc=ancho/col;
    for (auto& row:slots){
      for (int i=0;i<col;i++){
        row.emplace_back(hc,wc);
      }
    }
}

void Calmacen::draw() {
  for (int i=0; i<fil;i++){
    for (int j=0;j<col;j++){
      draw_rectangle(slots[i][j].get_ejeY()*j;slots[i][j].get_ejeX()*i;slots[i][j].get_ejeY();slots[i][j].get_ejeX());
    }
  }
}
