#! /bin/bash
while true
do 
  rm -f /temp/time_fifo
  mkfifo /temp/time_fifo
  sleep 1
  date 1> /temp/time_fofo
  done
