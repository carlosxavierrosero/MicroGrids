#include "__cf_nodes16.h"
#include <math.h>
#include "nodes16_acc.h"
#include "nodes16_acc_private.h"
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
lazn5eo4c5 ; int_T iy ; int_T ci ; real_T gfnlarkx0w [ 34 ] ; static const
int8_T ir [ 35 ] = { 0 , 0 , 0 , 3 , 6 , 9 , 12 , 15 , 18 , 21 , 24 , 27 , 30
, 32 , 34 , 37 , 40 , 43 , 46 , 48 , 50 , 53 , 56 , 59 , 62 , 65 , 68 , 71 ,
74 , 77 , 80 , 83 , 86 , 89 , 92 } ; static const int8_T ir_p [ 35 ] = { 0 ,
1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 3 , 4
, 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 } ; static const
int8_T jc [ 92 ] = { 8 , 16 , 30 , 9 , 17 , 31 , 24 , 26 , 58 , 25 , 27 , 59
, 4 , 8 , 32 , 5 , 9 , 33 , 4 , 6 , 34 , 5 , 7 , 35 , 6 , 14 , 36 , 7 , 15 ,
37 , 12 , 60 , 13 , 61 , 14 , 28 , 38 , 15 , 29 , 39 , 10 , 28 , 42 , 11 , 29
, 43 , 22 , 46 , 23 , 47 , 18 , 22 , 48 , 19 , 23 , 49 , 18 , 20 , 50 , 19 ,
21 , 51 , 0 , 20 , 52 , 1 , 21 , 53 , 16 , 26 , 40 , 17 , 27 , 41 , 0 , 2 ,
54 , 1 , 3 , 55 , 2 , 24 , 56 , 3 , 25 , 57 , 10 , 12 , 44 , 11 , 13 , 45 } ;
static const int8_T jc_p [ 4 ] = { 14 , 15 , 32 , 33 } ; n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; f1xhd02yjc * _rtX ; ew10rzwqr2 * _rtDW ; _rtDW = ( (
ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtX = ( ( f1xhd02yjc * )
ssGetContStates ( S ) ) ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) )
; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes16/g1/measures/Data Store Read1" , NULL ) ; memcpy ( & _rtB ->
a345tunasz [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 65 , 1 ,
SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 1 , 0 , SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW ->
h1t1phh10c [ 0 ] , & _rtB -> go35sgtiat [ 0 ] , sizeof ( real_T ) << 4U ) ;
ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes16/g1/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g1/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
otvqqy4hhy [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 2 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
c5zqunl14i [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g1/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g1/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
e5qhoe3a4g [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 3 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
dspydgacf5 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g1/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g1/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
ggxmm5mofo [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 4 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
mundg2nud5 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g1/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> n5ju1rc1jw = _rtP -> P_142 ;
ssCallAccelRunBlock ( S , 65 , 14 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 15 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 16 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 17 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 18 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 19 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 20 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 21 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 22 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 23 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 24 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 25 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 26 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 27 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 28 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
h0nfldoe55 = _rtDW -> lzhherik4k ; _rtB -> fh0n3ot4vt = _rtDW -> civoajtuzs ;
} lazn5eo4c5 = ssGetT ( S ) ; _rtB -> nlwo5huqkd = ssGetTStart ( S ) ;
lazn5eo4c5 -= _rtB -> nlwo5huqkd ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> dbshcj4xeq = _rtP -> P_355 ; } lazn5eo4c5 = muDoubleScalarRem ( lazn5eo4c5
, _rtB -> dbshcj4xeq ) ; _rtB -> c2tdn1ipus = look1_binlxpw ( lazn5eo4c5 ,
_rtP -> P_357 , _rtP -> P_356 , 3U ) ; ssCallAccelRunBlock ( S , 0 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> h4wqsr2yac [ 0 ] = _rtB -> ii1bqab2ea [ 4 ] ;
_rtB -> h4wqsr2yac [ 1 ] = _rtB -> ii1bqab2ea [ 5 ] ; _rtB -> h4wqsr2yac [ 2
] = _rtB -> kitibb21vm [ 4 ] ; _rtB -> h4wqsr2yac [ 3 ] = _rtB -> kitibb21vm
[ 5 ] ; _rtB -> h4wqsr2yac [ 4 ] = _rtB -> mddhcu0mky [ 4 ] ; _rtB ->
h4wqsr2yac [ 5 ] = _rtB -> mddhcu0mky [ 5 ] ; _rtB -> h4wqsr2yac [ 6 ] = _rtB
-> bilh0e33nv [ 4 ] ; _rtB -> h4wqsr2yac [ 7 ] = _rtB -> bilh0e33nv [ 5 ] ;
_rtB -> h4wqsr2yac [ 8 ] = _rtB -> o05kwtjrt4 [ 4 ] ; _rtB -> h4wqsr2yac [ 9
] = _rtB -> o05kwtjrt4 [ 5 ] ; _rtB -> h4wqsr2yac [ 10 ] = _rtB -> hlvpxyv1o0
[ 4 ] ; _rtB -> h4wqsr2yac [ 11 ] = _rtB -> hlvpxyv1o0 [ 5 ] ; _rtB ->
h4wqsr2yac [ 12 ] = _rtB -> kglijxzprx [ 4 ] ; _rtB -> h4wqsr2yac [ 13 ] =
_rtB -> kglijxzprx [ 5 ] ; _rtB -> h4wqsr2yac [ 14 ] = _rtB -> equ50yigse [ 4
] ; _rtB -> h4wqsr2yac [ 15 ] = _rtB -> equ50yigse [ 5 ] ; _rtB -> h4wqsr2yac
[ 16 ] = _rtB -> bmzlndp1s4 [ 4 ] ; _rtB -> h4wqsr2yac [ 17 ] = _rtB ->
bmzlndp1s4 [ 5 ] ; _rtB -> h4wqsr2yac [ 18 ] = _rtB -> ekpewrohyx [ 4 ] ;
_rtB -> h4wqsr2yac [ 19 ] = _rtB -> ekpewrohyx [ 5 ] ; _rtB -> h4wqsr2yac [
20 ] = _rtB -> pjbzkarpny [ 4 ] ; _rtB -> h4wqsr2yac [ 21 ] = _rtB ->
pjbzkarpny [ 5 ] ; _rtB -> h4wqsr2yac [ 22 ] = _rtB -> eri2knxcfn [ 4 ] ;
_rtB -> h4wqsr2yac [ 23 ] = _rtB -> eri2knxcfn [ 5 ] ; _rtB -> h4wqsr2yac [
24 ] = _rtB -> cftoyrm2i0 [ 4 ] ; _rtB -> h4wqsr2yac [ 25 ] = _rtB ->
cftoyrm2i0 [ 5 ] ; _rtB -> h4wqsr2yac [ 26 ] = _rtB -> heftnxjtkx [ 4 ] ;
_rtB -> h4wqsr2yac [ 27 ] = _rtB -> heftnxjtkx [ 5 ] ; _rtB -> h4wqsr2yac [
28 ] = _rtB -> ikggxhxbmq [ 4 ] ; _rtB -> h4wqsr2yac [ 29 ] = _rtB ->
ikggxhxbmq [ 5 ] ; _rtB -> h4wqsr2yac [ 30 ] = _rtB -> j4qul4jqpx [ 4 ] ;
_rtB -> h4wqsr2yac [ 31 ] = _rtB -> j4qul4jqpx [ 5 ] ; _rtB -> h4wqsr2yac [
32 ] = _rtB -> pf0dyyxeth ; _rtB -> h4wqsr2yac [ 33 ] = _rtB -> emnimclij5 ;
for ( iy = 0 ; iy < 34 ; iy ++ ) { gfnlarkx0w [ iy ] = 0.0 ; } for ( iy = 0 ;
iy < 34 ; iy ++ ) { for ( ci = ir [ iy ] ; ci < ir [ iy + 1 ] ; ci ++ ) {
gfnlarkx0w [ iy ] += _rtP -> P_360 [ ci ] * _rtX -> b0ekplqduk [ jc [ ci ] ]
; } } for ( iy = 0 ; iy < 34 ; iy ++ ) { for ( ci = ir_p [ iy ] ; ci < ir_p [
iy + 1 ] ; ci ++ ) { gfnlarkx0w [ iy ] += _rtP -> P_361 [ ci ] * _rtB ->
h4wqsr2yac [ jc_p [ ci ] ] ; } } _rtB -> nepo0ogldc = _rtP -> P_363 *
gfnlarkx0w [ 33 ] ; _rtB -> hoiovuacao = _rtP -> P_364 * gfnlarkx0w [ 32 ] ;
ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes16/g10/measures/Data Store Read1" , NULL ) ; memcpy ( & _rtB ->
e33mfew3g5 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 5 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
fb4xkd0ec1 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g10/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g10/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
b5sbjbyq2w [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 6 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
kzokoumh0a [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g10/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g10/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
avig50cib1 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 7 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ewvzvq5aqy [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g10/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g10/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
huswrkyuk5 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 8 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
pcphvpkqpg [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g10/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> foj5ewr1lt = _rtP -> P_365 ; }
_rtB -> krpnhyexan = _rtP -> P_366 * gfnlarkx0w [ 31 ] ; _rtB -> lhwd34bzbg =
_rtP -> P_367 * gfnlarkx0w [ 30 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g11/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> aec1qdsarv [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 9 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
bldwmy4x20 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g11/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g11/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
opgyfm2ipt [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 10 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
j2o3trtota [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g11/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g11/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
i3o5agnfe2 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 11 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ewgkpohhoy [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g11/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g11/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
dc3d5gtkdz [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 12 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
ihdjh4xoxs [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g11/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> avigxeooxm = _rtP -> P_368 ; }
_rtB -> chxkf053oz = _rtP -> P_369 * gfnlarkx0w [ 29 ] ; _rtB -> jlqussfqq0 =
_rtP -> P_370 * gfnlarkx0w [ 28 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g12/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> ifxjh0miid [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 13 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
nl2uj4khpx [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g12/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g12/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
pyi00yr3bd [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 14 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
obt15dd1zz [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g12/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g12/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
dfozacmyli [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 15 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
j3a4jw4jj4 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g12/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g12/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
nz0eigl3o5 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 16 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
nu2pwirijs [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g12/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> j0r2k4rodc = _rtP -> P_371 ; }
_rtB -> pawmk3hzfs = _rtP -> P_372 * gfnlarkx0w [ 27 ] ; _rtB -> m1f5t1uvxg =
_rtP -> P_373 * gfnlarkx0w [ 26 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g13/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> nvo3uww1bt [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 17 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
e5oymvxbwi [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g13/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g13/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ptt3ssmq5w [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 18 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
h51ubzf5gc [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g13/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g13/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
ho0yi20ffu [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 19 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
hixeivuczs [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g13/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g13/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
i2oxtmxbff [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 20 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
p1pft00cj3 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g13/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hynqak524n = _rtP -> P_374 ; }
_rtB -> oqlzyns2wc = _rtP -> P_375 * gfnlarkx0w [ 25 ] ; _rtB -> nkgwcgxj0a =
_rtP -> P_376 * gfnlarkx0w [ 24 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g14/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> o23atehegw [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 21 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
mhuxq30kju [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g14/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g14/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
oxfddsqet2 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 22 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
edzk4valxy [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g14/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g14/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
gzbfjntoaq [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 23 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
dtph0fp2ds [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g14/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g14/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
f1uc4dq5ev [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 24 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
phdi0wxtgz [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g14/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> ejaeg4wuzq = _rtP -> P_377 ; }
_rtB -> c4foj3b1wy = _rtP -> P_378 * gfnlarkx0w [ 23 ] ; _rtB -> p5al5jxp4y =
_rtP -> P_379 * gfnlarkx0w [ 22 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g15/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> bjtrja4xql [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 25 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
hwqlsvtmq5 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g15/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g15/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
evrlaoznjj [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 26 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
kmup0tihez [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g15/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g15/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
hcykxvxrk1 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 27 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ajekddbfh0 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g15/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g15/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
bxdnwi2pqc [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 28 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
iow0pwbzlz [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g15/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> edxnzvh41b = _rtP -> P_380 ; }
_rtB -> ey1gqilzui = _rtP -> P_381 * gfnlarkx0w [ 21 ] ; _rtB -> hklt43llzt =
_rtP -> P_382 * gfnlarkx0w [ 20 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g16/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> p332uyxsw5 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 29 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
noo0ec4uhx [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g16/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g16/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ctogpz3in0 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 30 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
gykzlitp5m [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g16/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g16/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
ksj1pjgtfk [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 31 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
hq1f144cgq [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g16/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g16/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
pawpg34px0 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 32 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
nz1djip1ob [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g16/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> aupndsb1jh = _rtP -> P_383 ; }
_rtB -> hwzoicac2s = _rtP -> P_384 * gfnlarkx0w [ 19 ] ; _rtB -> ojg0urvafn =
_rtP -> P_385 * gfnlarkx0w [ 18 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g2/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> cj3pt54clc [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 33 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
lbvkqdkywh [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g2/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g2/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ojyr5adfgm [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 34 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
ccolcriusz [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g2/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g2/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
kxhfaqizx2 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 35 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
kurmcjf1kk [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g2/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g2/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
ak042d0dqw [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 36 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
phienayyah [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g2/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> pew5gtdcnn = _rtP -> P_386 ; }
_rtB -> cbqcnwlvpc = _rtP -> P_387 * gfnlarkx0w [ 17 ] ; _rtB -> ccdwvgla01 =
_rtP -> P_388 * gfnlarkx0w [ 16 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g3/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> aoe2i2pjg2 [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 37 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
kihgkpvazi [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g3/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g3/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
p0kvimfnbv [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 38 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
it1bcqwbu0 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g3/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g3/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
gqlap2hvoj [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 39 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
o40xn3jnnp [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g3/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g3/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
lurbfnn21p [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 40 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
i5jcsfkrds [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g3/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> khixzwnqvk = _rtP -> P_389 ; }
_rtB -> bmkqj51eb1 = _rtP -> P_390 * gfnlarkx0w [ 15 ] ; _rtB -> fd5b42bvok =
_rtP -> P_391 * gfnlarkx0w [ 14 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g4/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> f4eej0a0xr [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 41 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
n1cby4wity [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g4/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g4/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
fmjccokgad [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 42 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
mmk4oo5igk [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g4/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g4/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
a3gvpkqbyk [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 43 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
mdvnfo0dmz [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g4/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g4/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
almrzohddp [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 44 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
oaxksaqpvj [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g4/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> pn3z3zsbge = _rtP -> P_392 ; }
_rtB -> pnlg0hvnwz = _rtP -> P_393 * gfnlarkx0w [ 13 ] ; _rtB -> onfy5zhe3a =
_rtP -> P_394 * gfnlarkx0w [ 12 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g5/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> jtptsafskx [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 45 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
jp4k3cvkys [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g5/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g5/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
f20aqclxgj [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 46 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
bonzjipweb [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g5/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g5/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
lly0n5tdj4 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 47 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
ofv1ewgiyh [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g5/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g5/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
esiwgu44se [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 48 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
o3jydne1db [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g5/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> cfihxkgjq2 = _rtP -> P_395 ; }
_rtB -> pqe5etot0z = _rtP -> P_396 * gfnlarkx0w [ 11 ] ; _rtB -> pubes2mej1 =
_rtP -> P_397 * gfnlarkx0w [ 10 ] ; ssReadFromDataStoreWithPath ( S , _rtDW
-> gakv1pwvvm , "nodes16/g6/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> d00s1t4hnt [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 49 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
p0ipmxxhoy [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g6/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g6/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
idzqg2f4lq [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 50 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
c4montyp30 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g6/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g6/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
bcsq05cmu4 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 51 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
aolehi3wi0 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g6/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g6/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
nb0wlgwerq [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 52 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
bp4apikud3 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g6/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hsq2fmzwcs = _rtP -> P_398 ; }
_rtB -> opasnpq3nn = _rtP -> P_399 * gfnlarkx0w [ 9 ] ; _rtB -> dzgrdnm1mb =
_rtP -> P_400 * gfnlarkx0w [ 8 ] ; ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes16/g7/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> pa2d4ufn5l [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 53 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
anidsjbitu [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g7/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g7/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
ln30le4ude [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 54 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
gsxtsvdjjp [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g7/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g7/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
m5l1obnvy1 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 55 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
jlxwy4ag00 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g7/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g7/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
mftixlus1t [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 56 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
itb0bof0du [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g7/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> ovkf55ir2z = _rtP -> P_401 ; }
_rtB -> eril4ylebb = _rtP -> P_402 * gfnlarkx0w [ 7 ] ; _rtB -> ind1onklex =
_rtP -> P_403 * gfnlarkx0w [ 6 ] ; ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes16/g8/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> oboo3s2nsb [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 57 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
pmov3axdzo [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g8/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g8/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
fvllmcssyz [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 58 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
pqcdt1gp21 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g8/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g8/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
nn3shkgvzs [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 59 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
nfjiqqakh0 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g8/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g8/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
hfhfyo3lv3 [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 60 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
cc32gxm2ix [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g8/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> m5wdgmnt4h = _rtP -> P_404 ; }
_rtB -> pb4fj4j4xh = _rtP -> P_405 * gfnlarkx0w [ 5 ] ; _rtB -> khskvyejja =
_rtP -> P_406 * gfnlarkx0w [ 4 ] ; ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes16/g9/measures/Data Store Read1" , NULL ) ; memcpy ( &
_rtB -> pqy50lginb [ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) <<
4U ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 61 , 0
, SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> h1t1phh10c [ 0 ] , & _rtB ->
ljs0rsxma3 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> gakv1pwvvm , "nodes16/g9/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/g9/measures/Data Store Read2" , NULL ) ; memcpy ( & _rtB ->
dszph3qnv0 [ 0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 62 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> foiy3odoz1 [ 0 ] , & _rtB ->
lht5fmd05i [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> ivmk2fwp5x , "nodes16/g9/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/g9/measures/Data Store Read3" , NULL ) ; memcpy ( & _rtB ->
bs4xvx4uh3 [ 0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 63 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> pizmexwruz [ 0 ] , & _rtB ->
okzac5rwyr [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> dgn0vobid0 , "nodes16/g9/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/g9/measures/Data Store Read4" , NULL ) ; memcpy ( & _rtB ->
f4vdutxlrs [ 0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 64 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtDW -> k5wmx351m0 [ 0 ] , & _rtB ->
jsrcv45wq2 [ 0 ] , sizeof ( real_T ) << 4U ) ; ssWriteToDataStoreWithPath ( S
, _rtDW -> jjmar5x2j0 , "nodes16/g9/measures/Data Store Write4" , NULL ) ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mrqgenyiz2 = _rtP -> P_407 ; }
_rtB -> fqlwiaojr5 = _rtP -> P_408 * gfnlarkx0w [ 3 ] ; _rtB -> m1xgs1jp5z =
_rtP -> P_409 * gfnlarkx0w [ 2 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
ssCallAccelRunBlock ( S , 65 , 555 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 556 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 65 , 557 , SS_CALL_MDL_OUTPUTS ) ; } _rtB ->
oq4nudl5zh = ssGetT ( S ) ; ssCallAccelRunBlock ( S , 65 , 559 ,
SS_CALL_MDL_OUTPUTS ) ; ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm
, "nodes16/Control/Data Store Read" , NULL ) ; memcpy ( & _rtB -> gezbdee2jb
[ 0 ] , & _rtDW -> h1t1phh10c [ 0 ] , sizeof ( real_T ) << 4U ) ;
ssCallAccelRunBlock ( S , 65 , 561 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes16/Control/Data Store Read1" , NULL ) ; memcpy ( & _rtB -> gezbdee2jb [
0 ] , & _rtDW -> foiy3odoz1 [ 0 ] , sizeof ( real_T ) << 4U ) ;
ssCallAccelRunBlock ( S , 65 , 563 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes16/Control/Data Store Read2" , NULL ) ; memcpy ( & _rtB -> gezbdee2jb [
0 ] , & _rtDW -> pizmexwruz [ 0 ] , sizeof ( real_T ) << 4U ) ;
ssCallAccelRunBlock ( S , 65 , 565 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes16/Control/Data Store Read3" , NULL ) ; memcpy ( & _rtB -> gezbdee2jb [
0 ] , & _rtDW -> k5wmx351m0 [ 0 ] , sizeof ( real_T ) << 4U ) ;
ssCallAccelRunBlock ( S , 65 , 567 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> jquzg2wztj ,
"nodes16/Control/Data Store Read4" , NULL ) ; memcpy ( & _rtB -> gezbdee2jb [
0 ] , & _rtDW -> aboia0klkk [ 0 ] , sizeof ( real_T ) << 4U ) ;
ssCallAccelRunBlock ( S , 65 , 569 , SS_CALL_MDL_OUTPUTS ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> m1d1zu5yxt ,
"nodes16/Control/Data Store Read5" , NULL ) ; memcpy ( & _rtB -> gezbdee2jb [
0 ] , & _rtDW -> fmmswgsion [ 0 ] , sizeof ( real_T ) << 4U ) ;
ssCallAccelRunBlock ( S , 65 , 571 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
k2vrytdqng = _rtP -> P_452 * gfnlarkx0w [ 0 ] ; _rtB -> ce0blgy0w1 = _rtP ->
P_453 * gfnlarkx0w [ 1 ] ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { n3qi1whofz * _rtB ;
ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtB
= ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; if ( ssIsSampleHit ( S , 1 , 0 )
) { _rtDW -> lzhherik4k = _rtB -> k2vrytdqng ; _rtDW -> civoajtuzs = _rtB ->
ce0blgy0w1 ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { int_T is ; int_T ci ; static
const int8_T ir [ 63 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 14 , 16 , 18 , 20 ,
22 , 24 , 26 , 28 , 30 , 32 , 34 , 36 , 38 , 40 , 42 , 44 , 46 , 48 , 50 , 52
, 54 , 56 , 58 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70 , 71 ,
72 , 73 , 74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82 , 83 , 84 , 85 , 86 , 87
, 88 , 89 , 90 , 91 , 92 } ; static const int8_T jc [ 92 ] = { 4 , 8 , 5 , 9
, 2 , 4 , 3 , 5 , 24 , 26 , 25 , 27 , 22 , 24 , 23 , 25 , 26 , 30 , 27 , 31 ,
0 , 16 , 1 , 17 , 0 , 20 , 1 , 21 , 18 , 22 , 19 , 23 , 6 , 30 , 7 , 31 , 10
, 12 , 11 , 13 , 8 , 10 , 9 , 11 , 12 , 14 , 13 , 15 , 2 , 28 , 3 , 29 , 6 ,
28 , 7 , 29 , 16 , 18 , 17 , 19 , 30 , 31 , 26 , 27 , 24 , 25 , 22 , 23 , 18
, 19 , 6 , 7 , 16 , 17 , 0 , 1 , 14 , 15 , 12 , 13 , 10 , 11 , 8 , 9 , 4 , 5
, 2 , 3 , 28 , 29 , 20 , 21 } ; n3qi1whofz * _rtB ; loikxjbxjg * _rtP ;
f1xhd02yjc * _rtX ; pqmvzr1kvu * _rtXdot ; _rtXdot = ( ( pqmvzr1kvu * )
ssGetdX ( S ) ) ; _rtX = ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ; _rtP =
( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * )
_ssGetBlockIO ( S ) ) ; for ( is = 0 ; is < 62 ; is ++ ) { _rtXdot ->
b0ekplqduk [ is ] = 0.0 ; } for ( is = 0 ; is < 62 ; is ++ ) { for ( ci = is
; ci < is + 1 ; ci ++ ) { _rtXdot -> b0ekplqduk [ is ] += _rtP -> P_358 [ ci
] * _rtX -> b0ekplqduk [ ci ] ; } } for ( is = 0 ; is < 62 ; is ++ ) { for (
ci = ir [ is ] ; ci < ir [ is + 1 ] ; ci ++ ) { _rtXdot -> b0ekplqduk [ is ]
+= _rtP -> P_359 [ ci ] * _rtB -> h4wqsr2yac [ jc [ ci ] ] ; } } }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ;
_rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S ,
65 , 1 , SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 14 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 15 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 16 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 17 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 18 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 19 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 20 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 21 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 22 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 23 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 24 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 25 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 26 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 27 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 28 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 65 , 555 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; } static void mdlInitializeSizes ( SimStruct *
S ) { ssSetChecksumVal ( S , 0 , 4139196804U ) ; ssSetChecksumVal ( S , 1 ,
3100676970U ) ; ssSetChecksumVal ( S , 2 , 2848237269U ) ; ssSetChecksumVal (
S , 3 , 3722171474U ) ; { mxArray * slVerStructMat = NULL ; mxArray *
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
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
