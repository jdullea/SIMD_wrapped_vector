#!/bin/bash

cd timers

for i in {2..12}
do
	./timer_$i
done

cd ..
