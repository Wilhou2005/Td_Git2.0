#include <stdio.h>
#include <string.h>

int main() {
    char motSecret[] = "Loup"; 
    char motTrouve[50];
    char lettre;
    int erreurs = 0;
    int i, longueur, gagne = 0;

    char *pendu[] = {
        "\n\n\n\n\n\n\n-------\n",
        "\n |\n |\n |\n |\n |\n |\n-------\n",
        " -------\n |\n |\n |\n |\n |\n-------\n",
        " -------\n |     O\n |\n |\n |\n |\n-------\n",
        " -------\n |     O\n |     |\n |\n |\n |\n-------\n",
        " -------\n |     O\n |    /|\\\n |\n |\n |\n-------\n",
        " -------\n |     O\n |    /|\\\n |    / \\\n |\n |\n-------\n"
    };
