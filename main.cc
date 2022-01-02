#include <drogon/drogon.h>
#include "dotenv.h"
using namespace dotenv;
int main()
{
    env.load_dotenv();
    int port = stoi(env["HTTP_PORT"]);

    //Set HTTP listener address and port
    drogon::app().addListener("0.0.0.0", port);
    //Load config file
    //drogon::app().loadConfigFile("../config.json");
    //Run HTTP framework,the method will block in the internal event loop
    drogon::app().run();
    return 0;
}
