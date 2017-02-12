#include "__cf_nodes32.h"
#include <math.h>
#include "nodes32_acc.h"
#include "nodes32_acc_private.h"
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
fj3dmt3ugv ; int_T iy ; int_T ci ; real_T dh2byt1o2j [ 66 ] ; static const
uint8_T ir [ 67 ] = { 0U , 0U , 0U , 3U , 6U , 9U , 12U , 14U , 16U , 19U ,
22U , 25U , 28U , 30U , 32U , 34U , 36U , 39U , 42U , 45U , 48U , 51U , 54U ,
56U , 58U , 61U , 64U , 67U , 70U , 74U , 78U , 83U , 88U , 90U , 92U , 94U ,
96U , 98U , 100U , 103U , 106U , 109U , 112U , 117U , 122U , 125U , 128U ,
133U , 138U , 140U , 142U , 144U , 146U , 148U , 150U , 152U , 154U , 157U ,
160U , 163U , 166U , 169U , 172U , 177U , 182U , 185U , 188U } ; static const
int8_T ir_p [ 67 ] = { 0 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2
, 2 , 2 , 2 , 2 , 2 , 2 , 2 , 3 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 ,
4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4
, 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 } ; static const
int8_T jc [ 188 ] = { 50 , 58 , 122 , 51 , 59 , 123 , 8 , 50 , 62 , 9 , 51 ,
63 , 4 , 64 , 5 , 65 , 4 , 6 , 66 , 5 , 7 , 67 , 6 , 38 , 68 , 7 , 39 , 69 ,
16 , 124 , 17 , 125 , 14 , 84 , 15 , 85 , 34 , 44 , 106 , 35 , 45 , 107 , 26
, 34 , 72 , 27 , 35 , 73 , 8 , 60 , 70 , 9 , 61 , 71 , 22 , 74 , 23 , 75 , 22
, 24 , 76 , 23 , 25 , 77 , 24 , 30 , 78 , 25 , 31 , 79 , 12 , 26 , 46 , 82 ,
13 , 27 , 47 , 83 , 14 , 28 , 30 , 46 , 86 , 15 , 29 , 31 , 47 , 87 , 32 ,
100 , 33 , 101 , 42 , 90 , 43 , 91 , 36 , 92 , 37 , 93 , 36 , 40 , 94 , 37 ,
41 , 95 , 18 , 40 , 96 , 19 , 41 , 97 , 10 , 12 , 38 , 60 , 80 , 11 , 13 , 39
, 61 , 81 , 20 , 42 , 98 , 21 , 43 , 99 , 18 , 20 , 32 , 44 , 104 , 19 , 21 ,
33 , 45 , 105 , 28 , 88 , 29 , 89 , 48 , 118 , 49 , 119 , 56 , 108 , 57 , 109
, 52 , 110 , 53 , 111 , 52 , 54 , 112 , 53 , 55 , 113 , 0 , 54 , 114 , 1 , 55
, 115 , 2 , 56 , 116 , 3 , 57 , 117 , 0 , 2 , 48 , 58 , 120 , 1 , 3 , 49 , 59
, 121 , 10 , 16 , 102 , 11 , 17 , 103 } ; static const int8_T jc_p [ 4 ] = {
44 , 45 , 64 , 65 } ; n3qi1whofz * _rtB ; loikxjbxjg * _rtP ; f1xhd02yjc *
_rtX ; ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) )
; _rtX = ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ; _rtP = ( ( loikxjbxjg *
) ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) )
; ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes32/g1/measures/Data Store Read1" , NULL ) ; memcpy ( & _rtB ->
fch3jlrjw2 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 129 , 1 ,
SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 1 , 0 , SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW ->
h1t1phh10c [ 0 ] , & _rtB -> edcahfsm4v [ 0 ] , sizeof ( real_T ) << 5U ) ;
ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes32/g1/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g1/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
nfog5go3a2 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 2 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
bf4oh1n3w1 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g1/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g1/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
argndjqb3j [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 3 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
mvystzr3ht [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g1/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g1/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
ngxu4yluve [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 4 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
phafiqrvpc [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g1/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> kinhlytcbn = _rtP -> P_270 ;
ssCallAccelRunBlock ( S , 129 , 14 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 15 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 16 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 17 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 18 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 19 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 20 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 21 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 22 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 23 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 24 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 25 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 26 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 27 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 28 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 29 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 30 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 31 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 32 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 33 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 34 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 35 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 36 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 37 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 38 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 39 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 40 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 41 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 42 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 43 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 44 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
pmxvkyisns = _rtDW -> di1dojol2y ; _rtB -> perahco1oi = _rtDW -> llaxuqjha5 ;
} fj3dmt3ugv = ssGetT ( S ) ; _rtB -> cggrxapnmi = ssGetTStart ( S ) ;
fj3dmt3ugv -= _rtB -> cggrxapnmi ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> box51ljf3f = _rtP -> P_707 ; } fj3dmt3ugv = muDoubleScalarRem ( fj3dmt3ugv
, _rtB -> box51ljf3f ) ; _rtB -> nvxfskaqhe = look1_binlxpw ( fj3dmt3ugv ,
_rtP -> P_709 , _rtP -> P_708 , 3U ) ; ssCallAccelRunBlock ( S , 0 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> igmmw1b524 [ 0 ] = _rtB -> cmofpmc02h [ 4 ] ;
_rtB -> igmmw1b524 [ 1 ] = _rtB -> cmofpmc02h [ 5 ] ; _rtB -> igmmw1b524 [ 2
] = _rtB -> foga05imwc [ 4 ] ; _rtB -> igmmw1b524 [ 3 ] = _rtB -> foga05imwc
[ 5 ] ; _rtB -> igmmw1b524 [ 4 ] = _rtB -> lob3qzr2sc [ 4 ] ; _rtB ->
igmmw1b524 [ 5 ] = _rtB -> lob3qzr2sc [ 5 ] ; _rtB -> igmmw1b524 [ 6 ] = _rtB
-> mkbegft2ce [ 4 ] ; _rtB -> igmmw1b524 [ 7 ] = _rtB -> mkbegft2ce [ 5 ] ;
_rtB -> igmmw1b524 [ 8 ] = _rtB -> avq2lomqa4 [ 4 ] ; _rtB -> igmmw1b524 [ 9
] = _rtB -> avq2lomqa4 [ 5 ] ; _rtB -> igmmw1b524 [ 10 ] = _rtB -> hnn4l0zfoh
[ 4 ] ; _rtB -> igmmw1b524 [ 11 ] = _rtB -> hnn4l0zfoh [ 5 ] ; _rtB ->
igmmw1b524 [ 12 ] = _rtB -> bdhi2fzdua [ 4 ] ; _rtB -> igmmw1b524 [ 13 ] =
_rtB -> bdhi2fzdua [ 5 ] ; _rtB -> igmmw1b524 [ 14 ] = _rtB -> aoyoqoh1py [ 4
] ; _rtB -> igmmw1b524 [ 15 ] = _rtB -> aoyoqoh1py [ 5 ] ; _rtB -> igmmw1b524
[ 16 ] = _rtB -> a1apqivcyt [ 4 ] ; _rtB -> igmmw1b524 [ 17 ] = _rtB ->
a1apqivcyt [ 5 ] ; _rtB -> igmmw1b524 [ 18 ] = _rtB -> kuiwgtzn1d [ 4 ] ;
_rtB -> igmmw1b524 [ 19 ] = _rtB -> kuiwgtzn1d [ 5 ] ; _rtB -> igmmw1b524 [
20 ] = _rtB -> nwhasu3y5z [ 4 ] ; _rtB -> igmmw1b524 [ 21 ] = _rtB ->
nwhasu3y5z [ 5 ] ; _rtB -> igmmw1b524 [ 22 ] = _rtB -> i5lgxgsvex [ 4 ] ;
_rtB -> igmmw1b524 [ 23 ] = _rtB -> i5lgxgsvex [ 5 ] ; _rtB -> igmmw1b524 [
24 ] = _rtB -> mkih2ygv43 [ 4 ] ; _rtB -> igmmw1b524 [ 25 ] = _rtB ->
mkih2ygv43 [ 5 ] ; _rtB -> igmmw1b524 [ 26 ] = _rtB -> bbgan1joj3 [ 4 ] ;
_rtB -> igmmw1b524 [ 27 ] = _rtB -> bbgan1joj3 [ 5 ] ; _rtB -> igmmw1b524 [
28 ] = _rtB -> cu0cdvhkdx [ 4 ] ; _rtB -> igmmw1b524 [ 29 ] = _rtB ->
cu0cdvhkdx [ 5 ] ; _rtB -> igmmw1b524 [ 30 ] = _rtB -> fxcuqcfwkn [ 4 ] ;
_rtB -> igmmw1b524 [ 31 ] = _rtB -> fxcuqcfwkn [ 5 ] ; _rtB -> igmmw1b524 [
32 ] = _rtB -> hq2cvycfmy [ 4 ] ; _rtB -> igmmw1b524 [ 33 ] = _rtB ->
hq2cvycfmy [ 5 ] ; _rtB -> igmmw1b524 [ 34 ] = _rtB -> mngvtzy0bd [ 4 ] ;
_rtB -> igmmw1b524 [ 35 ] = _rtB -> mngvtzy0bd [ 5 ] ; _rtB -> igmmw1b524 [
36 ] = _rtB -> nf0dlq5jzd [ 4 ] ; _rtB -> igmmw1b524 [ 37 ] = _rtB ->
nf0dlq5jzd [ 5 ] ; _rtB -> igmmw1b524 [ 38 ] = _rtB -> fctplfionl [ 4 ] ;
_rtB -> igmmw1b524 [ 39 ] = _rtB -> fctplfionl [ 5 ] ; _rtB -> igmmw1b524 [
40 ] = _rtB -> jm5rauwkov [ 4 ] ; _rtB -> igmmw1b524 [ 41 ] = _rtB ->
jm5rauwkov [ 5 ] ; _rtB -> igmmw1b524 [ 42 ] = _rtB -> pbq1p314cb [ 4 ] ;
_rtB -> igmmw1b524 [ 43 ] = _rtB -> pbq1p314cb [ 5 ] ; _rtB -> igmmw1b524 [
44 ] = _rtB -> dkarewxvdg [ 4 ] ; _rtB -> igmmw1b524 [ 45 ] = _rtB ->
dkarewxvdg [ 5 ] ; _rtB -> igmmw1b524 [ 46 ] = _rtB -> k1cva0ccwt [ 4 ] ;
_rtB -> igmmw1b524 [ 47 ] = _rtB -> k1cva0ccwt [ 5 ] ; _rtB -> igmmw1b524 [
48 ] = _rtB -> fsvyvvttbp [ 4 ] ; _rtB -> igmmw1b524 [ 49 ] = _rtB ->
fsvyvvttbp [ 5 ] ; _rtB -> igmmw1b524 [ 50 ] = _rtB -> oxyvcxdfuw [ 4 ] ;
_rtB -> igmmw1b524 [ 51 ] = _rtB -> oxyvcxdfuw [ 5 ] ; _rtB -> igmmw1b524 [
52 ] = _rtB -> dn5b3kc2zm [ 4 ] ; _rtB -> igmmw1b524 [ 53 ] = _rtB ->
dn5b3kc2zm [ 5 ] ; _rtB -> igmmw1b524 [ 54 ] = _rtB -> ek05xbtj4k [ 4 ] ;
_rtB -> igmmw1b524 [ 55 ] = _rtB -> ek05xbtj4k [ 5 ] ; _rtB -> igmmw1b524 [
56 ] = _rtB -> ofrp2ub2r4 [ 4 ] ; _rtB -> igmmw1b524 [ 57 ] = _rtB ->
ofrp2ub2r4 [ 5 ] ; _rtB -> igmmw1b524 [ 58 ] = _rtB -> f30smk3juo [ 4 ] ;
_rtB -> igmmw1b524 [ 59 ] = _rtB -> f30smk3juo [ 5 ] ; _rtB -> igmmw1b524 [
60 ] = _rtB -> jgwsg0424t [ 4 ] ; _rtB -> igmmw1b524 [ 61 ] = _rtB ->
jgwsg0424t [ 5 ] ; _rtB -> igmmw1b524 [ 62 ] = _rtB -> f2q0nbahak [ 4 ] ;
_rtB -> igmmw1b524 [ 63 ] = _rtB -> f2q0nbahak [ 5 ] ; _rtB -> igmmw1b524 [
64 ] = _rtB -> g0lwwc0oj0 ; _rtB -> igmmw1b524 [ 65 ] = _rtB -> j4dljqm0st ;
for ( iy = 0 ; iy < 66 ; iy ++ ) { dh2byt1o2j [ iy ] = 0.0 ; } for ( iy = 0 ;
iy < 66 ; iy ++ ) { for ( ci = ir [ iy ] ; ci < ir [ iy + 1 ] ; ci ++ ) {
dh2byt1o2j [ iy ] += _rtP -> P_712 [ ci ] * _rtX -> kn4zrfum1e [ jc [ ci ] ]
; } } for ( iy = 0 ; iy < 66 ; iy ++ ) { for ( ci = ir_p [ iy ] ; ci < ir_p [
iy + 1 ] ; ci ++ ) { dh2byt1o2j [ iy ] += _rtP -> P_713 [ ci ] * _rtB ->
igmmw1b524 [ jc_p [ ci ] ] ; } } _rtB -> awevkzfkcq = _rtP -> P_715 *
dh2byt1o2j [ 65 ] ; _rtB -> hpz25cjwqk = _rtP -> P_716 * dh2byt1o2j [ 64 ] ;
ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes32/g10/measures/Data Store Read1" , NULL ) ; memcpy ( & _rtB ->
paoftwmvmi [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 5 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
absza5hjqo [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g10/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g10/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
iqt0s0pyqz [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 6 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
baffxbfxp4 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g10/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g10/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
ady2kar3gl [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 7 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
mmfk0cno30 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g10/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g10/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
noj1wuopml [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 8 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
btraxtk1ed [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g10/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> aehzaqvvkz = _rtP -> P_717 ; }
_rtB -> jz0tppbwvj = _rtP -> P_718 * dh2byt1o2j [ 63 ] ; _rtB -> g3e1nfjdry =
_rtP -> P_719 * dh2byt1o2j [ 62 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g11/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> e5vyqd1w4u [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 9 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
hv20bfcr3y [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g11/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g11/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
dy1lp4vfzg [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 10 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
bjyaot0u5x [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g11/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g11/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
crogdp2j1a [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 11 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
p5v3tug2ij [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g11/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g11/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
nhongnczia [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 12 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
fvnxjgae5z [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g11/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> pq5ahz30xh = _rtP -> P_720 ; }
_rtB -> e5x3o4n3gt = _rtP -> P_721 * dh2byt1o2j [ 61 ] ; _rtB -> l5xb44gvne =
_rtP -> P_722 * dh2byt1o2j [ 60 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g12/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> nwtaedi2fu [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 13 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
n0iif5hp3t [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g12/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g12/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
gljkizdayc [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 14 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
kpx0nepyhb [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g12/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g12/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
cf5ir2oyha [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 15 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
akfbrvx0dv [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g12/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g12/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
eemyy1dmk5 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 16 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
oh1lsnni0g [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g12/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> k4gkw4wdow = _rtP -> P_723 ; }
_rtB -> oef51jx0gg = _rtP -> P_724 * dh2byt1o2j [ 59 ] ; _rtB -> hay4vjwl5d =
_rtP -> P_725 * dh2byt1o2j [ 58 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g13/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> ddpvkj4hf0 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 17 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
ovxh5wjp4x [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g13/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g13/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
bzn14gjd24 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 18 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
cihjfs3ud4 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g13/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g13/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
mm415wt31i [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 19 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ne5vwqhmuw [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g13/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g13/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
ou00ermh1z [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 20 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
imgntj1xft [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g13/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> io5zqddbvj = _rtP -> P_726 ; }
_rtB -> b1wz2gbn5y = _rtP -> P_727 * dh2byt1o2j [ 57 ] ; _rtB -> pfooyeeal0 =
_rtP -> P_728 * dh2byt1o2j [ 56 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g14/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> dosdqespst [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 21 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
blzx3bqfp0 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g14/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g14/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
mksjsmh5xo [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 22 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
njvjfvrnzw [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g14/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g14/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
aun2gpll3f [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 23 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
fr1ojo41fy [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g14/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g14/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
c3sxgvs3rv [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 24 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
jhoopneeub [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g14/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> pim50yaot2 = _rtP -> P_729 ; }
_rtB -> mg5f1vb0pp = _rtP -> P_730 * dh2byt1o2j [ 55 ] ; _rtB -> jorgrbdzee =
_rtP -> P_731 * dh2byt1o2j [ 54 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g15/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> awf05kcv20 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 25 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
mpyuu3rali [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g15/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g15/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
cwmqotu4ms [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 26 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
mycst51htb [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g15/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g15/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
aktmreokew [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 27 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
hn3tvf1oyj [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g15/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g15/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
m00k3snqdu [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 28 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
csjoybxsom [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g15/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> al3ds4sae0 = _rtP -> P_732 ; }
_rtB -> hh5dxhogy3 = _rtP -> P_733 * dh2byt1o2j [ 53 ] ; _rtB -> bd3o50blok =
_rtP -> P_734 * dh2byt1o2j [ 52 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g16/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> a4f1firbu0 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 29 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
deq532zvlj [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g16/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g16/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
l4t0iekme0 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 30 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
hwi1nwhnyv [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g16/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g16/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
m3cj4nu332 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 31 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ny1gp0qr3j [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g16/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g16/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
mqocv0i1cw [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 32 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
clz0ic1gau [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g16/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> n0kmqbbkzs = _rtP -> P_735 ; }
_rtB -> fvwo1itkwm = _rtP -> P_736 * dh2byt1o2j [ 51 ] ; _rtB -> m2djlxfqgh =
_rtP -> P_737 * dh2byt1o2j [ 50 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g17/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> afpwp5xhrj [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
ltsknctygw [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g17/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g17/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
cbgdx2vayw [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 34 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
ez1trmkqta [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g17/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g17/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
dj5pkxpz0n [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 35 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
njvopwdvfq [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g17/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g17/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
o30wutfxo1 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 36 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
jsyn0zvhxw [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g17/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> jv4jfvfwmn = _rtP -> P_738 ; }
_rtB -> ava1nypmwr = _rtP -> P_739 * dh2byt1o2j [ 49 ] ; _rtB -> f5p50o1esl =
_rtP -> P_740 * dh2byt1o2j [ 48 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g18/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> lqsoty3xtx [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 37 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
h41rg3vprl [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g18/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g18/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
hqvq1prozp [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 38 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
ceimkodksm [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g18/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g18/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
nnhqludbsn [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 39 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
nlom0cml1r [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g18/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g18/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
nagh0wfeoo [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 40 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
bshrpqgqzo [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g18/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> e3t0x4njkv = _rtP -> P_741 ; }
_rtB -> k54r1ztoug = _rtP -> P_742 * dh2byt1o2j [ 47 ] ; _rtB -> g3x4t32f1b =
_rtP -> P_743 * dh2byt1o2j [ 46 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g19/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> ahsomwtw4q [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 41 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
cvdppfqq0l [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g19/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g19/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
nyuyuhvnou [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 42 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
mqeo22rmrn [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g19/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g19/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
cksok01r1p [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 43 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ago3bbllh3 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g19/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g19/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
nx4dlc4wjk [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 44 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
k5a4lyntxe [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g19/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> lrl3nnf3gf = _rtP -> P_744 ; }
_rtB -> jt3dkodndm = _rtP -> P_745 * dh2byt1o2j [ 45 ] ; _rtB -> jivqhjbizt =
_rtP -> P_746 * dh2byt1o2j [ 44 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g2/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> kppixy54ev [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 45 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
bt25cwnhga [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g2/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g2/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
byrc2zwd1q [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 46 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
k0cikhrfby [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g2/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g2/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
ohg0faajqt [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 47 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
mzvgr0didk [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g2/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g2/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
d4iuufarnd [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 48 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
ld035kdxb3 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g2/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> phr2inv51c = _rtP -> P_747 ; }
_rtB -> exx5ur3mrw = _rtP -> P_748 * dh2byt1o2j [ 43 ] ; _rtB -> nup1wafyej =
_rtP -> P_749 * dh2byt1o2j [ 42 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g20/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> cnhdvlv2ph [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 49 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
fgayqnfrdh [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g20/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g20/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
li031alm0g [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 50 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
l0n5d05odm [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g20/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g20/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
nnhni1ghe3 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 51 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
lwei4t5xzh [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g20/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g20/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
c5l2wwyjwh [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 52 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
ebj5vvuc32 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g20/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> bleonjilyx = _rtP -> P_750 ; }
_rtB -> hbwzotvzys = _rtP -> P_751 * dh2byt1o2j [ 41 ] ; _rtB -> k40ibicw2j =
_rtP -> P_752 * dh2byt1o2j [ 40 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g21/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> bipnmbyzxx [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 53 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
a411n2x5s2 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g21/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g21/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
dsjm1usscb [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 54 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
n0n21wnhzu [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g21/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g21/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
oed5igqs5a [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 55 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
le3kzsocij [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g21/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g21/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
emuf12hzlq [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 56 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
ndffutjauv [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g21/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> jyijbmx2pn = _rtP -> P_753 ; }
_rtB -> fnaki0qgai = _rtP -> P_754 * dh2byt1o2j [ 39 ] ; _rtB -> nkivza5wen =
_rtP -> P_755 * dh2byt1o2j [ 38 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g22/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> ldrrxxdugv [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 57 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
o3y5pmy2ax [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g22/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g22/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
aqoxhtbxe5 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 58 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
e1dajecl5d [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g22/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g22/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
f5v1aphtdg [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 59 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
bh5w45otzn [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g22/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g22/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
gkwcyc3dvu [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 60 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
gfmtt2lzyf [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g22/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> dv1fjosjko = _rtP -> P_756 ; }
_rtB -> nh1zqmrpfv = _rtP -> P_757 * dh2byt1o2j [ 37 ] ; _rtB -> ehw5za5ujc =
_rtP -> P_758 * dh2byt1o2j [ 36 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g23/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> dnono35zl3 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 61 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
dnqhlfnk5e [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g23/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g23/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ntdtem01nr [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 62 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
h2ur2huuge [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g23/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g23/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
f3qmui1pxj [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 63 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
mgbh4wxt1h [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g23/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g23/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
covnv2doyd [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 64 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
gpj1gq1lc5 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g23/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> fjay2g01xe = _rtP -> P_759 ; }
_rtB -> mxccqjiqnz = _rtP -> P_760 * dh2byt1o2j [ 35 ] ; _rtB -> n3uevdd3pt =
_rtP -> P_761 * dh2byt1o2j [ 34 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g24/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> mn2gcw0k1w [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 65 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
a1nbnlxk0k [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g24/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g24/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
dkv4jexoy3 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 66 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
fj4aqtd1vs [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g24/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g24/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
gyu2m5igzw [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 67 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
jzb4jz20pn [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g24/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g24/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
nwgtcgk2tn [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 68 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
poiay1swgw [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g24/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> j1ayotwafw = _rtP -> P_762 ; }
_rtB -> jhtthtpres = _rtP -> P_763 * dh2byt1o2j [ 33 ] ; _rtB -> ac4aoakixe =
_rtP -> P_764 * dh2byt1o2j [ 32 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g25/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> ehc2yurr3l [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 69 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
ntjouy4r3y [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g25/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g25/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
m2mn5umo1p [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 70 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
hpaplyfldw [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g25/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g25/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
i2cqzirp2z [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 71 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
npqm12ctfk [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g25/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g25/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
hvdush2j0w [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 72 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
mbqhfqvlsk [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g25/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> asznrei5ca = _rtP -> P_765 ; }
_rtB -> p0ngxjapuo = _rtP -> P_766 * dh2byt1o2j [ 31 ] ; _rtB -> nctpz2b2u0 =
_rtP -> P_767 * dh2byt1o2j [ 30 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g26/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> cwrnltt5nd [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 73 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
klo1p3tn4t [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g26/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g26/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
h3jgof2hmd [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 74 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
oazh11me1i [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g26/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g26/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
a5hj2dwflt [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 75 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
l2h2fcriy1 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g26/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g26/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
hptgt3elf4 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 76 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
o0cilm0qbu [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g26/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> emws1hhogi = _rtP -> P_768 ; }
_rtB -> pk2zez5qee = _rtP -> P_769 * dh2byt1o2j [ 29 ] ; _rtB -> ddxjjpbejk =
_rtP -> P_770 * dh2byt1o2j [ 28 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g27/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> bn0pfll1oy [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 77 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
bu5tbtjcjz [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g27/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g27/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
cyfnx11hoa [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 78 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
odf4dyy4e0 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g27/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g27/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
jgxdtcbdhx [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 79 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
csb2avvltt [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g27/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g27/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
flqoxpkzzb [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 80 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
edinfjihww [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g27/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> nsxzndeuqt = _rtP -> P_771 ; }
_rtB -> hg4ppw1qwl = _rtP -> P_772 * dh2byt1o2j [ 27 ] ; _rtB -> csgoacrn3q =
_rtP -> P_773 * dh2byt1o2j [ 26 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g28/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> opw22dvto3 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 81 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
nfo14cvhbb [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g28/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g28/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
gn5ddnqrkv [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 82 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
f1ixfzrkn2 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g28/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g28/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
gf42a5bw3g [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 83 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
dk1fg0hfyc [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g28/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g28/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
jrgkj5k1mx [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 84 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
nhkxviomdp [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g28/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> dktxygpjgl = _rtP -> P_774 ; }
_rtB -> ettwgh3ggz = _rtP -> P_775 * dh2byt1o2j [ 25 ] ; _rtB -> f01imz54hk =
_rtP -> P_776 * dh2byt1o2j [ 24 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g29/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> ampizhiyqk [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 85 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
birec1fntx [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g29/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g29/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
kar2agua3z [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 86 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
ni50xndxnm [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g29/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g29/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
jhlm2clsk0 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 87 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
mniezqns2c [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g29/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g29/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
lirwjhyoox [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 88 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
hdnrc5lpw3 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g29/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> gy3f0d0gxx = _rtP -> P_777 ; }
_rtB -> jjdtmawe1c = _rtP -> P_778 * dh2byt1o2j [ 23 ] ; _rtB -> ingnamqn2c =
_rtP -> P_779 * dh2byt1o2j [ 22 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g3/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> p12uvmnt2g [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 89 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
bwap3irbpg [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g3/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g3/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
mkiulomtd4 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 90 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
nkjnycq1vw [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g3/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g3/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
e43kc3d3gq [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 91 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
phpb5v0rxr [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g3/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g3/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
e2idiwgmkz [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 92 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
avp1ntpy3w [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g3/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> po52nn2em2 = _rtP -> P_780 ; }
_rtB -> ei0yi3g2ok = _rtP -> P_781 * dh2byt1o2j [ 21 ] ; _rtB -> jtwmxbjorm =
_rtP -> P_782 * dh2byt1o2j [ 20 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g30/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> kfnddr2rkw [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 93 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
ipm3gfyxrk [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g30/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g30/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
bxok4wvxhg [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 94 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
et4mtvb4dx [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g30/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g30/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
aslg0dytr3 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 95 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
gxujwyuzsz [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g30/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g30/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
bqn4s2fu5x [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 96 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
gnawlx3qvr [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g30/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> anoal5keal = _rtP -> P_783 ; }
_rtB -> lsqnjnos2f = _rtP -> P_784 * dh2byt1o2j [ 19 ] ; _rtB -> jqq4zrwmze =
_rtP -> P_785 * dh2byt1o2j [ 18 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g31/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> azyv54fnbh [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 97 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
pmc5h1ksv1 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g31/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g31/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
k1luib32w5 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 98 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
ing51fubua [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g31/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g31/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
agrw4ew0c3 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 99 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
nrvm3jtdbo [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g31/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g31/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
a4cl2ibcyh [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 100 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
pjtiqf2qoy [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g31/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mzk0pephxt = _rtP -> P_786 ; }
_rtB -> moctta1lun = _rtP -> P_787 * dh2byt1o2j [ 17 ] ; _rtB -> lhvd1kp4ld =
_rtP -> P_788 * dh2byt1o2j [ 16 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g32/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> aaquwihido [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 101 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
itjlz22p5y [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g32/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g32/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
mpawq55qcp [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 102 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
ktobkh1zwm [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g32/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g32/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
jytca1qztj [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 103 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ab5yybxreg [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g32/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g32/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
l2xidgofol [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 104 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
arr2fsikbm [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g32/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> frzzk2sp0e = _rtP -> P_789 ; }
_rtB -> bb50n0rsbn = _rtP -> P_790 * dh2byt1o2j [ 15 ] ; _rtB -> gdzxxl33no =
_rtP -> P_791 * dh2byt1o2j [ 14 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g4/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> b41suzehfq [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 105 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
k5zbgospa3 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g4/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g4/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ppkczlyviu [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 106 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
cmvtuljzat [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g4/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g4/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
cwlbcnxtkq [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 107 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ollegxm122 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g4/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g4/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
bccfnwvgci [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 108 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
j2oixso5xm [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g4/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> f3r1d5vjaz = _rtP -> P_792 ; }
_rtB -> mwecs1xzke = _rtP -> P_793 * dh2byt1o2j [ 13 ] ; _rtB -> huhauxcusl =
_rtP -> P_794 * dh2byt1o2j [ 12 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g5/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> bmve4ywvmj [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 109 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
jvay5daobe [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g5/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g5/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ptolw42lg1 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 110 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
pcehg10g23 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g5/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g5/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
cwjpklkff3 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 111 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
nnj4b1zrkv [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g5/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g5/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
fhary3yrqn [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 112 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
ly0lmucopm [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g5/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> kvvifc0fiw = _rtP -> P_795 ; }
_rtB -> lrujlhlguk = _rtP -> P_796 * dh2byt1o2j [ 11 ] ; _rtB -> gbxqjsaecy =
_rtP -> P_797 * dh2byt1o2j [ 10 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes32/g6/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> d4fmi51oi1 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 113 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
j32x2uwqzw [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g6/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g6/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
nvd3xarbsb [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 114 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
nuvcppy3nu [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g6/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g6/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
mikwrjez1r [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 115 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
o42xdapgkg [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g6/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g6/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
iiqpdhlbun [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 116 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
mexm534iij [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g6/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> b3lre2twhf = _rtP -> P_798 ; }
_rtB -> cyclzfxnjp = _rtP -> P_799 * dh2byt1o2j [ 9 ] ; _rtB -> o0503jftao =
_rtP -> P_800 * dh2byt1o2j [ 8 ] ; ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes32/g7/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> lgqnsiwdmy [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 117 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
bsxv0khs5h [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g7/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g7/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
nd5vjyujwf [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 118 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
poxyadwpnp [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g7/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g7/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
pqs3n0wgnp [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 119 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
l4jitrj0wc [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g7/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g7/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
ptmnjbk2rm [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 120 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
gruawszeyq [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g7/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> n5jwxnaixq = _rtP -> P_801 ; }
_rtB -> ofa3mgjbdl = _rtP -> P_802 * dh2byt1o2j [ 7 ] ; _rtB -> b35ynkcfw4 =
_rtP -> P_803 * dh2byt1o2j [ 6 ] ; ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes32/g8/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> lyz14r54uh [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 121 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
nxw3qgpbot [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g8/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g8/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
lxvlmj4s4e [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 122 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
d5zoxbxtmv [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g8/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g8/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
bpmdpocyjl [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 123 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
p5d5a2ruri [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g8/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g8/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
k5zpxjygym [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 124 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
naaz11maot [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g8/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> cgdbwvjsrx = _rtP -> P_804 ; }
_rtB -> kag2lfciz4 = _rtP -> P_805 * dh2byt1o2j [ 5 ] ; _rtB -> hnldiczexj =
_rtP -> P_806 * dh2byt1o2j [ 4 ] ; ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes32/g9/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> efahpfsqyw [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
5U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 125 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
gtdpavycb1 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes32/g9/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/g9/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
knu3lntzws [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 126 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
abblc1ikol [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes32/g9/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/g9/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
afi3aycnse [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 127 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
an3tnzzv53 [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes32/g9/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/g9/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
dunrgdge43 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 128 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
ieskdwbmhp [ 0 ] , sizeof ( real_T ) << 5U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes32/g9/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> lxunbxilur = _rtP -> P_807 ; }
_rtB -> jn2bzldkig = _rtP -> P_808 * dh2byt1o2j [ 3 ] ; _rtB -> njls5mhvnr =
_rtP -> P_809 * dh2byt1o2j [ 2 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
ssCallAccelRunBlock ( S , 129 , 1099 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 1100 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 129 , 1101 , SS_CALL_MDL_OUTPUTS ) ; } _rtB ->
nwu105ef1n = ssGetT ( S ) ; ssCallAccelRunBlock ( S , 129 , 1103 ,
SS_CALL_MDL_OUTPUTS ) ; ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm
, "nodes32/Control/Data Store Read" , NULL ) ; memcpy ( & _rtB -> arwgtnoh4h
[ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 5U ) ;
ssCallAccelRunBlock ( S , 129 , 1105 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes32/Control/Data Store Read1" , NULL ) ; memcpy ( & _rtB -> arwgtnoh4h [
0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 5U ) ;
ssCallAccelRunBlock ( S , 129 , 1107 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes32/Control/Data Store Read2" , NULL ) ; memcpy ( & _rtB -> arwgtnoh4h [
0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 5U ) ;
ssCallAccelRunBlock ( S , 129 , 1109 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes32/Control/Data Store Read3" , NULL ) ; memcpy ( & _rtB -> arwgtnoh4h [
0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 5U ) ;
ssCallAccelRunBlock ( S , 129 , 1111 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> jquzg2wztj ,
"nodes32/Control/Data Store Read4" , NULL ) ; memcpy ( & _rtB -> arwgtnoh4h [
0 ] , & _rtDW -> aboia0klkk [ 0 ] , sizeof ( real_T ) << 5U ) ;
ssCallAccelRunBlock ( S , 129 , 1113 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> m1d1zu5yxt ,
"nodes32/Control/Data Store Read5" , NULL ) ; memcpy ( & _rtB -> arwgtnoh4h [
0 ] , & _rtDW -> fmmswgsion [ 0 ] , sizeof ( real_T ) << 5U ) ;
ssCallAccelRunBlock ( S , 129 , 1115 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
hpyrfrr2f0 = _rtP -> P_852 * dh2byt1o2j [ 0 ] ; _rtB -> ewhbarncyb = _rtP ->
P_853 * dh2byt1o2j [ 1 ] ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { n3qi1whofz * _rtB ;
ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtB
= ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; if ( ssIsSampleHit ( S , 1 , 0 )
) { _rtDW -> di1dojol2y = _rtB -> hpyrfrr2f0 ; _rtDW -> llaxuqjha5 = _rtB ->
ewhbarncyb ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { int_T is ; int_T ci ; static
const uint8_T ir [ 127 ] = { 0U , 2U , 4U , 6U , 8U , 10U , 12U , 14U , 16U ,
18U , 20U , 22U , 24U , 26U , 28U , 30U , 32U , 34U , 36U , 38U , 40U , 42U ,
44U , 46U , 48U , 50U , 52U , 54U , 56U , 58U , 60U , 62U , 64U , 66U , 68U ,
70U , 72U , 74U , 76U , 78U , 80U , 82U , 84U , 86U , 88U , 90U , 92U , 94U ,
96U , 98U , 100U , 102U , 104U , 106U , 108U , 110U , 112U , 114U , 116U ,
118U , 120U , 122U , 124U , 125U , 126U , 127U , 128U , 129U , 130U , 131U ,
132U , 133U , 134U , 135U , 136U , 137U , 138U , 139U , 140U , 141U , 142U ,
143U , 144U , 145U , 146U , 147U , 148U , 149U , 150U , 151U , 152U , 153U ,
154U , 155U , 156U , 157U , 158U , 159U , 160U , 161U , 162U , 163U , 164U ,
165U , 166U , 167U , 168U , 169U , 170U , 171U , 172U , 173U , 174U , 175U ,
176U , 177U , 178U , 179U , 180U , 181U , 182U , 183U , 184U , 185U , 186U ,
187U , 188U } ; static const int8_T jc [ 188 ] = { 2 , 6 , 3 , 7 , 2 , 4 , 3
, 5 , 56 , 58 , 57 , 59 , 54 , 56 , 55 , 57 , 44 , 60 , 45 , 61 , 0 , 22 , 1
, 23 , 22 , 36 , 23 , 37 , 34 , 50 , 35 , 51 , 0 , 52 , 1 , 53 , 18 , 24 , 19
, 25 , 18 , 20 , 19 , 21 , 40 , 42 , 41 , 43 , 38 , 40 , 39 , 41 , 36 , 46 ,
37 , 47 , 16 , 34 , 17 , 35 , 34 , 38 , 35 , 39 , 18 , 32 , 19 , 33 , 46 , 48
, 47 , 49 , 26 , 28 , 27 , 29 , 22 , 54 , 23 , 55 , 24 , 26 , 25 , 27 , 20 ,
30 , 21 , 31 , 18 , 48 , 19 , 49 , 34 , 36 , 35 , 37 , 2 , 14 , 3 , 15 , 60 ,
62 , 61 , 63 , 8 , 10 , 9 , 11 , 6 , 8 , 7 , 9 , 4 , 12 , 5 , 13 , 2 , 62 , 3
, 63 , 22 , 44 , 23 , 45 , 60 , 61 , 58 , 59 , 56 , 57 , 54 , 55 , 44 , 45 ,
46 , 47 , 42 , 43 , 40 , 41 , 38 , 39 , 22 , 23 , 36 , 37 , 50 , 51 , 34 , 35
, 16 , 17 , 30 , 31 , 28 , 29 , 26 , 27 , 24 , 25 , 20 , 21 , 32 , 33 , 0 , 1
, 18 , 19 , 48 , 49 , 12 , 13 , 10 , 11 , 8 , 9 , 6 , 7 , 4 , 5 , 14 , 15 , 2
, 3 , 62 , 63 , 52 , 53 } ; n3qi1whofz * _rtB ; loikxjbxjg * _rtP ;
f1xhd02yjc * _rtX ; pqmvzr1kvu * _rtXdot ; _rtXdot = ( ( pqmvzr1kvu * )
ssGetdX ( S ) ) ; _rtX = ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ; _rtP =
( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * )
_ssGetBlockIO ( S ) ) ; for ( is = 0 ; is < 126 ; is ++ ) { _rtXdot ->
kn4zrfum1e [ is ] = 0.0 ; } for ( is = 0 ; is < 126 ; is ++ ) { for ( ci = is
; ci < is + 1 ; ci ++ ) { _rtXdot -> kn4zrfum1e [ is ] += _rtP -> P_710 [ ci
] * _rtX -> kn4zrfum1e [ ci ] ; } } for ( is = 0 ; is < 126 ; is ++ ) { for (
ci = ir [ is ] ; ci < ir [ is + 1 ] ; ci ++ ) { _rtXdot -> kn4zrfum1e [ is ]
+= _rtP -> P_711 [ ci ] * _rtB -> igmmw1b524 [ jc [ ci ] ] ; } } }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ;
_rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S ,
129 , 1 , SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 14 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 15 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 16 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 17 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 18 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 19 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 20 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 21 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 22 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 23 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 24 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 25 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 26 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 27 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 28 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 29 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 30 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 31 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 32 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 33 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 34 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 35 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 36 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 37 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 38 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 39 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 40 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 41 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 42 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 43 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 44 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 129 , 1099 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; } static void mdlInitializeSizes ( SimStruct *
S ) { ssSetChecksumVal ( S , 0 , 1284132477U ) ; ssSetChecksumVal ( S , 1 ,
3879104134U ) ; ssSetChecksumVal ( S , 2 , 198778367U ) ; ssSetChecksumVal (
S , 3 , 1406513589U ) ; { mxArray * slVerStructMat = NULL ; mxArray *
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
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 33 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 34 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 35 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 36 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 37 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 38 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 39 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 40 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 41 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 42 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 43 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 44 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 45 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 46 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 47 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 48 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 49 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 50 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 51 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 52 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 53 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 54 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 55 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 56 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 57 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 58 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 59 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 60 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 61 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 62 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 63 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 64 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 65 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 66 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 67 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 68 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 69 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 70 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 71 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 72 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 73 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 74 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 75 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 76 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 77 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 78 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 79 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 80 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 81 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 82 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 83 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 84 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 85 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 86 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 87 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 88 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 89 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 90 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 91 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 92 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 93 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 94 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 95 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 96 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 97 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 98 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 99 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 100 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 101 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 102 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 103 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 104 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 105 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 106 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 107 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 108 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 109 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 110 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 111 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 112 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 113 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 114 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 115 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 116 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 117 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 118 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 119 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 120 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 121 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 122 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 123 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 124 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 125 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 126 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 127 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 128 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
