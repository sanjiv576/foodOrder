//
// Created by user on 3/19/22.
//

#ifndef FOODORDERING_ENCAPSULATING_H
#define FOODORDERING_ENCAPSULATING_H

#endif //FOODORDERING_ENCAPSULATING_H
using namespace std;

class EncapsulationDone{
    // hiding the data
private:
    string name, address, contactNum, username, password;

    // creating parameterized constructor
public:
    EncapsulationDone(string name, string address, string contactNum, string username, string password){
    this->name = name;
    this->address = address;
    this->contactNum = contactNum;
    this->username = username;
    this->password = password;
}
public:
    EncapsulationDone(){

    }

// creating getter and setter methods
public:
    void setName(string name){
        this->name = name;
    }

public:
    string getName(){
        return name;
    }

public:
    void setAddress(string address){
        this->address = address;
    }

public:
    string getAddress(){
        return address;
    }


public:
    void setContactNum(string contactNum){
        this->contactNum = contactNum;
    }

public:
    string getContactNum(){
        return contactNum;
    }


public:
    void setUsername(string username){
        this->username = username;
    }

public:
    string getUsername(){
        return username;
    };

public:
    void setPassword(string password){
        this->password = password;
    }

public:
    string getPassword(){
        return password;
    };
};
