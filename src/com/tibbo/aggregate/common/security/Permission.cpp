#include "security/Permission.h"

static const char Permission::PERMISSION_SEPARATOR= ',';

Permission::Permission(const std::string& data, boost::shared_ptr<PermissionChecker> checker)
{

    List<String> spd = StringUtils.split(data, Permission.PERMISSION_FIELDS_SEPARATOR);

    switch (spd.size())
    {
        case 1:
            setLevel(spd.get(0));
        break;

        case 2:
            setContext(spd.get(0));
            setLevel(spd.get(1));
        break;

        default:
        throw new IllegalArgumentException("Invalid permission: '" + data + "'");
    }

    if (checker != null)
    {
        if (!checker.isValid(getLevel()))
        {
            throw new IllegalArgumentException("Invalid permission type: '" + level + "'");
        }
    }
}

Permission::Permission(const std::string& context, const std::string& level)
{
    setContext(context);
    setLevel(level);
}

std::string Permission::getContext()
{
    return this->context;
}

std::string Permission::getLevel()
{
    return level;
}

std::string Permission::encode()
{
    std::string enc;

    lock.readLock().lock();

    if (!context.empty()) {
        enc.append(context);
        enc.append(Permission.PERMISSION_FIELDS_SEPARATOR);
    }

    enc.append(level);

    lock.readLock().unlock();

    return enc;
}


Permission* Permission::clone()
{
//    try
//    {
        return new Permission(this);
//    }
//    catch (CloneNotSupportedException ex)
//    {
//        throw new IllegalStateException(ex.getMessage(), ex);
//    }
}

/*
int Permission::hashCode()
{
    final int prime = 31;
    int result = 1;
    result = (prime * result) + ((context == null) ? 0 : context.hashCode());
    result = (prime * result) + ((level == null) ? 0 : level.hashCode());
    return result;
}
*/

bool Permission::equals(Permission* obj)
{
    if (this == obj) {
        return true;
    }

    if (obj == NULL) {
        return false;
    }

    Permission* other = dynamic_cast<Permission*>(obj);
    if (other != 0) {
        return false;
    }

    if (context != other->context) {
        return false;
    }

    if (level != other->level) {
        return false;
    }

    return true;
}

std::string Permission::toString()
{
    return encode();
}

void Permission::setContext(const std::string& entity)
{
    lock.writeLock().lock();

    try
    {
        this->context = entity;
    }
    catch(...)
    {
        lock.writeLock().unlock();
    }
}

void Permission::setLevel(const std::string& level)
{
    lock.writeLock().lock();

    try
    {
        this->level = level;
    }
    catch(...)
    {
        lock.writeLock().unlock();
    }
}
