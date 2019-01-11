#!/bin/bash

MESSAGES_DIR=/home/bmendonca/workspace/eclipse_workspace/DroneInterfaceBoard/pb-messages

protoc -I=$MESSAGES_DIR/ --cpp_out=./messages $MESSAGES_DIR/*.proto
