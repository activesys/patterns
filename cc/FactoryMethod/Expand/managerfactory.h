#ifndef __MANAGER_FACTORY_H__
#define __MANAGER_FACTORY_H__

#include "manager.h"

typedef enum {FILE_MANAGER, CONSOLE_MANAGER, NET_MANAGER} manager_type;

class ManagerFactory {
public:
    Manager* create(manager_type type) {
        switch (type) {
            case FILE_MANAGER:
                return new FileManager();
                break;

            case CONSOLE_MANAGER:
                return new ConsoleManager();
                break;

            case NET_MANAGER:
                return new NetManager();
                break;

            default:
                return NULL;
                break;
        }
    }
};

#endif // __MANAGER_FACTORY_H__

