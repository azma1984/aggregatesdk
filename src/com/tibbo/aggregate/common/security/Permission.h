#ifndef _Permission_H_
#define _Permission_H_


#include "list"

class Permission
{
public:
  static const char PERMISSION_SEPARATOR= ',';
private:
	std::list<Permission> permissions;
	std::mutex permissionsLock;

public:
   Permission(std::string *data, PermissionChecker* checker);
   Permission(std::string* context, std::string* type);
   Permission(std::string* data);
   std::string encode();
   std::string toString();
   int size();
   void add(Permission *permission);

   //todo
  // Iterator<Permission> *iterator();
	int hashCode();
	bool equals(void* obj);
};
#endif
