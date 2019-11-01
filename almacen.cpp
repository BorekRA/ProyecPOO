
//
// Created by Mate on 31/10/2019.
//

#include "almacen.h"
#include "slots.h"
#include "tipos.h"
#include "robot.h"
#include <SFML/Graphics/RenderWindow.hpp>

void almacen::draw_rectangle(posicion x, posicion y, longitud h, longitud w) {
    sf::RectangleShape rect;
    rect.setSize(sf::Vector2f(h,w));
    rect.setPosition(x,y);
    rect.setFillColor(sf::Color::Black);
    rect.setOutlineThickness(2);
    rect.setOutlineColor(sf::Color::White);
    canvas->draw(rect);
}

almacen::almacen(longitud h, longitud w, valor fl, valor cl, sf::RenderWindow *cnv) {
    altura=h;
    ancho=w;
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

void almacen::draw() {
  for (int i=0; i<fil;i++){
    for (int j=0;j<col;j++){
      draw_rectangle(slots[i][j].get_altura()*j;slots[i][j].get_ancho()*i;slots[i][j].get_altura();slots[i][j].get_ancho();)
    }
  }
}
