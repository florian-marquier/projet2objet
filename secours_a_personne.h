#ifndef SECOURS_A_PERSONNE_H
#define SECOURS_A_PERSONNE_H

#include "type_intervention.h"

class SecoursAPersonne : public Intervention {
public:
    SecoursAPersonne(const std::string& date, const std::string& lieu, const std::string& statut);

    void effectuerIntervention() override;
};

#endif
