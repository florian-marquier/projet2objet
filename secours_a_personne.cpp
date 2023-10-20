#include "secours_a_personne.h"

SecoursAPersonne::SecoursAPersonne(const std::string& date, const std::string& lieu, const std::string& statut)
    : Intervention(date, lieu, statut) {}

void SecoursAPersonne::effectuerIntervention() {
    // Implémentez ici la logique spécifique pour un secours à personne
    // Vous pouvez utiliser les données m_date, m_lieu, et m_statut
}
