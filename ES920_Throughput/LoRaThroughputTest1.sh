#!/bin/sh

cnt=100
cnt=$2
case $1 in
 1) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=12 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 2) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=10 -qsf=12 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 3) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=0 -qsf=12 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 4) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=7 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 5) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=8 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 6) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=9 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 7) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=10 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 8) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=11 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 9) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=12 -qbw=125k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 10) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=11 -qbw=62.5k -qc=8 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 11) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=11 -qbw=250k -qc=4 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 12) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=11 -qbw=500k -qc=3 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 13) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=12 -qbw=125k -qc=1 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
 14) /home/conprosys/niimi/ES920_Throughput/ES920ThroughputTest -qpwr=13 -qsf=12 -qbw=125k -qc=15 -qcnt=$cnt -d0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678
 ;;
esac
