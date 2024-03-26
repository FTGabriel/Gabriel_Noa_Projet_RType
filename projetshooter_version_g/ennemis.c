//#include <stdio.h>
//
//struct Ennemi {
//    int direction[2];
//    int hitbox[2];
//    int velocity;
//    int type;
//    int rect[2];
//    int health;
//};
//
//int main() {
//    struct Ennemi ennemis[] = {
//        {{-1, 0}, {10, 10}, 4, 6, {34, 33}, 1},
//        {{-1, 0}, {10, 10}, 4, 14, {34, 33}, 2},
//        {{-1, 0}, {10, 10}, 10, 16, {34, 33}, 3},
//        {{-1, 0}, {10, 10}, 4, 6, {34, 33}, 1} };
//
//printf("Direction de l'ennemi 1: [%d, %d]\n", ennemis[0].direction[0], ennemis[0].direction[1]);
//printf("Vélocité de l'ennemi 2: %d\n", ennemis[1].velocity);
//printf("Type de l'ennemi 3: %d\n", ennemis[2].type);
//printf("Santé de l'ennemi 4: %d\n", ennemis[3].health);
//
//return 0;
//}