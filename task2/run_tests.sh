#!/bin/bash

for i in {1..10}
do
  echo "test $i"
  ./cmake-build-debug/task2 Tests/test"$i".txt Results/test"$i".txt
done