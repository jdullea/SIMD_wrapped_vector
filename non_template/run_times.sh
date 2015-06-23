#!/bin/bash
#$ -cwd
#$ -j y
#$ -S /bin/bash
#$ -l h_rt=24:00:00
#$ -pe mpithr16 16
module purge
module load gcc
cat $PE_HOSTFILE | awk '{print $1}' > /tmp/hostfile.$JOB_ID


./run_all_timers.sh >> out256_all.txt

grep " vector:" out.txt | mail -s "timing program complete: here are the vector times" jdullea@umass.edu
grep " nonvector:" out.txt | mail -s "timing program complete: here are the non-vector times" jdullea@umass.edu 



rm /tmp/hostfile.$JOB_ID; exit

