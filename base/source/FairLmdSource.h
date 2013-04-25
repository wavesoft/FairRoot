// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                           FairLmdSource                           -----
// -----                    Created 12.04.2013 by D.Kresan                 -----
// -----------------------------------------------------------------------------

#ifndef FAIRLMDSOURCE_H
#define FAIRLMDSOURCE_H

extern "C"
{
#include "f_evt.h"
#include "s_filhe_swap.h"
#include "s_bufhe_swap.h"
}

#include "FairSource.h"


class FairLmdSource : public FairSource
{
  public:
    FairLmdSource(char* fileName);
    virtual ~FairLmdSource();

    virtual Bool_t Init();
    virtual Bool_t Read();
    virtual void Close();

  private:
    char* fFileName;
    s_evt_channel* fxInputChannel;
    s_ve10_1* fxEvent;
    s_bufhe* fxBuffer;
    Int_t* fxEventData;
    s_ves10_1* fxSubEvent;


  public:
    ClassDef(FairLmdSource, 0)
};


#endif
