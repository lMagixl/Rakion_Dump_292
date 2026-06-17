
/* public: void __thiscall CCommunicationInterface::GetHostName(class CTString &,class CTString &)
    */

void __thiscall
CCommunicationInterface::GetHostName
          (CCommunicationInterface *this,CTString *param_1,CTString *param_2)

{
  char *pcVar1;
  
                    /* 0xfb5e0  1917  ?GetHostName@CCommunicationInterface@@QAEXAAVCTString@@0@Z */
  pcVar1 = StringDuplicate(DAT_362cd144);
  StringFree(*(char **)param_1);
  *(char **)param_1 = pcVar1;
  pcVar1 = StringDuplicate(DAT_362cd140);
  StringFree(*(char **)param_2);
  *(char **)param_2 = pcVar1;
  return;
}

