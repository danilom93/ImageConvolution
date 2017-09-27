#include "__cf_Progetto_1_0.h"
#ifndef RTW_HEADER_rt_zcfcn_h_
#define RTW_HEADER_rt_zcfcn_h_
#include "rtwtypes.h"
#include "solver_zc.h"
#ifndef slZcHadEvent
#define slZcHadEvent(ev, zcsDir) (((ev) & (zcsDir)) != 0x00 )
#endif
#ifndef slZcUnAliasEvents
#define slZcUnAliasEvents(evL,  evR)             ((((slZcHadEvent((evL), (SL_ZCS_EVENT_N2Z)) &&             slZcHadEvent((evR), (SL_ZCS_EVENT_Z2P))) ||             (slZcHadEvent((evL), (SL_ZCS_EVENT_P2Z)) &&             slZcHadEvent((evR), (SL_ZCS_EVENT_Z2N)))) ?             (SL_ZCS_EVENT_NUL) : (evR)))
#endif
extern ZCEventType rt_ZCFcn ( ZCDirection zcDir , ZCSigState * prevZc ,
real_T currValue ) ;
#endif
