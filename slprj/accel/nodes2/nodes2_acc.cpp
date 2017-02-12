#include "__cf_nodes2.h"
#include <math.h>
#include "nodes2_acc.h"
#include "nodes2_acc_private.h"
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
biviakc0fm ; int_T iy ; int_T ci ; real_T eeslnumswv [ 6 ] ; static const
int8_T ir [ 7 ] = { 0 , 0 , 0 , 2 , 4 , 6 , 8 } ; static const int8_T ir_p [
7 ] = { 0 , 1 , 2 , 2 , 2 , 3 , 4 } ; static const int8_T jc [ 8 ] = { 0 , 4
, 1 , 5 , 0 , 2 , 1 , 3 } ; static const int8_T jc_p [ 4 ] = { 0 , 1 , 4 , 5
} ; n3qi1whofz * _rtB ; loikxjbxjg * _rtP ; f1xhd02yjc * _rtX ; ew10rzwqr2 *
_rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtX = ( (
f1xhd02yjc * ) ssGetContStates ( S ) ) ; _rtP = ( ( loikxjbxjg * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
ssReadFromDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes2/g1/measures/Data Store Read1" , NULL ) ; _rtB -> neaygcmljw [ 0 ] =
_rtDW -> h1t1phh10c [ 0 ] ; _rtB -> neaygcmljw [ 1 ] = _rtDW -> h1t1phh10c [
1 ] ; _rtB -> neaygcmljw [ 2 ] = _rtDW -> h1t1phh10c [ 2 ] ; _rtB ->
neaygcmljw [ 3 ] = _rtDW -> h1t1phh10c [ 3 ] ; if ( ssIsSampleHit ( S , 1 , 0
) ) { ssCallAccelRunBlock ( S , 9 , 1 , SS_CALL_MDL_OUTPUTS ) ; } if (
ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 1 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtDW -> h1t1phh10c [ 0 ] = _rtB -> hnwyjibwqn [ 0 ]
; _rtDW -> h1t1phh10c [ 1 ] = _rtB -> hnwyjibwqn [ 1 ] ; _rtDW -> h1t1phh10c
[ 2 ] = _rtB -> hnwyjibwqn [ 2 ] ; _rtDW -> h1t1phh10c [ 3 ] = _rtB ->
hnwyjibwqn [ 3 ] ; ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes2/g1/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes2/g1/measures/Data Store Read2" , NULL ) ; _rtB -> fd1ww0ofck [ 0 ] =
_rtDW -> foiy3odoz1 [ 0 ] ; _rtB -> fd1ww0ofck [ 1 ] = _rtDW -> foiy3odoz1 [
1 ] ; _rtB -> fd1ww0ofck [ 2 ] = _rtDW -> foiy3odoz1 [ 2 ] ; _rtB ->
fd1ww0ofck [ 3 ] = _rtDW -> foiy3odoz1 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 2 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
foiy3odoz1 [ 0 ] = _rtB -> b5dgsab0jz [ 0 ] ; _rtDW -> foiy3odoz1 [ 1 ] =
_rtB -> b5dgsab0jz [ 1 ] ; _rtDW -> foiy3odoz1 [ 2 ] = _rtB -> b5dgsab0jz [ 2
] ; _rtDW -> foiy3odoz1 [ 3 ] = _rtB -> b5dgsab0jz [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes2/g1/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes2/g1/measures/Data Store Read3" , NULL ) ; _rtB -> jxw2rzeb1a [ 0 ] =
_rtDW -> pizmexwruz [ 0 ] ; _rtB -> jxw2rzeb1a [ 1 ] = _rtDW -> pizmexwruz [
1 ] ; _rtB -> jxw2rzeb1a [ 2 ] = _rtDW -> pizmexwruz [ 2 ] ; _rtB ->
jxw2rzeb1a [ 3 ] = _rtDW -> pizmexwruz [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 3 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
pizmexwruz [ 0 ] = _rtB -> d22x0dugpi [ 0 ] ; _rtDW -> pizmexwruz [ 1 ] =
_rtB -> d22x0dugpi [ 1 ] ; _rtDW -> pizmexwruz [ 2 ] = _rtB -> d22x0dugpi [ 2
] ; _rtDW -> pizmexwruz [ 3 ] = _rtB -> d22x0dugpi [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes2/g1/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes2/g1/measures/Data Store Read4" , NULL ) ; _rtB -> olez3imehd [ 0 ] =
_rtDW -> k5wmx351m0 [ 0 ] ; _rtB -> olez3imehd [ 1 ] = _rtDW -> k5wmx351m0 [
1 ] ; _rtB -> olez3imehd [ 2 ] = _rtDW -> k5wmx351m0 [ 2 ] ; _rtB ->
olez3imehd [ 3 ] = _rtDW -> k5wmx351m0 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 4 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
k5wmx351m0 [ 0 ] = _rtB -> jcdxzkh4wk [ 0 ] ; _rtDW -> k5wmx351m0 [ 1 ] =
_rtB -> jcdxzkh4wk [ 1 ] ; _rtDW -> k5wmx351m0 [ 2 ] = _rtB -> jcdxzkh4wk [ 2
] ; _rtDW -> k5wmx351m0 [ 3 ] = _rtB -> jcdxzkh4wk [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes2/g1/measures/Data Store Write4" , NULL ) ; } if ( ssIsSampleHit ( S ,
1 , 0 ) ) { _rtB -> kptjd2t5mr = _rtP -> P_30 ; ssCallAccelRunBlock ( S , 9 ,
14 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> hh3lhgxvfk = _rtDW -> h31mfjlljs ; _rtB
-> hur4s2la4n = _rtDW -> efdih4dveq ; } biviakc0fm = ssGetT ( S ) ; _rtB ->
i0fnwdkzjh = ssGetTStart ( S ) ; biviakc0fm -= _rtB -> i0fnwdkzjh ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hofhbzneta = _rtP -> P_47 ; }
biviakc0fm = muDoubleScalarRem ( biviakc0fm , _rtB -> hofhbzneta ) ; _rtB ->
i1h31xcysz = look1_binlxpw ( biviakc0fm , * ( real_T ( * ) [ 4 ] ) & _rtP ->
P_49 [ 0 ] , * ( real_T ( * ) [ 4 ] ) & _rtP -> P_48 [ 0 ] , 3U ) ;
ssCallAccelRunBlock ( S , 0 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> hhlw32xsrs
[ 0 ] = _rtB -> jj55n2ipz5 [ 4 ] ; _rtB -> hhlw32xsrs [ 1 ] = _rtB ->
jj55n2ipz5 [ 5 ] ; _rtB -> hhlw32xsrs [ 2 ] = _rtB -> c5kdgzmb1o [ 4 ] ; _rtB
-> hhlw32xsrs [ 3 ] = _rtB -> c5kdgzmb1o [ 5 ] ; _rtB -> hhlw32xsrs [ 4 ] =
_rtB -> hahkwn1qkd ; _rtB -> hhlw32xsrs [ 5 ] = _rtB -> ifuuwgao1a ; for ( iy
= 0 ; iy < 6 ; iy ++ ) { eeslnumswv [ iy ] = 0.0 ; } for ( iy = 0 ; iy < 6 ;
iy ++ ) { for ( ci = ir [ iy ] ; ci < ir [ iy + 1 ] ; ci ++ ) { eeslnumswv [
iy ] += _rtP -> P_52 [ ci ] * _rtX -> jqdufexgzv [ jc [ ci ] ] ; } } for ( iy
= 0 ; iy < 6 ; iy ++ ) { for ( ci = ir_p [ iy ] ; ci < ir_p [ iy + 1 ] ; ci
++ ) { eeslnumswv [ iy ] += _rtP -> P_53 [ ci ] * _rtB -> hhlw32xsrs [ jc_p [
ci ] ] ; } } _rtB -> gszcgvzyau = _rtP -> P_55 * eeslnumswv [ 5 ] ; _rtB ->
n4lkt1dtai = _rtP -> P_56 * eeslnumswv [ 4 ] ; ssReadFromDataStoreWithPath (
S , _rtDW -> gakv1pwvvm , "nodes2/g4/measures/Data Store Read1" , NULL ) ;
_rtB -> ofknbq3zrb [ 0 ] = _rtDW -> h1t1phh10c [ 0 ] ; _rtB -> ofknbq3zrb [ 1
] = _rtDW -> h1t1phh10c [ 1 ] ; _rtB -> ofknbq3zrb [ 2 ] = _rtDW ->
h1t1phh10c [ 2 ] ; _rtB -> ofknbq3zrb [ 3 ] = _rtDW -> h1t1phh10c [ 3 ] ; if
( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 5 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtDW -> h1t1phh10c [ 0 ] = _rtB -> mk30kob5pm [ 0 ]
; _rtDW -> h1t1phh10c [ 1 ] = _rtB -> mk30kob5pm [ 1 ] ; _rtDW -> h1t1phh10c
[ 2 ] = _rtB -> mk30kob5pm [ 2 ] ; _rtDW -> h1t1phh10c [ 3 ] = _rtB ->
mk30kob5pm [ 3 ] ; ssWriteToDataStoreWithPath ( S , _rtDW -> gakv1pwvvm ,
"nodes2/g4/measures/Data Store Write1" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes2/g4/measures/Data Store Read2" , NULL ) ; _rtB -> inonkzkvbu [ 0 ] =
_rtDW -> foiy3odoz1 [ 0 ] ; _rtB -> inonkzkvbu [ 1 ] = _rtDW -> foiy3odoz1 [
1 ] ; _rtB -> inonkzkvbu [ 2 ] = _rtDW -> foiy3odoz1 [ 2 ] ; _rtB ->
inonkzkvbu [ 3 ] = _rtDW -> foiy3odoz1 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 6 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
foiy3odoz1 [ 0 ] = _rtB -> f5laecrzmz [ 0 ] ; _rtDW -> foiy3odoz1 [ 1 ] =
_rtB -> f5laecrzmz [ 1 ] ; _rtDW -> foiy3odoz1 [ 2 ] = _rtB -> f5laecrzmz [ 2
] ; _rtDW -> foiy3odoz1 [ 3 ] = _rtB -> f5laecrzmz [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes2/g4/measures/Data Store Write2" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes2/g4/measures/Data Store Read3" , NULL ) ; _rtB -> pv0ezqw0vd [ 0 ] =
_rtDW -> pizmexwruz [ 0 ] ; _rtB -> pv0ezqw0vd [ 1 ] = _rtDW -> pizmexwruz [
1 ] ; _rtB -> pv0ezqw0vd [ 2 ] = _rtDW -> pizmexwruz [ 2 ] ; _rtB ->
pv0ezqw0vd [ 3 ] = _rtDW -> pizmexwruz [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 7 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
pizmexwruz [ 0 ] = _rtB -> cdmnhsfhw3 [ 0 ] ; _rtDW -> pizmexwruz [ 1 ] =
_rtB -> cdmnhsfhw3 [ 1 ] ; _rtDW -> pizmexwruz [ 2 ] = _rtB -> cdmnhsfhw3 [ 2
] ; _rtDW -> pizmexwruz [ 3 ] = _rtB -> cdmnhsfhw3 [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes2/g4/measures/Data Store Write3" , NULL ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes2/g4/measures/Data Store Read4" , NULL ) ; _rtB -> jclt5ynocy [ 0 ] =
_rtDW -> k5wmx351m0 [ 0 ] ; _rtB -> jclt5ynocy [ 1 ] = _rtDW -> k5wmx351m0 [
1 ] ; _rtB -> jclt5ynocy [ 2 ] = _rtDW -> k5wmx351m0 [ 2 ] ; _rtB ->
jclt5ynocy [ 3 ] = _rtDW -> k5wmx351m0 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0
) ) { ssCallAccelRunBlock ( S , 8 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtDW ->
k5wmx351m0 [ 0 ] = _rtB -> hnlqsv44rw [ 0 ] ; _rtDW -> k5wmx351m0 [ 1 ] =
_rtB -> hnlqsv44rw [ 1 ] ; _rtDW -> k5wmx351m0 [ 2 ] = _rtB -> hnlqsv44rw [ 2
] ; _rtDW -> k5wmx351m0 [ 3 ] = _rtB -> hnlqsv44rw [ 3 ] ;
ssWriteToDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes2/g4/measures/Data Store Write4" , NULL ) ; } if ( ssIsSampleHit ( S ,
1 , 0 ) ) { _rtB -> ikv4noptl5 = _rtP -> P_57 ; } _rtB -> ikpdhwxqd1 = _rtP
-> P_58 * eeslnumswv [ 3 ] ; _rtB -> mqiq40boxo = _rtP -> P_59 * eeslnumswv [
2 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 9 , 79 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 9 , 80 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 9 , 81 ,
SS_CALL_MDL_OUTPUTS ) ; } _rtB -> iu0c4cn4w3 = ssGetT ( S ) ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 9 , 83 ,
SS_CALL_MDL_OUTPUTS ) ; } ssReadFromDataStoreWithPath ( S , _rtDW ->
gakv1pwvvm , "nodes2/Control/Data Store Read" , NULL ) ; _rtB -> dt4cp5xl3x [
0 ] = _rtDW -> h1t1phh10c [ 0 ] ; _rtB -> dt4cp5xl3x [ 1 ] = _rtDW ->
h1t1phh10c [ 1 ] ; _rtB -> dt4cp5xl3x [ 2 ] = _rtDW -> h1t1phh10c [ 2 ] ;
_rtB -> dt4cp5xl3x [ 3 ] = _rtDW -> h1t1phh10c [ 3 ] ; if ( ssIsSampleHit ( S
, 2 , 0 ) ) { ssCallAccelRunBlock ( S , 9 , 85 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> ivmk2fwp5x ,
"nodes2/Control/Data Store Read1" , NULL ) ; _rtB -> j2pxvabe0u [ 0 ] = _rtDW
-> foiy3odoz1 [ 0 ] ; _rtB -> j2pxvabe0u [ 1 ] = _rtDW -> foiy3odoz1 [ 1 ] ;
_rtB -> j2pxvabe0u [ 2 ] = _rtDW -> foiy3odoz1 [ 2 ] ; _rtB -> j2pxvabe0u [ 3
] = _rtDW -> foiy3odoz1 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 9 , 87 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> dgn0vobid0 ,
"nodes2/Control/Data Store Read2" , NULL ) ; _rtB -> gnykueepze [ 0 ] = _rtDW
-> pizmexwruz [ 0 ] ; _rtB -> gnykueepze [ 1 ] = _rtDW -> pizmexwruz [ 1 ] ;
_rtB -> gnykueepze [ 2 ] = _rtDW -> pizmexwruz [ 2 ] ; _rtB -> gnykueepze [ 3
] = _rtDW -> pizmexwruz [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 9 , 89 , SS_CALL_MDL_OUTPUTS ) ; }
ssReadFromDataStoreWithPath ( S , _rtDW -> jjmar5x2j0 ,
"nodes2/Control/Data Store Read3" , NULL ) ; _rtB -> gah4ea20jn [ 0 ] = _rtDW
-> k5wmx351m0 [ 0 ] ; _rtB -> gah4ea20jn [ 1 ] = _rtDW -> k5wmx351m0 [ 1 ] ;
_rtB -> gah4ea20jn [ 2 ] = _rtDW -> k5wmx351m0 [ 2 ] ; _rtB -> gah4ea20jn [ 3
] = _rtDW -> k5wmx351m0 [ 3 ] ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 9 , 91 , SS_CALL_MDL_OUTPUTS ) ; } _rtB ->
kfxxwm2c31 = _rtP -> P_102 * eeslnumswv [ 0 ] ; _rtB -> a5ariexsln = _rtP ->
P_103 * eeslnumswv [ 1 ] ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { n3qi1whofz * _rtB ;
ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtB
= ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; if ( ssIsSampleHit ( S , 1 , 0 )
) { _rtDW -> h31mfjlljs = _rtB -> kfxxwm2c31 ; _rtDW -> efdih4dveq = _rtB ->
a5ariexsln ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { int_T is ; int_T ci ; static
const int8_T ir [ 7 ] = { 0 , 2 , 4 , 5 , 6 , 7 , 8 } ; static const int8_T
jc [ 8 ] = { 0 , 2 , 1 , 3 , 0 , 1 , 2 , 3 } ; n3qi1whofz * _rtB ; loikxjbxjg
* _rtP ; f1xhd02yjc * _rtX ; pqmvzr1kvu * _rtXdot ; _rtXdot = ( ( pqmvzr1kvu
* ) ssGetdX ( S ) ) ; _rtX = ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ;
_rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz *
) _ssGetBlockIO ( S ) ) ; for ( is = 0 ; is < 6 ; is ++ ) { _rtXdot ->
jqdufexgzv [ is ] = 0.0 ; } for ( is = 0 ; is < 6 ; is ++ ) { for ( ci = is ;
ci < is + 1 ; ci ++ ) { _rtXdot -> jqdufexgzv [ is ] += _rtP -> P_50 [ ci ] *
_rtX -> jqdufexgzv [ ci ] ; } } for ( is = 0 ; is < 6 ; is ++ ) { for ( ci =
ir [ is ] ; ci < ir [ is + 1 ] ; ci ++ ) { _rtXdot -> jqdufexgzv [ is ] +=
_rtP -> P_51 [ ci ] * _rtB -> hhlw32xsrs [ jc [ ci ] ] ; } } }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ;
_rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S , 9
, 1 , SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 9 , 14 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; ssCallAccelRunBlock ( S , 9 , 79 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; } static void mdlInitializeSizes ( SimStruct *
S ) { ssSetChecksumVal ( S , 0 , 3978529734U ) ; ssSetChecksumVal ( S , 1 ,
628101517U ) ; ssSetChecksumVal ( S , 2 , 1136876434U ) ; ssSetChecksumVal (
S , 3 , 3580820207U ) ; { mxArray * slVerStructMat = NULL ; mxArray *
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
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
