/**
 * \file prim.h
 * \brief Algorithme de Prim (header)
 * \author Harenome RAZANAJATO
 */
#ifndef __PRIM_H
#define __PRIM_H

#include <stdlib.h>
#include <stdio.h>

#include "base.h"
#include "sommet.h"
#include "graphe.h"
#include "coloration.h"
#include "filetriee.h"
#include "arete.h"

/**
 * \brief Ajouter les arêtes incidentes à un sommet.
 * \relatesalso FileTriee
 * \param ft FileTriee.
 * \param g Graphe.
 * \param cg Marquage des sommets.
 * \param s  Sommet.
 * \return FileTriee.
 */
FileTriee pAjouterAretesIncidentes(FileTriee ft, const Graphe g, const CouleursGraphe cg, const Sommet s);

/**
 * \brief Calcul de l'arbre couvrant minimum d'un graphe connexe en partant d'un sommet.
 * \relatesalso Graphe
 * \param g Graphe.
 * \param s Sommet.
 * \return Arbre Couvrant Minimum
 */
Graphe pArbreCouvrantMinimum(const Graphe g, const Sommet s);

#endif /* __PRIM_H */