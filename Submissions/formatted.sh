#!/bin/bash

INPUT=rows.csv
OLDIFS=$IFS
IFS=','
[ ! -f $INPUT ] && { echo "$INPUT file not found";exit 99; }
while read ID Date DateType Age Sex Race ResidenceCity ResidenceCounty ResidenceState DeathCity
DeathCounty Location LocationifOther DescriptionofInjury InjuryPlace InjuryCity InjuryCounty
InjuryState COD OtherSignican Heroin Cocaine Fentanyl FentanylAnalogue Oxycodone Oxymor-
phone Ethanol Hydrocodone Benzodiazepine Methadone Amphet Tramad Morphine NotHeroin
Hydromorphone Other OpiateNOS AnyOpioid MannerofDeath DeathCityGeo ResidenceCityGeo
InjuryCityGeo
do
 echo $ID
 echo $Date
 echo $DateType
 echo $Age
 echo $Sex
 echo $Race
 echo $ResidenceCity
 echo $ResidenceCounty
 echo $ResidenceState
 echo $DeathCity
 echo $DeathCounty
 echo $Location
 echo $LocationifOther
 echo $DescriptionofInjury
 echo $InjuryPlace
 echo $InjuryCity
 echo $InjuryCounty
 echo $InjuryState
 echo $COD
 echo $OtherSignican
 echo $Heroin
 echo $Cocaine
 echo $Fentanyl
 echo $FentanylAnalogue
 echo $Oxycodone
 echo $Oxymorphone
 echo $Ethanol
 echo $Hydrocodone
 echo $Benzodiazepine
 echo $Methadone
 echo $Amphet
 echo $Tramad
 echo $Morphine
 echo $NotHeroin
 echo $Hydromorphone
 echo $Other
 echo $OpiateNOS
 echo $AnyOpioid
 echo $MannerofDeath
 echo $DeathCityGeo
 echo $ResidenceCityGeo
 echo $InjuryCityGeo

done < $INPUT
IFS=$OLDIFS
