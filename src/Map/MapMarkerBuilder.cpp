#include "MapMarkerBuilder.h"
#include "MapMarkerBuilder_P.h"

OsmAnd::MapMarkerBuilder::MapMarkerBuilder()
    : _p(new MapMarkerBuilder_P(this))
{
}

OsmAnd::MapMarkerBuilder::~MapMarkerBuilder()
{
}

bool OsmAnd::MapMarkerBuilder::isHidden() const
{
    return _p->isHidden();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setIsHidden(const bool hidden)
{
    _p->setIsHidden(hidden);

    return *this;
}

int OsmAnd::MapMarkerBuilder::getBaseOrder() const
{
    return _p->getBaseOrder();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setBaseOrder(const int baseOrder)
{
    _p->setBaseOrder(baseOrder);

    return *this;
}

bool OsmAnd::MapMarkerBuilder::isAccuracyCircleSupported() const
{
    return _p->isAccuracyCircleSupported();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setIsAccuracyCircleSupported(const bool supported)
{
    _p->setIsAccuracyCircleSupported(supported);

    return *this;
}

bool OsmAnd::MapMarkerBuilder::isAccuracyCircleVisible() const
{
    return _p->isAccuracyCircleVisible();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setIsAccuracyCircleVisible(const bool visible)
{
    _p->setIsAccuracyCircleVisible(visible);

    return *this;
}

double OsmAnd::MapMarkerBuilder::getAccuracyCircleRadius() const
{
    return _p->getAccuracyCircleRadius();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setAccuracyCircleRadius(const double radius)
{
    _p->setAccuracyCircleRadius(radius);

    return *this;
}

OsmAnd::FColorRGB OsmAnd::MapMarkerBuilder::getAccuracyCircleBaseColor() const
{
    return _p->getAccuracyCircleBaseColor();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setAccuracyCircleBaseColor(const FColorRGB baseColor)
{
    _p->setAccuracyCircleBaseColor(baseColor);

    return *this;
}

OsmAnd::PointI OsmAnd::MapMarkerBuilder::getPosition() const
{
    return _p->getPosition();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setPosition(const PointI position)
{
    _p->setPosition(position);

    return *this;
}

std::shared_ptr<const SkBitmap> OsmAnd::MapMarkerBuilder::getPinIcon() const
{
    return _p->getPinIcon();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setPinIcon(const std::shared_ptr<const SkBitmap>& bitmap)
{
    _p->setPinIcon(bitmap);

    return *this;
}

OsmAnd::ColorARGB OsmAnd::MapMarkerBuilder::getPinIconModulationColor() const
{
    return _p->getPinIconModulationColor();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::setPinIconModulationColor(const ColorARGB colorValue)
{
    _p->setPinIconModulationColor(colorValue);

    return *this;
}

std::shared_ptr<OsmAnd::MapMarker> OsmAnd::MapMarkerBuilder::buildAndAddToCollection(const std::shared_ptr<MapMarkersCollection>& collection)
{
    return _p->buildAndAddToCollection(collection);
}

QHash< OsmAnd::MapMarker::OnSurfaceIconKey, std::shared_ptr<const SkBitmap> > OsmAnd::MapMarkerBuilder::getOnMapSurfaceIcons() const
{
    return _p->getOnMapSurfaceIcons();
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::addOnMapSurfaceIcon(const MapMarker::OnSurfaceIconKey key, const std::shared_ptr<const SkBitmap>& bitmap)
{
    _p->addOnMapSurfaceIcon(key, bitmap);

    return *this;
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::removeOnMapSurfaceIcon(const MapMarker::OnSurfaceIconKey key)
{
    _p->removeOnMapSurfaceIcon(key);

    return *this;
}

OsmAnd::MapMarkerBuilder& OsmAnd::MapMarkerBuilder::clearOnMapSurfaceIcons()
{
    _p->clearOnMapSurfaceIcons();

    return *this;
}
