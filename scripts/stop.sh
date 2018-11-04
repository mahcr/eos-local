#!/bin/bash
echo "Stopping docker containers"
docker-compose exec eosiodev bash /opt/application/stop.sh
docker-compose down
