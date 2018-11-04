#!/usr/bin/env bash
echo "Starting eosiodev service ..."

/opt/eosio/bin/nodeos --config-dir $CONFIG_DIR --data-dir $DATA_DIR -e && echo $! > $DATADIR/nodeos.pid

# if [ "$(ls -A $DATA_DIR)" ]; then
#     /opt/eosio/bin/nodeos --config-dir $CONFIG_DIR --data-dir $DATA_DIR -e --hard-replay
# else
#     /opt/eosio/bin/nodeos --config-dir $CONFIG_DIR --data-dir $DATA_DIR -e #--delete-all-blocks
# fi
