#include "__cf_nodes8.h"
#include <math.h>
#include "nodes8_acc.h"
#include "nodes8_acc_private.h"
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
ndm00r2tta ; int_T iy ; int_T ci ; real_T eeslnumswv [ 18 ] ; static const
int8_T ir [ 19 ] = { 0 , 0 , 0 , 2 , 4 , 7 , 10 , 13 , 16 , 19 , 22 , 24 , 26
, 29 , 32 , 35 , 38 , 41 , 44 } ; static const int8_T ir_p [ 19 ] = { 0 , 1 ,
2 , 2 , 2 , 2 , 2 , 2 , 2 , 3 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 } ; static
const int8_T jc [ 44 ] = { 18 , 26 , 19 , 27 , 2 , 10 , 12 , 3 , 11 , 13 , 4
, 6 , 12 , 5 , 7 , 13 , 6 , 8 , 20 , 7 , 9 , 21 , 0 , 10 , 1 , 11 , 8 , 14 ,
22 , 9 , 15 , 23 , 14 , 16 , 28 , 15 , 17 , 29 , 16 , 18 , 24 , 17 , 19 , 25
} ; static const int8_T jc_p [ 4 ] = { 6 , 7 , 16 , 17 } ; n3qi1whofz * _rtB
; loikxjbxjg * _rtP ; f1xhd02yjc * _rtX ; ew10rzwqr2 * _rtDW ; _rtDW = ( (
ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtX = ( ( f1xhd02yjc * )
ssGetContStates ( S ) ) ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) )
; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes8/g1/measures/Data Store Read1" , NULL ) ; memcpy ( & _rtB ->
n2ib5fveg4 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 1 ,
SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 1 , 0 , SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW ->
h1t1phh10c [ 0 ] , & _rtB -> hnwyjibwqn [ 0 ] , sizeof ( real_T ) << 3U ) ;
ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes8/g1/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes8/g1/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
edur4blpwp [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 2 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
b5dgsab0jz [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes8/g1/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes8/g1/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
haup3jlefg [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 3 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
d22x0dugpi [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes8/g1/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes8/g1/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
cjdevfswys [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 4 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
jcdxzkh4wk [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes8/g1/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> m3yzjmareh = _rtP -> P_78 ;
ssCallAccelRunBlock ( S , 33 , 14 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 15 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 16 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 17 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 18 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 19 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 20 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
cz2v1jbkkd = _rtDW -> h31mfjlljs ; _rtB -> brm2ew4bas = _rtDW -> efdih4dveq ;
} ndm00r2tta = ssGetT ( S ) ; _rtB -> dhlmqrffxw = ssGetTStart ( S ) ;
ndm00r2tta -= _rtB -> dhlmqrffxw ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> cbk3bojwj4 = _rtP -> P_179 ; } ndm00r2tta = muDoubleScalarRem ( ndm00r2tta
, _rtB -> cbk3bojwj4 ) ; _rtB -> m0a3rsyous = look1_binlxpw ( ndm00r2tta , *
( real_T ( * ) [ 4 ] ) & _rtP -> P_181 [ 0 ] , * ( real_T ( * ) [ 4 ] ) &
_rtP -> P_180 [ 0 ] , 3U ) ; ssCallAccelRunBlock ( S , 0 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> ogd534fsjz [ 0 ] = _rtB -> owujr1meb1 [ 4 ] ;
_rtB -> ogd534fsjz [ 1 ] = _rtB -> owujr1meb1 [ 5 ] ; _rtB -> ogd534fsjz [ 2
] = _rtB -> iuamvl5pvh [ 4 ] ; _rtB -> ogd534fsjz [ 3 ] = _rtB -> iuamvl5pvh
[ 5 ] ; _rtB -> ogd534fsjz [ 4 ] = _rtB -> g0y1k0xc0z [ 4 ] ; _rtB ->
ogd534fsjz [ 5 ] = _rtB -> g0y1k0xc0z [ 5 ] ; _rtB -> ogd534fsjz [ 6 ] = _rtB
-> ozwbu50sy0 [ 4 ] ; _rtB -> ogd534fsjz [ 7 ] = _rtB -> ozwbu50sy0 [ 5 ] ;
_rtB -> ogd534fsjz [ 8 ] = _rtB -> end5oqplmv [ 4 ] ; _rtB -> ogd534fsjz [ 9
] = _rtB -> end5oqplmv [ 5 ] ; _rtB -> ogd534fsjz [ 10 ] = _rtB -> pgxkznvz4g
[ 4 ] ; _rtB -> ogd534fsjz [ 11 ] = _rtB -> pgxkznvz4g [ 5 ] ; _rtB ->
ogd534fsjz [ 12 ] = _rtB -> o0mrorpqa1 [ 4 ] ; _rtB -> ogd534fsjz [ 13 ] =
_rtB -> o0mrorpqa1 [ 5 ] ; _rtB -> ogd534fsjz [ 14 ] = _rtB -> juef3z0u55 [ 4
] ; _rtB -> ogd534fsjz [ 15 ] = _rtB -> juef3z0u55 [ 5 ] ; _rtB -> ogd534fsjz
[ 16 ] = _rtB -> hahkwn1qkd ; _rtB -> ogd534fsjz [ 17 ] = _rtB -> ifuuwgao1a
; for ( iy = 0 ; iy < 18 ; iy ++ ) { eeslnumswv [ iy ] = 0.0 ; } for ( iy = 0
; iy < 18 ; iy ++ ) { for ( ci = ir [ iy ] ; ci < ir [ iy + 1 ] ; ci ++ ) {
eeslnumswv [ iy ] += _rtP -> P_184 [ ci ] * _rtX -> jqdufexgzv [ jc [ ci ] ]
; } } for ( iy = 0 ; iy < 18 ; iy ++ ) { for ( ci = ir_p [ iy ] ; ci < ir_p [
iy + 1 ] ; ci ++ ) { eeslnumswv [ iy ] += _rtP -> P_185 [ ci ] * _rtB ->
ogd534fsjz [ jc_p [ ci ] ] ; } } _rtB -> azscu5trfv = _rtP -> P_187 *
eeslnumswv [ 5 ] ; _rtB -> pltixuvgwu = _rtP -> P_188 * eeslnumswv [ 4 ] ;
ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes8/g2/measures/Data Store Read1" , NULL ) ; memcpy ( & _rtB ->
d3gzim43vf [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 5 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
o1w1hua0wi [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes8/g2/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes8/g2/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
jy0au5e2jh [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 6 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
atehpsr24u [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes8/g2/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes8/g2/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
ifgmqbnr1s [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 7 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
bs32ogpq5t [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes8/g2/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes8/g2/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
ichmjrsi22 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 8 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
ginlqhskjb [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes8/g2/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> nsuowoocwb = _rtP -> P_189 ; }
_rtB -> hiwn4efyfj = _rtP -> P_190 * eeslnumswv [ 7 ] ; _rtB -> cpgxqx1s4u =
_rtP -> P_191 * eeslnumswv [ 6 ] ; ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes8/g3/measures/Data Store Read1" , NULL ) ; memcpy ( & _rtB
-> eaiijxwjcb [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 3U )
; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 9 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
df3my4psmi [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes8/g3/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes8/g3/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ctebjrxck0 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 10 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
bzgaahqvz3 [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes8/g3/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes8/g3/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
gdtjste1i1 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 11 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
kdqjm1zhlt [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes8/g3/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes8/g3/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
c5ytr0wkio [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 12 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
ffjzdpw3ut [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes8/g3/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> b4k21eocm4 = _rtP -> P_192 ; }
_rtB -> mrwuwhp2ss = _rtP -> P_193 * eeslnumswv [ 9 ] ; _rtB -> ovxjarm3gb =
_rtP -> P_194 * eeslnumswv [ 8 ] ; ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes8/g4/measures/Data Store Read1" , NULL ) ; memcpy ( & _rtB
-> i5ngodhbsj [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 3U )
; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 13 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
nhbebcpsak [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes8/g4/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes8/g4/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
cy4lzk5ttk [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 14 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
f4g2qjeffu [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes8/g4/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes8/g4/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
hswzaw5khb [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 15 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
f1jeqmzclq [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes8/g4/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes8/g4/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
phya3ejq05 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 16 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
b4clbz10cn [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes8/g4/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> fdn5gh3fnd = _rtP -> P_195 ; }
_rtB -> biibyjxshm = _rtP -> P_196 * eeslnumswv [ 11 ] ; _rtB -> gnldbyjym4 =
_rtP -> P_197 * eeslnumswv [ 10 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes8/g5/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> i0qizmuynz [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
3U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 17 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
duf115r5xf [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes8/g5/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes8/g5/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
lo4evo4c0j [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 18 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
lj4jy13v3t [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes8/g5/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes8/g5/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
avtovd2ddm [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 19 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
jxbzitk1n5 [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes8/g5/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes8/g5/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
dwfr4dcacx [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 20 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
lah1qepc5v [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes8/g5/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> nca0izjtye = _rtP -> P_198 ; }
_rtB -> mernp1sds5 = _rtP -> P_199 * eeslnumswv [ 13 ] ; _rtB -> oqfry4okjd =
_rtP -> P_200 * eeslnumswv [ 12 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes8/g6/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> e5a4jfybcm [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
3U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 21 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
kc03s2jdhg [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes8/g6/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes8/g6/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
pycue0321t [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 22 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
jlfbcordgm [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes8/g6/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes8/g6/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
azxcb5b2u4 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 23 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
hvrwibarax [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes8/g6/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes8/g6/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
cb1xhd2bt5 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 24 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
gmqc0e3yqe [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes8/g6/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> m25gfxaynm = _rtP -> P_201 ; }
_rtB -> avthh1s1gq = _rtP -> P_202 * eeslnumswv [ 15 ] ; _rtB -> itrkjjbdao =
_rtP -> P_203 * eeslnumswv [ 14 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes8/g7/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> msdtfx1vs5 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
3U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 25 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
ovioeknmcp [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes8/g7/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes8/g7/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
a5thvdy1ei [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 26 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
kjtueixhsm [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes8/g7/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes8/g7/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
ew5bysjal1 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 27 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
frcp2nfkaw [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes8/g7/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes8/g7/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
eirlnj12sy [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 28 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
b4r04eslj2 [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes8/g7/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> nkplackyqd = _rtP -> P_204 ; }
_rtB -> dqdgsziw0k = _rtP -> P_205 * eeslnumswv [ 17 ] ; _rtB -> nwpjfvbhfv =
_rtP -> P_206 * eeslnumswv [ 16 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes8/g8/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> alk3432sng [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
3U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 29 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
dgmq0hyagv [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes8/g8/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes8/g8/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ljp4zuysog [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 30 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
cgmlvggxjh [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes8/g8/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes8/g8/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
jompcgc0rc [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 31 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
mwqjwfizid [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes8/g8/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes8/g8/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
ei2rmx2er5 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 32 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
mqmbanw2hb [ 0 ] , sizeof ( real_T ) << 3U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes8/g8/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mh2mz0nux5 = _rtP -> P_207 ; }
_rtB -> e50icy5c5b = _rtP -> P_208 * eeslnumswv [ 3 ] ; _rtB -> bajcnc5q25 =
_rtP -> P_209 * eeslnumswv [ 2 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
ssCallAccelRunBlock ( S , 33 , 283 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 284 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 285 , SS_CALL_MDL_OUTPUTS ) ; } _rtB ->
ln3gsr5sv0 = ssGetT ( S ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 33 , 287 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes8/Control/Data Store Read" , NULL ) ; memcpy ( & _rtB -> p205jseh5p [ 0
] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 3U ) ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 289 ,
SS_CALL_MDL_OUTPUTS ) ; } ssReadFromDataStoreWithPath ( S , _rtDW ->
ivmk2fwp5x , "nodes8/Control/Data Store Read1" , NULL ) ; memcpy ( & _rtB ->
bkm3wm2kv2 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 291 ,
SS_CALL_MDL_OUTPUTS ) ; } ssReadFromDataStoreWithPath ( S , _rtDW ->
dgn0vobid0 , "nodes8/Control/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
iovqjfqxfi [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 293 ,
SS_CALL_MDL_OUTPUTS ) ; } ssReadFromDataStoreWithPath ( S , _rtDW ->
jjmar5x2j0 , "nodes8/Control/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
d44cuszhgm [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 295 ,
SS_CALL_MDL_OUTPUTS ) ; } ssReadFromDataStoreWithPath ( S , _rtDW ->
jquzg2wztj , "nodes8/Control/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
dul4k1nki0 [ 0 ] , & _rtDW -> aboia0klkk [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 297 ,
SS_CALL_MDL_OUTPUTS ) ; } ssReadFromDataStoreWithPath ( S , _rtDW ->
m1d1zu5yxt , "nodes8/Control/Data Store Read5" , NULL ) ; memcpy ( & _rtB ->
k3ktqfjaqg [ 0 ] , & _rtDW -> fmmswgsion [ 0 ] , sizeof ( real_T ) << 3U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 299 ,
SS_CALL_MDL_OUTPUTS ) ; } _rtB -> dgfowmm0a1 = _rtP -> P_252 * eeslnumswv [ 0
] ; _rtB -> nbgapdra02 = _rtP -> P_253 * eeslnumswv [ 1 ] ; UNUSED_PARAMETER
( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { n3qi1whofz * _rtB ;
ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtB
= ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; if ( ssIsSampleHit ( S , 1 , 0 )
) { _rtDW -> h31mfjlljs = _rtB -> dgfowmm0a1 ; _rtDW -> efdih4dveq = _rtB ->
nbgapdra02 ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { int_T is ; int_T ci ; static
const int8_T ir [ 31 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 8 , 10 , 12 , 14 , 16
, 18 , 20 , 22 , 24 , 26 , 28 , 30 , 32 , 34 , 35 , 36 , 37 , 38 , 39 , 40 ,
41 , 42 , 43 , 44 } ; static const int8_T jc [ 44 ] = { 8 , 9 , 2 , 3 , 4 , 5
, 4 , 6 , 5 , 7 , 6 , 10 , 7 , 11 , 2 , 8 , 3 , 9 , 2 , 4 , 3 , 5 , 10 , 12 ,
11 , 13 , 12 , 14 , 13 , 15 , 0 , 14 , 1 , 15 , 6 , 7 , 10 , 11 , 14 , 15 , 0
, 1 , 12 , 13 } ; n3qi1whofz * _rtB ; loikxjbxjg * _rtP ; f1xhd02yjc * _rtX ;
pqmvzr1kvu * _rtXdot ; _rtXdot = ( ( pqmvzr1kvu * ) ssGetdX ( S ) ) ; _rtX =
( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ; _rtP = ( ( loikxjbxjg * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
for ( is = 0 ; is < 30 ; is ++ ) { _rtXdot -> jqdufexgzv [ is ] = 0.0 ; } for
( is = 0 ; is < 30 ; is ++ ) { for ( ci = is ; ci < is + 1 ; ci ++ ) {
_rtXdot -> jqdufexgzv [ is ] += _rtP -> P_182 [ ci ] * _rtX -> jqdufexgzv [
ci ] ; } } for ( is = 0 ; is < 30 ; is ++ ) { for ( ci = ir [ is ] ; ci < ir
[ is + 1 ] ; ci ++ ) { _rtXdot -> jqdufexgzv [ is ] += _rtP -> P_183 [ ci ] *
_rtB -> ogd534fsjz [ jc [ ci ] ] ; } } }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ;
_rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S ,
33 , 1 , SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 33 , 14 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 33 , 15 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 33 , 16 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 33 , 17 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 33 , 18 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 33 , 19 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 33 , 20 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 33 , 283 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; } static void mdlInitializeSizes ( SimStruct *
S ) { ssSetChecksumVal ( S , 0 , 2940249904U ) ; ssSetChecksumVal ( S , 1 ,
1137474540U ) ; ssSetChecksumVal ( S , 2 , 2916831072U ) ; ssSetChecksumVal (
S , 3 , 3068685177U ) ; { mxArray * slVerStructMat = NULL ; mxArray *
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
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 17 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 18 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 19 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 20 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 21 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 22 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 23 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 24 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 25 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 26 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 27 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 28 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 29 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 30 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 31 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 32 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
