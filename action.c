#include <stdio.h>
#include <SDL.h>
#include <time.h>
#include "elements.h"
#include "main.h"

//score = 0;

void collision() {
    if (xmunition < xennemis + largeurennemis &&
        xmunition + epaisseurMunition > xennemis &&
        ymunition < yennemis + hauteurennemis &&
        ymunition + 10 > yennemis) {
        yennemis = 0;
        xmunition = xvaisseau + 60;
        tir = 0;
        //score += 1;
        //printf("%d", score);
    }
    if (xmunition < xennemis2 + largeurennemis &&
        xmunition + epaisseurMunition > xennemis2 &&
        ymunition < yennemis2 + hauteurennemis &&
        ymunition + 10 > yennemis2) {
        yennemis2 = 0;
        xmunition = xvaisseau + 60;
        tir = 0;
        //score += 1;
        //printf("%d", score);
    }
}

void collisionVaisseau() {
    if ((xvaisseau < xennemis + largeurennemis &&
        xvaisseau + 80 > xennemis &&
        yvaisseau < yennemis + hauteurennemis &&
        yvaisseau + 60 > yennemis) ||
        (xvaisseau < xennemis2 + largeurennemis &&
            xvaisseau + 80 > xennemis2 &&
            yvaisseau < yennemis2 + hauteurennemis &&
            yvaisseau + 60 > yennemis2)) {
        xvaisseau = 10;
        yvaisseau = 250;
    }
}