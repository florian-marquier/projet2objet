#ifndef TYPE_INTERVENTION_H
#define TYPE_INTERVENTION_H

#include <string>

class Intervention {
protected:
    std::string m_date;
    std::string m_lieu;
    std::string m_statut;

public:
    Intervention(const std::string& date, const std::string& lieu, const std::string& statut);

    std::string get_date() const;
    std::string get_lieu() const;
    std::string get_statut() const;

    virtual void effectuerIntervention() = 0;
};

#endif
