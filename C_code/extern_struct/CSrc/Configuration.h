#ifndef __CONFIGURATION_H
#define __CONFIGURATION_H
#include "TSMaster.h"
#include <string>

typedef struct _TGlobalParameters {
} TGlobalParameters, *PGlobalParameters;

typedef struct _TDUTParameters {
} TDUTParameters, *PDUTParameters;

#ifdef TSMP_IMPL
TGlobalParameters cGlobalParameters = {
};
PGlobalParameters pGlobalParameters = &cGlobalParameters;
TDUTParameters cDUTParametersTemplate = {
};
PDUTParameters pDUTParameters = &cDUTParametersTemplate;
s32 vDUTIndex = -1;
std::string cDUTNames[] = {
  "Kvaser",
};
TDUTParameters cDUTParameters_Kvaser = {
};
PDUTParameters cDUTParameters[1] = {&cDUTParameters_Kvaser};
#endif

extern PGlobalParameters pGlobalParameters;
extern PDUTParameters pDUTParameters;
extern PDUTParameters cDUTParameters[];
extern s32 vDUTIndex;

#endif
