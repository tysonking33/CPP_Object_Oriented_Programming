#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <iostream>
#include <stack>
 
class USBConnection{
private:
    USBConnection();
    int id;
public:
    std::stack get_id(){
        return id;
    }

    static stack <int> ids;
    static USBConnection * CreateUsbConnection(int id){
        if (ids.size() != 0){
            int id = USBConnection::ids.top();
            USBConnection *connect = new USBConnection(id);
            USBConnection::ids.pop();
            return connect;
        }
        else{
            return nullptr;
        }
    }


    ~USBConnection(){
        ids.push(this->get_id());
    }
};

#endif