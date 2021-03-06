#ifndef LECTEURRFIDDATASERVICEIMPL_H
#define LECTEURRFIDDATASERVICEIMPL_H
#include "physique/lecteurrfiddataservice.h"
#include <QSqlQuery>
#include <QVariant>
#include <QSqlError>

namespace Physique {
class LecteurRFIDDataServiceImpl : public LecteurRFIDDataService
{
public:
    LecteurRFIDDataServiceImpl();
    virtual LecteurRFID add(LecteurRFID lecteur);
    virtual bool remove(LecteurRFID lecteur);
    virtual bool update(LecteurRFID lecteur);
    virtual QList<LecteurRFID> getAll(int debut, int parPage);
    virtual int getCount();
    virtual LecteurRFID getById(long id);
    virtual LecteurRFID getByIp(QString ip);
    virtual QList<QString> getListIp(int debut, int parPage);
    virtual int getCountListIp();
    virtual QList<LecteurRFID> getByModele(QString modele, int debut, int parPage);
    virtual int getCountByModele(QString modele);
    virtual QList<QString> getListModele(int debut, int parPage);
    virtual int getCountListModele();
    virtual QList<LecteurRFID> getByEtatOn(bool etatOn, int debut, int parPage);
    virtual int getCountByEtatOn(bool etatOn);
private:
    QSqlQuery query;
};
}

#endif // LECTEURRFIDDATASERVICEIMPL_H
