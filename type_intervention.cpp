#include "type_intervention.h"
#include <iostream> // Inclure la bibliothèque iostream
#include <string>   // Inclure la bibliothèque string

Intervention::Intervention(const std::string& date, const std::string& lieu, const std::string& statut) : m_date(date), m_lieu(lieu), m_statut(statut) {}

std::string Intervention::get_date() const {
    return m_date;
}

std::string Intervention::get_lieu() const {
    return m_lieu;
}

std::string Intervention::get_statut() const {
    return m_statut;
}
