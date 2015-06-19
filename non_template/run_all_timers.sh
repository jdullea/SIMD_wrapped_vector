#!/bin/bash

cd timers

for i in {31..64}
do
	./timer_$i
done

cd ..
