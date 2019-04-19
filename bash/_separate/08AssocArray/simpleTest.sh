#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
main(){
    printf "Start script\n"
    declare -A teachersBySubjISC
    teachersBySubjISC=([DBMS]="Khudyashev" ["OPO IB"]="Khudyashev" [MBKS]="Kolegov" [Cryptografy]="Agibalov")
    local querySubj=""
    read -p "Enter Subject on ISC:" querySubj
    [ -n "${teachersBySubjISC["${querySubj}"]}" ] && printf "You enter subj %s Lector for this subj: %s\n" "${querySubj}" "${teachersBySubjISC[${querySubj}]}"
    [ -z "${teachersBySubjISC["${querySubj}"]}" ] && printf "There is no such subject on ISC: %s\n" "${querySubj}"
    printf "End script\n"
}

main
