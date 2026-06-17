
/* private: int __thiscall CSoundLibrary::DSFail(char *) */

int __thiscall CSoundLibrary::DSFail(CSoundLibrary *this,char *param_1)

{
                    /* 0x9e840  1444  ?DSFail@CSoundLibrary@@AAEHPAD@Z */
  CPrintF(param_1);
  ShutDown_dsound(this);
  DAT_362a520c = 0;
  return 0;
}

