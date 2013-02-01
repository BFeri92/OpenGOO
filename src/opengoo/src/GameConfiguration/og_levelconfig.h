#ifndef OG_LEVELCONFIG_H
#define OG_LEVELCONFIG_H

#include "og_xmlconfig.h"
#include "wog_level.h"

class OGLevelConfig : public OGXmlConfig
{
public:
    OGLevelConfig(const QString & filename);

    WOGLevel* Parser();

private:
    WOGLevelExit* CreateLevelExit(const QDomElement & element);
    WOGCamera* CreateCamera(const QDomElement & element);
    WOGPoi* CreatePoi(const QDomElement & element);
    WOGBallInstance* CreateBallInstance(const QDomElement & element);
    void CreatePipe(WOGPipe* pipe, const QDomElement & element);
    WOGStrand* CreateStrand(const QDomElement & element);
    void CreateVertex(QList<QPointF>* vertex, const QDomElement &element);
};

#endif // OG_LEVELCONFIG_H
