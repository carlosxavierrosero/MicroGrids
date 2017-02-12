#include "__cf_nodes4.h"
#include <math.h>
#include "nodes4_acc.h"
#include "nodes4_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T table
[ ] , uint32_T maxIndex ) { real_T frac ; uint32_T iRght ; uint32_T iLeft ;
uint32_T bpIdx ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac = ( u0 - bp0 [
0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [ maxIndex ] ) {
bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght -
iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft =
bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) /
( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex - 1U ;
frac = ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] - bp0 [ maxIndex -
1U ] ) ; } return ( table [ iLeft + 1U ] - table [ iLeft ] ) * frac + table [
iLeft ] ; } static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T
ikiuwdf21i ; int_T iy ; int_T ci ; real_T eeslnumswv [ 10 ] ; static const
int8_T ir [ 11 ] = { 0 , 0 , 0 , 2 , 4 , 6 , 8 , 11 , 14 , 17 , 20 } ; static
const int8_T ir_p [ 11 ] = { 0 , 1 , 2 , 2 , 2 , 3 , 4 , 4 , 4 , 4 , 4 } ;
static const int8_T jc [ 20 ] = { 2 , 12 , 3 , 13 , 4 , 6 , 5 , 7 , 0 , 4 , 8
, 1 , 5 , 9 , 0 , 2 , 10 , 1 , 3 , 11 } ; static const int8_T jc_p [ 4 ] = {
4 , 5 , 8 , 9 } ; n3qi1whofz * _rtB ; loikxjbxjg * _rtP ; f1xhd02yjc * _rtX ;
ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtX
= ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ; _rtP = ( ( loikxjbxjg * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes4/g1/measures/Data Store Read1" , NULL ) ; _rtB -> l2n1kh1nex [ 0 ] =
_rtDW -> h1t1phh10c [ 0 ] ; _rtB -> l2n1kh1nex [ 1 ] = _rtDW -> h1t1phh10c [
1 ] ; _rtB -> l2n1kh1nex [ 2 ] = _rtDW -> h1t1phh10c [ 2 ] ; _rtB ->
l2n1kh1nex [ 3 ] = _rtDW -> h1t1phh10c [ 3 ] ; if ( ssIsSampleHit ( S , 1 , 0
) ) { ssCallAccelRunBlock ( S , 17 , 1 , SS_CALL_MDL_OUTPUTS ) ; } if (
ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 1 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtDW -> h1t1phh10c [ 0 ] = _rtB -> hnwyjibwqn [ 0 ]
; _rtDW -> h1t1phh10c [ 1 ] = _rtB -> hnwyjibwqn [ 1 ] ; _rtDW -> h1t1phh10c
[ 2 ] = _rtB -> hnwyjibwqn [ 2 ] ; _rtDW -> h1t1phh10c [ 3 ] = _rtB ->
hnwyjibwqn [ 3 ] ; ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes4/g1/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/g1/measures/Data Store Read2" , NULL ) ; _rtB -> l0bkvsovrk [ 0 ] =
_rtDW -> foiy3odoz1 [ 0 ] ; _rtB -> l0bkvsovrk [ 1 ] = _rtDW -> foiy3odoz1 [
1 ] ; _rtB -> l0bkvsovrk [ 2 ] = _rtDW -> foiy3odoz1 [ 2 ] ; _rtB ->
l0bkvsovrk [ 3 ] = _rtDW -> foiy3odoz1 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 2 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
foiy3odoz1 [ 0 ] = _rtB -> b5dgsab0jz [ 0 ] ; _rtDW -> foiy3odoz1 [ 1 ] =
_rtB -> b5dgsab0jz [ 1 ] ; _rtDW -> foiy3odoz1 [ 2 ] = _rtB -> b5dgsab0jz [ 2
] ; _rtDW -> foiy3odoz1 [ 3 ] = _rtB -> b5dgsab0jz [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/g1/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/g1/measures/Data Store Read3" , NULL ) ; _rtB -> cegahci2iz [ 0 ] =
_rtDW -> pizmexwruz [ 0 ] ; _rtB -> cegahci2iz [ 1 ] = _rtDW -> pizmexwruz [
1 ] ; _rtB -> cegahci2iz [ 2 ] = _rtDW -> pizmexwruz [ 2 ] ; _rtB ->
cegahci2iz [ 3 ] = _rtDW -> pizmexwruz [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 3 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
pizmexwruz [ 0 ] = _rtB -> d22x0dugpi [ 0 ] ; _rtDW -> pizmexwruz [ 1 ] =
_rtB -> d22x0dugpi [ 1 ] ; _rtDW -> pizmexwruz [ 2 ] = _rtB -> d22x0dugpi [ 2
] ; _rtDW -> pizmexwruz [ 3 ] = _rtB -> d22x0dugpi [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/g1/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/g1/measures/Data Store Read4" , NULL ) ; _rtB -> c351zcgrdm [ 0 ] =
_rtDW -> k5wmx351m0 [ 0 ] ; _rtB -> c351zcgrdm [ 1 ] = _rtDW -> k5wmx351m0 [
1 ] ; _rtB -> c351zcgrdm [ 2 ] = _rtDW -> k5wmx351m0 [ 2 ] ; _rtB ->
c351zcgrdm [ 3 ] = _rtDW -> k5wmx351m0 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 4 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
k5wmx351m0 [ 0 ] = _rtB -> jcdxzkh4wk [ 0 ] ; _rtDW -> k5wmx351m0 [ 1 ] =
_rtB -> jcdxzkh4wk [ 1 ] ; _rtDW -> k5wmx351m0 [ 2 ] = _rtB -> jcdxzkh4wk [ 2
] ; _rtDW -> k5wmx351m0 [ 3 ] = _rtB -> jcdxzkh4wk [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/g1/measures/Data Store Write4" , NULL ) ; } if ( ssIsSampleHit ( S ,
1 , 0 ) ) { _rtB -> d3mib3grsv = _rtP -> P_46 ; ssCallAccelRunBlock ( S , 17
, 14 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 17 , 15 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 17 , 16 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> ceyoblu3ix = _rtDW -> h31mfjlljs ; _rtB ->
dmy1xorw5l = _rtDW -> efdih4dveq ; } ikiuwdf21i = ssGetT ( S ) ; _rtB ->
cc2ezflt1t = ssGetTStart ( S ) ; ikiuwdf21i -= _rtB -> cc2ezflt1t ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> f24elbcmfs = _rtP -> P_91 ; }
ikiuwdf21i = muDoubleScalarRem ( ikiuwdf21i , _rtB -> f24elbcmfs ) ; _rtB ->
madk33ctxq = look1_binlxpw ( ikiuwdf21i , * ( real_T ( * ) [ 4 ] ) & _rtP ->
P_93 [ 0 ] , * ( real_T ( * ) [ 4 ] ) & _rtP -> P_92 [ 0 ] , 3U ) ;
ssCallAccelRunBlock ( S , 0 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> p1obiqmaoo
[ 0 ] = _rtB -> jmn1dupybl [ 4 ] ; _rtB -> p1obiqmaoo [ 1 ] = _rtB ->
jmn1dupybl [ 5 ] ; _rtB -> p1obiqmaoo [ 2 ] = _rtB -> cqklclvjhc [ 4 ] ; _rtB
-> p1obiqmaoo [ 3 ] = _rtB -> cqklclvjhc [ 5 ] ; _rtB -> p1obiqmaoo [ 4 ] =
_rtB -> gvsgzmdl2b [ 4 ] ; _rtB -> p1obiqmaoo [ 5 ] = _rtB -> gvsgzmdl2b [ 5
] ; _rtB -> p1obiqmaoo [ 6 ] = _rtB -> cu3o4u2ds1 [ 4 ] ; _rtB -> p1obiqmaoo
[ 7 ] = _rtB -> cu3o4u2ds1 [ 5 ] ; _rtB -> p1obiqmaoo [ 8 ] = _rtB ->
hahkwn1qkd ; _rtB -> p1obiqmaoo [ 9 ] = _rtB -> ifuuwgao1a ; for ( iy = 0 ;
iy < 10 ; iy ++ ) { eeslnumswv [ iy ] = 0.0 ; } for ( iy = 0 ; iy < 10 ; iy
++ ) { for ( ci = ir [ iy ] ; ci < ir [ iy + 1 ] ; ci ++ ) { eeslnumswv [ iy
] += _rtP -> P_96 [ ci ] * _rtX -> jqdufexgzv [ jc [ ci ] ] ; } } for ( iy =
0 ; iy < 10 ; iy ++ ) { for ( ci = ir_p [ iy ] ; ci < ir_p [ iy + 1 ] ; ci ++
) { eeslnumswv [ iy ] += _rtP -> P_97 [ ci ] * _rtB -> p1obiqmaoo [ jc_p [ ci
] ] ; } } _rtB -> bsmhfvved0 = _rtP -> P_99 * eeslnumswv [ 9 ] ; _rtB ->
ooc3xib012 = _rtP -> P_100 * eeslnumswv [ 8 ] ; ssReadFromDataStoreWithPath (
S , _rtDW -> gakv1pwvvm , "nodes4/g2/measures/Data Store Read1" , NULL ) ;
_rtB -> ksvkwuprwk [ 0 ] = _rtDW -> h1t1phh10c [ 0 ] ; _rtB -> ksvkwuprwk [ 1
] = _rtDW -> h1t1phh10c [ 1 ] ; _rtB -> ksvkwuprwk [ 2 ] = _rtDW ->
h1t1phh10c [ 2 ] ; _rtB -> ksvkwuprwk [ 3 ] = _rtDW -> h1t1phh10c [ 3 ] ; if
( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 5 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtDW -> h1t1phh10c [ 0 ] = _rtB -> o1w1hua0wi [ 0 ]
; _rtDW -> h1t1phh10c [ 1 ] = _rtB -> o1w1hua0wi [ 1 ] ; _rtDW -> h1t1phh10c
[ 2 ] = _rtB -> o1w1hua0wi [ 2 ] ; _rtDW -> h1t1phh10c [ 3 ] = _rtB ->
o1w1hua0wi [ 3 ] ; ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes4/g2/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/g2/measures/Data Store Read2" , NULL ) ; _rtB -> pq1kfpuohx [ 0 ] =
_rtDW -> foiy3odoz1 [ 0 ] ; _rtB -> pq1kfpuohx [ 1 ] = _rtDW -> foiy3odoz1 [
1 ] ; _rtB -> pq1kfpuohx [ 2 ] = _rtDW -> foiy3odoz1 [ 2 ] ; _rtB ->
pq1kfpuohx [ 3 ] = _rtDW -> foiy3odoz1 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 6 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
foiy3odoz1 [ 0 ] = _rtB -> atehpsr24u [ 0 ] ; _rtDW -> foiy3odoz1 [ 1 ] =
_rtB -> atehpsr24u [ 1 ] ; _rtDW -> foiy3odoz1 [ 2 ] = _rtB -> atehpsr24u [ 2
] ; _rtDW -> foiy3odoz1 [ 3 ] = _rtB -> atehpsr24u [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/g2/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/g2/measures/Data Store Read3" , NULL ) ; _rtB -> mby5rfym1g [ 0 ] =
_rtDW -> pizmexwruz [ 0 ] ; _rtB -> mby5rfym1g [ 1 ] = _rtDW -> pizmexwruz [
1 ] ; _rtB -> mby5rfym1g [ 2 ] = _rtDW -> pizmexwruz [ 2 ] ; _rtB ->
mby5rfym1g [ 3 ] = _rtDW -> pizmexwruz [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 7 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
pizmexwruz [ 0 ] = _rtB -> bs32ogpq5t [ 0 ] ; _rtDW -> pizmexwruz [ 1 ] =
_rtB -> bs32ogpq5t [ 1 ] ; _rtDW -> pizmexwruz [ 2 ] = _rtB -> bs32ogpq5t [ 2
] ; _rtDW -> pizmexwruz [ 3 ] = _rtB -> bs32ogpq5t [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/g2/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/g2/measures/Data Store Read4" , NULL ) ; _rtB -> mtxlvb5vtf [ 0 ] =
_rtDW -> k5wmx351m0 [ 0 ] ; _rtB -> mtxlvb5vtf [ 1 ] = _rtDW -> k5wmx351m0 [
1 ] ; _rtB -> mtxlvb5vtf [ 2 ] = _rtDW -> k5wmx351m0 [ 2 ] ; _rtB ->
mtxlvb5vtf [ 3 ] = _rtDW -> k5wmx351m0 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 8 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
k5wmx351m0 [ 0 ] = _rtB -> ginlqhskjb [ 0 ] ; _rtDW -> k5wmx351m0 [ 1 ] =
_rtB -> ginlqhskjb [ 1 ] ; _rtDW -> k5wmx351m0 [ 2 ] = _rtB -> ginlqhskjb [ 2
] ; _rtDW -> k5wmx351m0 [ 3 ] = _rtB -> ginlqhskjb [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/g2/measures/Data Store Write4" , NULL ) ; } if ( ssIsSampleHit ( S ,
1 , 0 ) ) { _rtB -> buxtalioib = _rtP -> P_101 ; } _rtB -> limqtmowuj = _rtP
-> P_102 * eeslnumswv [ 7 ] ; _rtB -> ky5wmtih11 = _rtP -> P_103 * eeslnumswv
[ 6 ] ; ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes4/g3/measures/Data Store Read1" , NULL ) ; _rtB -> d2teb1eovr [ 0 ] =
_rtDW -> h1t1phh10c [ 0 ] ; _rtB -> d2teb1eovr [ 1 ] = _rtDW -> h1t1phh10c [
1 ] ; _rtB -> d2teb1eovr [ 2 ] = _rtDW -> h1t1phh10c [ 2 ] ; _rtB ->
d2teb1eovr [ 3 ] = _rtDW -> h1t1phh10c [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 9 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
h1t1phh10c [ 0 ] = _rtB -> df3my4psmi [ 0 ] ; _rtDW -> h1t1phh10c [ 1 ] =
_rtB -> df3my4psmi [ 1 ] ; _rtDW -> h1t1phh10c [ 2 ] = _rtB -> df3my4psmi [ 2
] ; _rtDW -> h1t1phh10c [ 3 ] = _rtB -> df3my4psmi [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes4/g3/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/g3/measures/Data Store Read2" , NULL ) ; _rtB -> pdlo00frqr [ 0 ] =
_rtDW -> foiy3odoz1 [ 0 ] ; _rtB -> pdlo00frqr [ 1 ] = _rtDW -> foiy3odoz1 [
1 ] ; _rtB -> pdlo00frqr [ 2 ] = _rtDW -> foiy3odoz1 [ 2 ] ; _rtB ->
pdlo00frqr [ 3 ] = _rtDW -> foiy3odoz1 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 10 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
foiy3odoz1 [ 0 ] = _rtB -> bzgaahqvz3 [ 0 ] ; _rtDW -> foiy3odoz1 [ 1 ] =
_rtB -> bzgaahqvz3 [ 1 ] ; _rtDW -> foiy3odoz1 [ 2 ] = _rtB -> bzgaahqvz3 [ 2
] ; _rtDW -> foiy3odoz1 [ 3 ] = _rtB -> bzgaahqvz3 [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/g3/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/g3/measures/Data Store Read3" , NULL ) ; _rtB -> guyavfw5uf [ 0 ] =
_rtDW -> pizmexwruz [ 0 ] ; _rtB -> guyavfw5uf [ 1 ] = _rtDW -> pizmexwruz [
1 ] ; _rtB -> guyavfw5uf [ 2 ] = _rtDW -> pizmexwruz [ 2 ] ; _rtB ->
guyavfw5uf [ 3 ] = _rtDW -> pizmexwruz [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 11 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
pizmexwruz [ 0 ] = _rtB -> kdqjm1zhlt [ 0 ] ; _rtDW -> pizmexwruz [ 1 ] =
_rtB -> kdqjm1zhlt [ 1 ] ; _rtDW -> pizmexwruz [ 2 ] = _rtB -> kdqjm1zhlt [ 2
] ; _rtDW -> pizmexwruz [ 3 ] = _rtB -> kdqjm1zhlt [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/g3/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/g3/measures/Data Store Read4" , NULL ) ; _rtB -> bwdlazjni3 [ 0 ] =
_rtDW -> k5wmx351m0 [ 0 ] ; _rtB -> bwdlazjni3 [ 1 ] = _rtDW -> k5wmx351m0 [
1 ] ; _rtB -> bwdlazjni3 [ 2 ] = _rtDW -> k5wmx351m0 [ 2 ] ; _rtB ->
bwdlazjni3 [ 3 ] = _rtDW -> k5wmx351m0 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 12 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
k5wmx351m0 [ 0 ] = _rtB -> ffjzdpw3ut [ 0 ] ; _rtDW -> k5wmx351m0 [ 1 ] =
_rtB -> ffjzdpw3ut [ 1 ] ; _rtDW -> k5wmx351m0 [ 2 ] = _rtB -> ffjzdpw3ut [ 2
] ; _rtDW -> k5wmx351m0 [ 3 ] = _rtB -> ffjzdpw3ut [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/g3/measures/Data Store Write4" , NULL ) ; } if ( ssIsSampleHit ( S ,
1 , 0 ) ) { _rtB -> anpqwjmjbz = _rtP -> P_104 ; } _rtB -> aloa0ov1gb = _rtP
-> P_105 * eeslnumswv [ 5 ] ; _rtB -> afy4ndoegi = _rtP -> P_106 * eeslnumswv
[ 4 ] ; ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes4/g4/measures/Data Store Read1" , NULL ) ; _rtB -> ghzl1zkfkb [ 0 ] =
_rtDW -> h1t1phh10c [ 0 ] ; _rtB -> ghzl1zkfkb [ 1 ] = _rtDW -> h1t1phh10c [
1 ] ; _rtB -> ghzl1zkfkb [ 2 ] = _rtDW -> h1t1phh10c [ 2 ] ; _rtB ->
ghzl1zkfkb [ 3 ] = _rtDW -> h1t1phh10c [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 13 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
h1t1phh10c [ 0 ] = _rtB -> nhbebcpsak [ 0 ] ; _rtDW -> h1t1phh10c [ 1 ] =
_rtB -> nhbebcpsak [ 1 ] ; _rtDW -> h1t1phh10c [ 2 ] = _rtB -> nhbebcpsak [ 2
] ; _rtDW -> h1t1phh10c [ 3 ] = _rtB -> nhbebcpsak [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes4/g4/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/g4/measures/Data Store Read2" , NULL ) ; _rtB -> byo0ouhd1u [ 0 ] =
_rtDW -> foiy3odoz1 [ 0 ] ; _rtB -> byo0ouhd1u [ 1 ] = _rtDW -> foiy3odoz1 [
1 ] ; _rtB -> byo0ouhd1u [ 2 ] = _rtDW -> foiy3odoz1 [ 2 ] ; _rtB ->
byo0ouhd1u [ 3 ] = _rtDW -> foiy3odoz1 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 14 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
foiy3odoz1 [ 0 ] = _rtB -> f4g2qjeffu [ 0 ] ; _rtDW -> foiy3odoz1 [ 1 ] =
_rtB -> f4g2qjeffu [ 1 ] ; _rtDW -> foiy3odoz1 [ 2 ] = _rtB -> f4g2qjeffu [ 2
] ; _rtDW -> foiy3odoz1 [ 3 ] = _rtB -> f4g2qjeffu [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/g4/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/g4/measures/Data Store Read3" , NULL ) ; _rtB -> l454zgvdlm [ 0 ] =
_rtDW -> pizmexwruz [ 0 ] ; _rtB -> l454zgvdlm [ 1 ] = _rtDW -> pizmexwruz [
1 ] ; _rtB -> l454zgvdlm [ 2 ] = _rtDW -> pizmexwruz [ 2 ] ; _rtB ->
l454zgvdlm [ 3 ] = _rtDW -> pizmexwruz [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 15 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
pizmexwruz [ 0 ] = _rtB -> f1jeqmzclq [ 0 ] ; _rtDW -> pizmexwruz [ 1 ] =
_rtB -> f1jeqmzclq [ 1 ] ; _rtDW -> pizmexwruz [ 2 ] = _rtB -> f1jeqmzclq [ 2
] ; _rtDW -> pizmexwruz [ 3 ] = _rtB -> f1jeqmzclq [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/g4/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/g4/measures/Data Store Read4" , NULL ) ; _rtB -> ixdtsimcpw [ 0 ] =
_rtDW -> k5wmx351m0 [ 0 ] ; _rtB -> ixdtsimcpw [ 1 ] = _rtDW -> k5wmx351m0 [
1 ] ; _rtB -> ixdtsimcpw [ 2 ] = _rtDW -> k5wmx351m0 [ 2 ] ; _rtB ->
ixdtsimcpw [ 3 ] = _rtDW -> k5wmx351m0 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 16 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
k5wmx351m0 [ 0 ] = _rtB -> b4clbz10cn [ 0 ] ; _rtDW -> k5wmx351m0 [ 1 ] =
_rtB -> b4clbz10cn [ 1 ] ; _rtDW -> k5wmx351m0 [ 2 ] = _rtB -> b4clbz10cn [ 2
] ; _rtDW -> k5wmx351m0 [ 3 ] = _rtB -> b4clbz10cn [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/g4/measures/Data Store Write4" , NULL ) ; } if ( ssIsSampleHit ( S ,
1 , 0 ) ) { _rtB -> h5o2c1f4ro = _rtP -> P_107 ; } _rtB -> mpqotuzurw = _rtP
-> P_108 * eeslnumswv [ 3 ] ; _rtB -> oe4jrqly2d = _rtP -> P_109 * eeslnumswv
[ 2 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 17 ,
147 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 17 , 148 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 17 , 149 ,
SS_CALL_MDL_OUTPUTS ) ; } _rtB -> bxoymicn3u = ssGetT ( S ) ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 17 , 151 ,
SS_CALL_MDL_OUTPUTS ) ; } ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes4/Control/Data Store Read" , NULL ) ; _rtB -> i2ax3wlmjz [
0 ] = _rtDW -> h1t1phh10c [ 0 ] ; _rtB -> i2ax3wlmjz [ 1 ] = _rtDW ->
h1t1phh10c [ 1 ] ; _rtB -> i2ax3wlmjz [ 2 ] = _rtDW -> h1t1phh10c [ 2 ] ;
_rtB -> i2ax3wlmjz [ 3 ] = _rtDW -> h1t1phh10c [ 3 ] ; if ( ssIsSampleHit ( S
, 2 , 0 ) ) { ssCallAccelRunBlock ( S , 17 , 153 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes4/Control/Data Store Read1" , NULL ) ; _rtB -> jafcb33b5k [ 0 ] = _rtDW
-> foiy3odoz1 [ 0 ] ; _rtB -> jafcb33b5k [ 1 ] = _rtDW -> foiy3odoz1 [ 1 ] ;
_rtB -> jafcb33b5k [ 2 ] = _rtDW -> foiy3odoz1 [ 2 ] ; _rtB -> jafcb33b5k [ 3
] = _rtDW -> foiy3odoz1 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 17 , 155 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes4/Control/Data Store Read2" , NULL ) ; _rtB -> fh4rwteujl [ 0 ] = _rtDW
-> pizmexwruz [ 0 ] ; _rtB -> fh4rwteujl [ 1 ] = _rtDW -> pizmexwruz [ 1 ] ;
_rtB -> fh4rwteujl [ 2 ] = _rtDW -> pizmexwruz [ 2 ] ; _rtB -> fh4rwteujl [ 3
] = _rtDW -> pizmexwruz [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 17 , 157 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes4/Control/Data Store Read3" , NULL ) ; _rtB -> bam4pni54j [ 0 ] = _rtDW
-> k5wmx351m0 [ 0 ] ; _rtB -> bam4pni54j [ 1 ] = _rtDW -> k5wmx351m0 [ 1 ] ;
_rtB -> bam4pni54j [ 2 ] = _rtDW -> k5wmx351m0 [ 2 ] ; _rtB -> bam4pni54j [ 3
] = _rtDW -> k5wmx351m0 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 17 , 159 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jquzg2wztj ,
"nodes4/Control/Data Store Read4" , NULL ) ; _rtB -> bg1xr5gwzd [ 0 ] = _rtDW
-> aboia0klkk [ 0 ] ; _rtB -> bg1xr5gwzd [ 1 ] = _rtDW -> aboia0klkk [ 1 ] ;
_rtB -> bg1xr5gwzd [ 2 ] = _rtDW -> aboia0klkk [ 2 ] ; _rtB -> bg1xr5gwzd [ 3
] = _rtDW -> aboia0klkk [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 17 , 161 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> m1d1zu5yxt ,
"nodes4/Control/Data Store Read5" , NULL ) ; _rtB -> gae0hqttbp [ 0 ] = _rtDW
-> fmmswgsion [ 0 ] ; _rtB -> gae0hqttbp [ 1 ] = _rtDW -> fmmswgsion [ 1 ] ;
_rtB -> gae0hqttbp [ 2 ] = _rtDW -> fmmswgsion [ 2 ] ; _rtB -> gae0hqttbp [ 3
] = _rtDW -> fmmswgsion [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 17 , 163 , SS_CALL_MDL_OUTPUTS ) ; } _rtB ->
ie2vphh0e5 = _rtP -> P_152 * eeslnumswv [ 0 ] ; _rtB -> gnjkncbbk4 = _rtP ->
P_153 * eeslnumswv [ 1 ] ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { n3qi1whofz * _rtB ;
ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtB
= ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; if ( ssIsSampleHit ( S , 1 , 0 )
) { _rtDW -> h31mfjlljs = _rtB -> ie2vphh0e5 ; _rtDW -> efdih4dveq = _rtB ->
gnjkncbbk4 ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { int_T is ; int_T ci ; static
const int8_T ir [ 15 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 13 , 14 , 15 , 16 ,
17 , 18 , 19 , 20 } ; static const int8_T jc [ 20 ] = { 0 , 2 , 1 , 3 , 0 , 6
, 1 , 7 , 2 , 4 , 3 , 5 , 4 , 5 , 2 , 3 , 0 , 1 , 6 , 7 } ; n3qi1whofz * _rtB
; loikxjbxjg * _rtP ; f1xhd02yjc * _rtX ; pqmvzr1kvu * _rtXdot ; _rtXdot = (
( pqmvzr1kvu * ) ssGetdX ( S ) ) ; _rtX = ( ( f1xhd02yjc * ) ssGetContStates
( S ) ) ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ; _rtB = ( (
n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; for ( is = 0 ; is < 14 ; is ++ ) {
_rtXdot -> jqdufexgzv [ is ] = 0.0 ; } for ( is = 0 ; is < 14 ; is ++ ) { for
( ci = is ; ci < is + 1 ; ci ++ ) { _rtXdot -> jqdufexgzv [ is ] += _rtP ->
P_94 [ ci ] * _rtX -> jqdufexgzv [ ci ] ; } } for ( is = 0 ; is < 14 ; is ++
) { for ( ci = ir [ is ] ; ci < ir [ is + 1 ] ; ci ++ ) { _rtXdot ->
jqdufexgzv [ is ] += _rtP -> P_95 [ ci ] * _rtB -> p1obiqmaoo [ jc [ ci ] ] ;
} } }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ;
_rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S ,
17 , 1 , SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 17 , 14 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 17 , 15 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 17 , 16 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 17 , 147 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; } static void mdlInitializeSizes ( SimStruct *
S ) { ssSetChecksumVal ( S , 0 , 3554182706U ) ; ssSetChecksumVal ( S , 1 ,
4174835594U ) ; ssSetChecksumVal ( S , 2 , 543566501U ) ; ssSetChecksumVal (
S , 3 , 1676330399U ) ; { mxArray * slVerStructMat = NULL ; mxArray *
slStrMat = mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status
= mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if (
status == 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 ,
"Version" ) ; if ( slVerMat == NULL ) { status = 1 ; } else { status =
mxGetString ( slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "8.3" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
ew10rzwqr2 ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( n3qi1whofz ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
loikxjbxjg ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & o2iu0a2jke ) ; rt_InitInfAndNaN ( sizeof ( real_T ) ) ; } static
void mdlInitializeSampleTimes ( SimStruct * S ) { { SimStruct * childS ;
SysOutputFcn * callSysFcns ; childS = ssGetSFunction ( S , 0 ) ; callSysFcns
= ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 1 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 2 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 3 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 4 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 5 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 6 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 7 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 8 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 9 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 10 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 11 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 12 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 13 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 14 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 15 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 16 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
