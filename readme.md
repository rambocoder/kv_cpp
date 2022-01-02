# Key/Value server based on Drogon (C++)

[Requirements](https://drogon.docsforge.com/master/installation/)

```mkdir build
cd build
cmake ..
make
echo "HTTP_PORT=9090" > .env
./kv_drogon