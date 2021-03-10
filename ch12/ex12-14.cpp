#include <string>
#include <iostream>
#include <memory>

using std::string;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::endl;

struct connection
{
    string ip;
    int port;
    connection(string ipAddress, int portNum):ip(ipAddress), port(portNum){}
};

struct destination
{
    string ip;
    int port;
    destination(string ipAddress, int portNum):ip(ipAddress), port(portNum){}
};

connection connect(destination* pd)
{
    auto pc = make_shared<connection>(pd->ip, pd->port);
    cout << "creating connection " << pc.use_count() << endl;
    return *pc;
}

void disconnect(connection *pc)
{
    cout << "closing connection " << pc->ip << ":" << pc->port << endl;
}

int main()
{
    destination dest("127.0.0.1", 8080);
    {
        connection conn = connect(&dest);
        shared_ptr<connection> p(&conn, disconnect);
        cout << "connecting now " << p.use_count() << endl;
    }
}
