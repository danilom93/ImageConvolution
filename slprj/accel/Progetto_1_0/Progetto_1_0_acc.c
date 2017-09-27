#include "__cf_Progetto_1_0.h"
#include <math.h>
#include "Progetto_1_0_acc.h"
#include "Progetto_1_0_acc_private.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T mrxdkyyu3a ;
uint16_T bkcquvelro ; boolean_T zcEvent ; ZCEventType zcEvent_p ; real_T
euwqtow2kn ; real_T bvaizlm3hu ; int32_T i ; nmrsf3ewec * _rtB ; n2clm314tw *
_rtP ; fvptmdff1l * _rtZCE ; cptjjmolnj * _rtDW ; _rtDW = ( ( cptjjmolnj * )
ssGetRootDWork ( S ) ) ; _rtZCE = ( ( fvptmdff1l * ) _ssGetPrevZCSigState ( S
) ) ; _rtP = ( ( n2clm314tw * ) ssGetDefaultParam ( S ) ) ; _rtB = ( (
nmrsf3ewec * ) _ssGetBlockIO ( S ) ) ; if ( _rtB -> l23zcoggf0 > 0.0 ) { if (
! _rtDW -> p0zorinmbo ) { ssCallAccelRunBlock ( S , 0 , 0 ,
SS_CALL_RTW_GENERATED_ENABLE ) ; ssCallAccelRunBlock ( S , 6 , 0 ,
SS_CALL_RTW_GENERATED_ENABLE ) ; ssCallAccelRunBlock ( S , 10 , 0 ,
SS_CALL_RTW_GENERATED_ENABLE ) ; ssCallAccelRunBlock ( S , 4 , 0 ,
SS_CALL_RTW_GENERATED_ENABLE ) ; ssCallAccelRunBlock ( S , 31 , 0 ,
SS_CALL_RTW_GENERATED_ENABLE ) ; _rtDW -> p0zorinmbo = true ; } } else { if (
_rtDW -> p0zorinmbo ) { ssCallAccelRunBlock ( S , 0 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; ssCallAccelRunBlock ( S , 6 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; ssCallAccelRunBlock ( S , 10 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; ssCallAccelRunBlock ( S , 4 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; if ( _rtDW -> jfmlfssfyo ) {
ssCallAccelRunBlock ( S , 8 , 0 , SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW ->
jfmlfssfyo = false ; } if ( _rtDW -> owg1faif2l ) { ssCallAccelRunBlock ( S ,
15 , 0 , SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW -> owg1faif2l = false ; } if
( _rtDW -> h5n3s3dq2r ) { ssCallAccelRunBlock ( S , 2 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW -> h5n3s3dq2r = false ; } if ( _rtDW
-> aq2bidj0zz ) { ssCallAccelRunBlock ( S , 20 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW -> aq2bidj0zz = false ; }
ssCallAccelRunBlock ( S , 31 , 0 , SS_CALL_RTW_GENERATED_DISABLE ) ; if (
_rtDW -> cbdjyzwulu ) { ssCallAccelRunBlock ( S , 18 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW -> cbdjyzwulu = false ; } _rtDW ->
p0zorinmbo = false ; } } if ( _rtDW -> p0zorinmbo ) { memcpy ( & _rtB ->
ei5nz554lr [ 0 ] , & _rtDW -> bj1vmiqn0n [ 0 ] , sizeof ( uint8_T ) << 16U )
; _rtB -> d5ywamrzl3 = _rtB -> ei5nz554lr [ ( int32_T ) _rtDW -> kcukn3uc0b ]
; ssCallAccelRunBlock ( S , 33 , 3 , SS_CALL_MDL_OUTPUTS ) ; mrxdkyyu3a = (
_rtDW -> m1dxasqdjb < _rtP -> P_15 ) && ( _rtDW -> m1dxasqdjb >= 0 ) ? _rtP
-> P_13 : 0.0 ; if ( _rtDW -> m1dxasqdjb >= _rtP -> P_14 - 1.0 ) { _rtDW ->
m1dxasqdjb = 0 ; } else { _rtDW -> m1dxasqdjb ++ ; } _rtB -> i4xlmgec4n = (
mrxdkyyu3a != 0.0 ) ; if ( _rtB -> i4xlmgec4n && ( _rtZCE -> hlv4h335bs !=
POS_ZCSIG ) ) { ssCallAccelRunBlock ( S , 0 , 0 , SS_CALL_MDL_OUTPUTS ) ;
mrxdkyyu3a = muDoubleScalarFloor ( _rtB -> psytxp1o4b ) ; if (
muDoubleScalarIsNaN ( mrxdkyyu3a ) || muDoubleScalarIsInf ( mrxdkyyu3a ) ) {
mrxdkyyu3a = 0.0 ; } else { mrxdkyyu3a = muDoubleScalarRem ( mrxdkyyu3a ,
256.0 ) ; } _rtB -> amtbqmxnku = ( uint8_T ) ( mrxdkyyu3a < 0.0 ? ( int32_T )
( uint8_T ) - ( int8_T ) ( uint8_T ) - mrxdkyyu3a : ( int32_T ) ( uint8_T )
mrxdkyyu3a ) ; _rtB -> dgzryvakfq = _rtB -> djli541cav ; _rtB -> ik4zygz3we =
_rtB -> fnveq430rv ; _rtB -> lndsmidx45 = _rtB -> ndv0fkhuz5 ; _rtB ->
dmps55nt4w = _rtB -> l3icvb2mnr ; _rtDW -> bvnazi05k2 = 4 ; } _rtZCE ->
hlv4h335bs = _rtB -> i4xlmgec4n ; _rtB -> kfs3yiv4ko = _rtB -> dmps55nt4w ;
if ( _rtB -> i4xlmgec4n && ( _rtZCE -> frvzzfmg5p != POS_ZCSIG ) ) {
ssCallAccelRunBlock ( S , 6 , 0 , SS_CALL_MDL_OUTPUTS ) ; mrxdkyyu3a =
muDoubleScalarFloor ( _rtB -> jhnkf15wsn ) ; if ( muDoubleScalarIsNaN (
mrxdkyyu3a ) || muDoubleScalarIsInf ( mrxdkyyu3a ) ) { mrxdkyyu3a = 0.0 ; }
else { mrxdkyyu3a = muDoubleScalarRem ( mrxdkyyu3a , 65536.0 ) ; } _rtB ->
kj3vqimcoe = ( uint16_T ) ( mrxdkyyu3a < 0.0 ? ( int32_T ) ( uint16_T ) - (
int16_T ) ( uint16_T ) - mrxdkyyu3a : ( int32_T ) ( uint16_T ) mrxdkyyu3a ) ;
_rtDW -> dd2bbhnnjl = 4 ; } _rtZCE -> frvzzfmg5p = _rtB -> i4xlmgec4n ; if (
_rtB -> i4xlmgec4n && ( _rtZCE -> dncxvlztf1 != POS_ZCSIG ) ) {
ssCallAccelRunBlock ( S , 10 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> chrvmayc3n
= _rtB -> ibkwlflupu ; _rtB -> pvx2y1eds3 = _rtB -> i0d2l21lrf ; _rtDW ->
nbbdv41jsd = 4 ; } _rtZCE -> dncxvlztf1 = _rtB -> i4xlmgec4n ; _rtB ->
eor3knmwgj = _rtDW -> ejt33hhxzs ; if ( _rtB -> i4xlmgec4n && ( _rtZCE ->
l0lrckgc3v != POS_ZCSIG ) ) { ssCallAccelRunBlock ( S , 4 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; mrxdkyyu3a = muDoubleScalarFloor ( _rtB -> jtyydrkllb
) ; if ( muDoubleScalarIsNaN ( mrxdkyyu3a ) || muDoubleScalarIsInf (
mrxdkyyu3a ) ) { mrxdkyyu3a = 0.0 ; } else { mrxdkyyu3a = muDoubleScalarRem (
mrxdkyyu3a , 65536.0 ) ; } _rtB -> e1bp14sc4c = ( uint16_T ) ( mrxdkyyu3a <
0.0 ? ( int32_T ) ( uint16_T ) - ( int16_T ) ( uint16_T ) - mrxdkyyu3a : (
int32_T ) ( uint16_T ) mrxdkyyu3a ) ; _rtB -> kkyoiydi51 = _rtB -> md5lklpjco
; _rtDW -> ltyywtjsvs = 4 ; } _rtZCE -> l0lrckgc3v = _rtB -> i4xlmgec4n ;
zcEvent = ( _rtB -> i4xlmgec4n && ( _rtZCE -> f1ha511qjh != POS_ZCSIG ) ) ;
if ( ! _rtB -> kfs3yiv4ko ) { if ( ! _rtDW -> jfmlfssfyo ) {
ssCallAccelRunBlock ( S , 8 , 0 , SS_CALL_RTW_GENERATED_ENABLE ) ; _rtDW ->
jfmlfssfyo = true ; } if ( zcEvent ) { ssCallAccelRunBlock ( S , 8 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> n4lp00pawx = _rtB -> elbd0uddj0 ; _rtB ->
glr1orqcmy = _rtB -> hlfbluxvf0 ; _rtDW -> k0gi0rxa3n = 4 ; } _rtZCE ->
f1ha511qjh = _rtB -> i4xlmgec4n ; } else { if ( _rtDW -> jfmlfssfyo ) {
ssCallAccelRunBlock ( S , 8 , 0 , SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW ->
jfmlfssfyo = false ; } _rtZCE -> f1ha511qjh = _rtB -> i4xlmgec4n ; } if (
_rtB -> glr1orqcmy ) { if ( ! _rtDW -> owg1faif2l ) { ssCallAccelRunBlock ( S
, 15 , 0 , SS_CALL_RTW_GENERATED_ENABLE ) ; _rtDW -> owg1faif2l = true ; } }
else { if ( _rtDW -> owg1faif2l ) { ssCallAccelRunBlock ( S , 15 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW -> owg1faif2l = false ; } } if (
_rtDW -> owg1faif2l ) { bvaizlm3hu = _rtP -> P_6 * ssGetT ( S ) ; if (
bvaizlm3hu - muDoubleScalarFloor ( bvaizlm3hu ) >= 0.5 ) { mrxdkyyu3a = _rtP
-> P_5 ; } else { mrxdkyyu3a = - _rtP -> P_5 ; } bvaizlm3hu = _rtP -> P_8 *
ssGetT ( S ) ; if ( bvaizlm3hu - muDoubleScalarFloor ( bvaizlm3hu ) >= 0.5 )
{ euwqtow2kn = _rtP -> P_7 ; } else { euwqtow2kn = - _rtP -> P_7 ; }
bvaizlm3hu = _rtP -> P_10 * ssGetT ( S ) ; if ( bvaizlm3hu -
muDoubleScalarFloor ( bvaizlm3hu ) >= 0.5 ) { bvaizlm3hu = _rtP -> P_9 ; }
else { bvaizlm3hu = - _rtP -> P_9 ; } ssCallAccelRunBlock ( S , 15 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; switch ( ( int32_T ) _rtB -> avtchmnlb3 ) { case 1 :
_rtB -> o5uaokwfqe = muDoubleScalarSign ( mrxdkyyu3a ) ; break ; case 2 :
_rtB -> o5uaokwfqe = muDoubleScalarSign ( euwqtow2kn ) ; break ; default :
_rtB -> o5uaokwfqe = muDoubleScalarSign ( bvaizlm3hu ) ; break ; } srUpdateBC
( _rtDW -> jetpgmwmre ) ; } zcEvent_p = rt_ZCFcn ( RISING_ZERO_CROSSING , &
_rtZCE -> jjoxkifcug , ( _rtB -> o5uaokwfqe ) ) ; if ( _rtB -> glr1orqcmy ) {
if ( ! _rtDW -> h5n3s3dq2r ) { ssCallAccelRunBlock ( S , 2 , 0 ,
SS_CALL_RTW_GENERATED_ENABLE ) ; _rtDW -> h5n3s3dq2r = true ; } if (
zcEvent_p != NO_ZCEVENT ) { ssCallAccelRunBlock ( S , 2 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; mrxdkyyu3a = muDoubleScalarFloor ( _rtB -> jnekx4ta20
) ; if ( muDoubleScalarIsNaN ( mrxdkyyu3a ) || muDoubleScalarIsInf (
mrxdkyyu3a ) ) { mrxdkyyu3a = 0.0 ; } else { mrxdkyyu3a = muDoubleScalarRem (
mrxdkyyu3a , 65536.0 ) ; } _rtB -> lgnfpxoyff = ( uint16_T ) ( mrxdkyyu3a <
0.0 ? ( int32_T ) ( uint16_T ) - ( int16_T ) ( uint16_T ) - mrxdkyyu3a : (
int32_T ) ( uint16_T ) mrxdkyyu3a ) ; mrxdkyyu3a = muDoubleScalarFloor ( _rtB
-> j5c450bvg2 ) ; if ( muDoubleScalarIsNaN ( mrxdkyyu3a ) ||
muDoubleScalarIsInf ( mrxdkyyu3a ) ) { mrxdkyyu3a = 0.0 ; } else { mrxdkyyu3a
= muDoubleScalarRem ( mrxdkyyu3a , 65536.0 ) ; } _rtB -> d5ag11elf2 = (
uint16_T ) ( mrxdkyyu3a < 0.0 ? ( int32_T ) ( uint16_T ) - ( int16_T ) (
uint16_T ) - mrxdkyyu3a : ( int32_T ) ( uint16_T ) mrxdkyyu3a ) ; _rtB ->
fhynzjgsar = _rtB -> p5rzneu4es ; _rtDW -> dgnqeesnhm = 4 ; } } else { if (
_rtDW -> h5n3s3dq2r ) { ssCallAccelRunBlock ( S , 2 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW -> h5n3s3dq2r = false ; } } if ( _rtB
-> glr1orqcmy ) { _rtB -> ctc00cjmjr = _rtB -> lgnfpxoyff ; } else { _rtB ->
ctc00cjmjr = _rtB -> m14byrppqb ; } if ( _rtB -> kfs3yiv4ko ) { bkcquvelro =
_rtB -> kj3vqimcoe ; } else { bkcquvelro = _rtB -> dpfeo1grzk ; } _rtB ->
cdzu4305mr = ( ( ! _rtDW -> b4mjfh3udk ) && _rtB -> chrvmayc3n && ( ! _rtB ->
kfs3yiv4ko ) ) ; _rtB -> kluydjr32k = _rtDW -> cqk1x44r2z ; zcEvent = ( _rtB
-> i4xlmgec4n && ( _rtZCE -> ljlfysuk5f != POS_ZCSIG ) ) ; if ( _rtB ->
dm2eg3iypa ) { if ( ! _rtDW -> aq2bidj0zz ) { ssCallAccelRunBlock ( S , 20 ,
0 , SS_CALL_RTW_GENERATED_ENABLE ) ; _rtDW -> aq2bidj0zz = true ; } if (
zcEvent ) { ssCallAccelRunBlock ( S , 20 , 0 , SS_CALL_MDL_OUTPUTS ) ;
mrxdkyyu3a = muDoubleScalarFloor ( _rtB -> n4wvrvzi0m ) ; if (
muDoubleScalarIsNaN ( mrxdkyyu3a ) || muDoubleScalarIsInf ( mrxdkyyu3a ) ) {
mrxdkyyu3a = 0.0 ; } else { mrxdkyyu3a = muDoubleScalarRem ( mrxdkyyu3a ,
65536.0 ) ; } _rtB -> icxowhnvez = ( uint16_T ) ( mrxdkyyu3a < 0.0 ? (
int32_T ) ( uint16_T ) - ( int16_T ) ( uint16_T ) - mrxdkyyu3a : ( int32_T )
( uint16_T ) mrxdkyyu3a ) ; _rtDW -> muvr2rzbx4 = 4 ; } _rtZCE -> ljlfysuk5f
= _rtB -> i4xlmgec4n ; } else { if ( _rtDW -> aq2bidj0zz ) {
ssCallAccelRunBlock ( S , 20 , 0 , SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW ->
aq2bidj0zz = false ; } _rtZCE -> ljlfysuk5f = _rtB -> i4xlmgec4n ; }
ssCallAccelRunBlock ( S , 33 , 11 , SS_CALL_MDL_OUTPUTS ) ; memcpy ( & _rtB
-> m0gk3gdgdp [ 0 ] , & _rtDW -> hqjfl10bs2 [ 0 ] , sizeof ( uint8_T ) << 16U
) ; memcpy ( & _rtB -> d4cmleukdr [ 0 ] , & _rtDW -> go3ghycode [ 0 ] ,
sizeof ( real_T ) << 16U ) ; _rtB -> po5gg12cfk = _rtB -> m0gk3gdgdp [ (
int32_T ) _rtDW -> b5hm41dc1b ] ; _rtB -> a3vjwj3fz5 = _rtB -> d4cmleukdr [ (
int32_T ) _rtDW -> exrxdpfwtz ] ; zcEvent_p = rt_ZCFcn ( RISING_ZERO_CROSSING
, & _rtZCE -> iwyld0ddta , ( _rtB -> o5uaokwfqe ) ) ; if ( zcEvent_p !=
NO_ZCEVENT ) { ssCallAccelRunBlock ( S , 31 , 0 , SS_CALL_MDL_OUTPUTS ) ;
mrxdkyyu3a = muDoubleScalarFloor ( _rtB -> kxq0yr2zzg ) ; if (
muDoubleScalarIsNaN ( mrxdkyyu3a ) || muDoubleScalarIsInf ( mrxdkyyu3a ) ) {
mrxdkyyu3a = 0.0 ; } else { mrxdkyyu3a = muDoubleScalarRem ( mrxdkyyu3a ,
256.0 ) ; } _rtB -> dfhf1jqznh = ( uint8_T ) ( mrxdkyyu3a < 0.0 ? ( int32_T )
( uint8_T ) - ( int8_T ) ( uint8_T ) - mrxdkyyu3a : ( int32_T ) ( uint8_T )
mrxdkyyu3a ) ; _rtDW -> o04s32myyn = 4 ; } ssCallAccelRunBlock ( S , 33 , 19
, SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 33 , 20 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 33 , 21 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 33 , 22 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 33 , 23 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> d5ywamrzl3 = _rtB -> ei5nz554lr [ ( int32_T )
_rtDW -> loxluep5xt ] ; ssCallAccelRunBlock ( S , 33 , 26 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> k5s5m5ahcw = ( _rtB -> glr1orqcmy && _rtB ->
fhynzjgsar ) ; mrxdkyyu3a = ( _rtDW -> e3a0aiflt3 < _rtP -> P_23 ) && ( _rtDW
-> e3a0aiflt3 >= 0 ) ? _rtP -> P_21 : 0.0 ; if ( _rtDW -> e3a0aiflt3 >= _rtP
-> P_22 - 1.0 ) { _rtDW -> e3a0aiflt3 = 0 ; } else { _rtDW -> e3a0aiflt3 ++ ;
} zcEvent_p = rt_ZCFcn ( RISING_ZERO_CROSSING , & _rtZCE -> na3scujfre , (
mrxdkyyu3a ) ) ; if ( _rtB -> kkyoiydi51 ) { if ( ! _rtDW -> cbdjyzwulu ) {
ssCallAccelRunBlock ( S , 18 , 0 , SS_CALL_RTW_GENERATED_ENABLE ) ; _rtDW ->
cbdjyzwulu = true ; } if ( zcEvent_p != NO_ZCEVENT ) { if ( _rtB ->
k5s5m5ahcw ) { _rtB -> gsdygsgese = _rtB -> dfhf1jqznh ; _rtB -> jysik3q443 =
_rtB -> ctc00cjmjr ; } else { _rtB -> gsdygsgese = _rtB -> amtbqmxnku ; _rtB
-> jysik3q443 = _rtB -> e1bp14sc4c ; } ssCallAccelRunBlock ( S , 18 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtDW -> kp33j4pyjm = 4 ; } } else { if ( _rtDW ->
cbdjyzwulu ) { ssCallAccelRunBlock ( S , 18 , 0 ,
SS_CALL_RTW_GENERATED_DISABLE ) ; _rtDW -> cbdjyzwulu = false ; } }
ssCallAccelRunBlock ( S , 33 , 30 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 31 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 32 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 33 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 34 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 33 , 35 , SS_CALL_MDL_OUTPUTS ) ; zcEvent = ( _rtB
-> kkyoiydi51 || _rtB -> fhynzjgsar ) ; mrxdkyyu3a = _rtB -> e1bp14sc4c ;
_rtB -> ke1bnlmpuc = _rtB -> ctc00cjmjr ; _rtB -> p3gs4bhemv = ! ( zcEvent &&
( ( real_T ) _rtB -> e1bp14sc4c - _rtB -> ke1bnlmpuc == hqjn33ynqk ( S ) ->
io0vt1ixzv ) ) ; ssCallAccelRunBlock ( S , 33 , 43 , SS_CALL_MDL_OUTPUTS ) ;
if ( _rtB -> kkyoiydi51 ) { memcpy ( & _rtB -> mjocpz3wod [ 0 ] , & _rtB ->
m0gk3gdgdp [ 0 ] , sizeof ( uint8_T ) << 16U ) ; _rtB -> mjocpz3wod [ (
int32_T ) mrxdkyyu3a ] = _rtB -> amtbqmxnku ; memcpy ( & _rtB -> patjherp2m [
0 ] , & _rtB -> mjocpz3wod [ 0 ] , sizeof ( uint8_T ) << 16U ) ; } else {
memcpy ( & _rtB -> patjherp2m [ 0 ] , & _rtB -> m0gk3gdgdp [ 0 ] , sizeof (
uint8_T ) << 16U ) ; } if ( zcEvent ) { if ( _rtB -> fhynzjgsar ) { memcpy (
& _rtB -> bunwd2uboq [ 0 ] , & _rtB -> patjherp2m [ 0 ] , sizeof ( uint8_T )
<< 16U ) ; _rtB -> bunwd2uboq [ ( int32_T ) _rtB -> ke1bnlmpuc ] = _rtB ->
dfhf1jqznh ; memcpy ( & _rtB -> d1i41v3fet [ 0 ] , & _rtB -> bunwd2uboq [ 0 ]
, sizeof ( uint8_T ) << 16U ) ; } else { memcpy ( & _rtB -> d1i41v3fet [ 0 ]
, & _rtB -> patjherp2m [ 0 ] , sizeof ( uint8_T ) << 16U ) ; } memcpy ( &
_rtB -> pvcwbkmjkl [ 0 ] , & _rtB -> d1i41v3fet [ 0 ] , sizeof ( uint8_T ) <<
16U ) ; } else { memcpy ( & _rtB -> pvcwbkmjkl [ 0 ] , & _rtB -> m0gk3gdgdp [
0 ] , sizeof ( uint8_T ) << 16U ) ; } zcEvent = _rtB -> kkyoiydi51 ; _rtB ->
lso3iaftnd = _rtB -> jysik3q443 ; _rtB -> fl5uakd4ow = _rtB -> icxowhnvez ;
_rtB -> p3gs4bhemv = ! ( _rtB -> kkyoiydi51 && ( _rtB -> lso3iaftnd - _rtB ->
fl5uakd4ow == hqjn33ynqk ( S ) -> csl5ut11kk ) ) ; ssCallAccelRunBlock ( S ,
33 , 55 , SS_CALL_MDL_OUTPUTS ) ; if ( _rtB -> kkyoiydi51 ) { memcpy ( & _rtB
-> l3hzzlpk2n [ 0 ] , & _rtB -> ei5nz554lr [ 0 ] , sizeof ( uint8_T ) << 16U
) ; _rtB -> l3hzzlpk2n [ ( int32_T ) _rtB -> lso3iaftnd ] = _rtB ->
gsdygsgese ; memcpy ( & _rtB -> jdng10cm0v [ 0 ] , & _rtB -> l3hzzlpk2n [ 0 ]
, sizeof ( uint8_T ) << 16U ) ; } else { memcpy ( & _rtB -> jdng10cm0v [ 0 ]
, & _rtB -> ei5nz554lr [ 0 ] , sizeof ( uint8_T ) << 16U ) ; } for ( i = 0 ;
i < 65536 ; i ++ ) { if ( zcEvent ) { _rtB -> ktfas2zxxe [ i ] = _rtB ->
jdng10cm0v [ i ] ; _rtB -> itz4asssmu [ i ] = _rtB -> ktfas2zxxe [ i ] ; }
else { _rtB -> itz4asssmu [ i ] = _rtB -> ei5nz554lr [ i ] ; } } zcEvent = (
_rtB -> kfs3yiv4ko || _rtB -> khtyk55tjl ) ; _rtB -> gu51vka5ro = _rtB ->
d5ag11elf2 ; _rtB -> p3gs4bhemv = ! ( zcEvent && ( ( real_T ) bkcquvelro -
_rtB -> gu51vka5ro == hqjn33ynqk ( S ) -> hegv310w2e ) ) ;
ssCallAccelRunBlock ( S , 33 , 67 , SS_CALL_MDL_OUTPUTS ) ; if ( _rtB ->
kfs3yiv4ko ) { memcpy ( & _rtB -> kiynbqqmhv [ 0 ] , & _rtB -> d4cmleukdr [ 0
] , sizeof ( real_T ) << 16U ) ; _rtB -> kiynbqqmhv [ bkcquvelro ] = _rtB ->
lndsmidx45 ; memcpy ( & _rtB -> lc0z3kvpym [ 0 ] , & _rtB -> kiynbqqmhv [ 0 ]
, sizeof ( real_T ) << 16U ) ; } else { memcpy ( & _rtB -> lc0z3kvpym [ 0 ] ,
& _rtB -> d4cmleukdr [ 0 ] , sizeof ( real_T ) << 16U ) ; } if ( zcEvent ) {
if ( _rtB -> khtyk55tjl ) { memcpy ( & _rtB -> auty1pvbml [ 0 ] , & _rtB ->
lc0z3kvpym [ 0 ] , sizeof ( real_T ) << 16U ) ; _rtB -> auty1pvbml [ (
int32_T ) _rtB -> gu51vka5ro ] = 0.0 ; memcpy ( & _rtB -> m51suwqcnk [ 0 ] ,
& _rtB -> auty1pvbml [ 0 ] , sizeof ( real_T ) << 16U ) ; } else { memcpy ( &
_rtB -> m51suwqcnk [ 0 ] , & _rtB -> lc0z3kvpym [ 0 ] , sizeof ( real_T ) <<
16U ) ; } memcpy ( & _rtB -> ih5dk3wqwa [ 0 ] , & _rtB -> m51suwqcnk [ 0 ] ,
sizeof ( real_T ) << 16U ) ; } else { memcpy ( & _rtB -> ih5dk3wqwa [ 0 ] , &
_rtB -> d4cmleukdr [ 0 ] , sizeof ( real_T ) << 16U ) ; } srUpdateBC ( _rtDW
-> enkhut2u1j ) ; } _rtB -> kcto23dute = ssGetT ( S ) ; ssCallAccelRunBlock (
S , 34 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 35 , 7 ,
SS_CALL_MDL_OUTPUTS ) ; UNUSED_PARAMETER ( tid ) ; } static void
mdlOutputsTID2 ( SimStruct * S , int_T tid ) { int32_T i ; nmrsf3ewec * _rtB
; n2clm314tw * _rtP ; cptjjmolnj * _rtDW ; _rtDW = ( ( cptjjmolnj * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( n2clm314tw * ) ssGetDefaultParam ( S ) )
; _rtB = ( ( nmrsf3ewec * ) _ssGetBlockIO ( S ) ) ; for ( i = 0 ; i < 25 ; i
++ ) { _rtB -> pddqokbn3n [ i ] = _rtP -> P_44 [ i ] ; } memcpy ( & _rtB ->
c2lgxruupz [ 0 ] , & _rtP -> P_28 [ 0 ] , 9U * sizeof ( real_T ) ) ; _rtB ->
l23zcoggf0 = _rtP -> P_29 ; _rtB -> p30edjyho5 = _rtP -> P_12 ; _rtB ->
dpfeo1grzk = _rtP -> P_35 ; _rtB -> m14byrppqb = _rtP -> P_36 ; _rtB ->
khtyk55tjl = _rtP -> P_54 ; _rtB -> dm2eg3iypa = _rtP -> P_55 ; srUpdateBC (
_rtDW -> enkhut2u1j ) ; _rtB -> do3lm0ygxh = _rtP -> P_30 ; UNUSED_PARAMETER
( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { nmrsf3ewec * _rtB ;
cptjjmolnj * _rtDW ; _rtDW = ( ( cptjjmolnj * ) ssGetRootDWork ( S ) ) ; _rtB
= ( ( nmrsf3ewec * ) _ssGetBlockIO ( S ) ) ; if ( _rtDW -> p0zorinmbo ) {
_rtDW -> kcukn3uc0b = _rtB -> fl5uakd4ow ; _rtDW -> ejt33hhxzs = _rtB ->
cdzu4305mr ; _rtDW -> b4mjfh3udk = _rtB -> dgzryvakfq ; _rtDW -> cqk1x44r2z =
_rtB -> fhynzjgsar ; _rtDW -> b5hm41dc1b = _rtB -> ke1bnlmpuc ; memcpy ( &
_rtDW -> bj1vmiqn0n [ 0 ] , & _rtB -> itz4asssmu [ 0 ] , sizeof ( uint8_T )
<< 16U ) ; memcpy ( & _rtDW -> hqjfl10bs2 [ 0 ] , & _rtB -> pvcwbkmjkl [ 0 ]
, sizeof ( uint8_T ) << 16U ) ; memcpy ( & _rtDW -> go3ghycode [ 0 ] , & _rtB
-> ih5dk3wqwa [ 0 ] , sizeof ( real_T ) << 16U ) ; _rtDW -> exrxdpfwtz = _rtB
-> gu51vka5ro ; _rtDW -> loxluep5xt = _rtB -> lso3iaftnd ; } UNUSED_PARAMETER
( tid ) ; }
#define MDL_UPDATE
static void mdlUpdateTID2 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; } static void mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal
( S , 0 , 853858663U ) ; ssSetChecksumVal ( S , 1 , 3890334564U ) ;
ssSetChecksumVal ( S , 2 , 2863389973U ) ; ssSetChecksumVal ( S , 3 ,
1597714832U ) ; { mxArray * slVerStructMat = NULL ; mxArray * slStrMat =
mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status =
mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if ( status
== 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 , "Version" ) ;
if ( slVerMat == NULL ) { status = 1 ; } else { status = mxGetString (
slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "8.6" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
cptjjmolnj ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( nmrsf3ewec ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
n2clm314tw ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & pfstiew3y5 ) ; _ssSetConstBlockIO ( S , & nhdfnhdvn3 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { { SimStruct * childS ;
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
SysOutputFcn ) ( NULL ) ; } slAccRegPrmChangeFcn ( S , mdlOutputsTID2 ) ; }
static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
