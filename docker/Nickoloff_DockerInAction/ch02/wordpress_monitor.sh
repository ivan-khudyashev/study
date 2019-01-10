#!/bin/bash
# This script start bunch of tight containters with Web Framework and DB
echo "Initialize DB container"
SQL_CID=$(docker create -e MYSQL_ROOT_PASSWORD=ch2demo mysql:5)
docker start ${SQL_CID}
echo "DB have initialize"
echo "---"
echo "Initialize Mailer"
MAILER_CID=$(docker create dockerinaction/ch2_mailer)
docker start ${MAILER_CID}
echo "Mailer have initialize"
echo "---"
echo "Initialize Web Framework (WordPress)"
WP_CID=$(docker create --link ${SQL_CID}:mysql -p 80 -v /run/lock/apache2/ -v /run/apache2/ wordpress:4)
# with --read-only not work, though - must
#WP_CID=$(docker create --link ${SQL_CID}:mysql -p 80 -v /run/lock/apache2/ -v /run/apache2/ --read-only wordpress:4)
docker start ${WP_CID}
echo "WordPress have initialize"
echo "---"
AGENT_CID=$(docker create --link ${WP_CID}:insideweb \
        --link ${MAILER_CID}:insidemailer dockerinaction/ch2_agent)
echo "Await when containers are created"
sleep 5s
echo "Start agent ..."
docker start ${AGENT_CID}
echo "Successfully start!"
