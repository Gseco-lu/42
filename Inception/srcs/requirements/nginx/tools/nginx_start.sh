#!/bin/bash

if [ ! -f /etc/ssl/certs/nginx.crt ]; then
openssl req -x509 -nodes -days 365 -newkey rsa:4096 -keyout /etc/ssl/private/nginx.key -out /etc/ssl/certs/nginx.crt -subj "/C=PT/L=Lisboa/O=42/gseco-lu/CN=gseco-lu.42.fr";
echo "Nginx: ready!";
fi

exec "$@"
