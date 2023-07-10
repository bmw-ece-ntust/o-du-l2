#!/bin/bash

ODU_PATH=/home/jojo/slice_enable_scheduler

sudo ifconfig lo:ODU "192.168.130.81"
sudo ifconfig lo:CU_STUB "192.168.130.82"

# Run odu
cd $ODU_PATH/bin
cd cu_stub

# Normal Mode
sudo ./cu_stub