#!/bin/bash
# This script start bunch of tight containters
echo "Create containers"
MAILER_CID=$(docker run -d dockerinaction/ch2_mailer)
WEB_CID=$(docker create nginx)
AGENT_CID=$(docker create --link ${WEB_CID}:insideweb \
        --link ${MAILER_CID}:insidemailer dockerinaction/ch2_agent)
echo "Await when containers are created"
sleep 5s
echo "Start containers ..."
docker start ${WEB_CID}
docker start ${AGENT_CID}
echo "Successfully start!"
