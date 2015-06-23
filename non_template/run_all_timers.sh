#!/bin/bash

cd timers

for i in {2..256}
do
	./timer_$i
done

cd ..
